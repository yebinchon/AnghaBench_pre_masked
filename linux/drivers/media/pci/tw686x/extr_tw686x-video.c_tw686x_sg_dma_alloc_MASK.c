
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tw686x_video_channel {size_t ch; void** sg_descs; struct tw686x_dev* dev; struct tw686x_dma_desc* dma_descs; } ;
struct tw686x_dma_desc {int phys; void* virt; scalar_t__ size; } ;
struct tw686x_dev {TYPE_2__* video_channels; int v4l2_dev; int pci_dev; } ;
struct TYPE_4__ {TYPE_1__* dma_descs; } ;
struct TYPE_3__ {void* virt; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,scalar_t__,int *) ;
 int FUNC_1 (struct tw686x_dev*,int ,int ) ;
 int FUNC_2 (int *,char*,size_t,char*) ;

__attribute__((used)) static int FUNC_3(struct tw686x_video_channel *VAR_4,
          unsigned int VAR_5)
{
 struct tw686x_dma_desc *VAR_6 = &VAR_4->dma_descs[VAR_5];
 struct tw686x_dev *VAR_7 = VAR_4->dev;
 u32 VAR_8 = VAR_5 ? VAR_1[VAR_4->ch] :
         VAR_0[VAR_4->ch];
 void *VAR_9;

 if (VAR_6->size) {

  VAR_9 = FUNC_0(VAR_7->pci_dev, VAR_6->size,
         &VAR_6->phys);
  if (!VAR_9) {
   FUNC_2(&VAR_7->v4l2_dev,
     "dma%d: unable to allocate %s-buffer\n",
     VAR_4->ch, VAR_5 ? "B" : "P");
   return -VAR_2;
  }
  VAR_6->virt = VAR_9;
  FUNC_1(VAR_7, VAR_8, VAR_6->phys);
 } else {
  VAR_9 = VAR_7->video_channels[0].dma_descs[VAR_5].virt +
         VAR_4->ch * VAR_3;
 }

 VAR_4->sg_descs[VAR_5] = VAR_9;
 return 0;
}
