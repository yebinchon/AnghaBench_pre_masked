
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tw686x_video_channel {size_t ch; int width; int height; TYPE_2__* dma_descs; TYPE_1__* format; struct tw686x_dev* dev; } ;
struct tw686x_dev {int v4l2_dev; int pci_dev; } ;
struct TYPE_4__ {unsigned int size; int phys; void* virt; } ;
struct TYPE_3__ {int depth; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (void*,char*) ;
 void* FUNC_1 (int ,unsigned int,int *) ;
 int FUNC_2 (struct tw686x_dev*,int ,int ) ;
 int FUNC_3 (int *,char*,size_t,char*) ;

__attribute__((used)) static int FUNC_4(struct tw686x_video_channel *VAR_3,
       unsigned int VAR_4)
{
 struct tw686x_dev *VAR_5 = VAR_3->dev;
 u32 VAR_6 = VAR_4 ? VAR_1[VAR_3->ch] : VAR_2[VAR_3->ch];
 unsigned int VAR_7;
 void *VAR_8;

 FUNC_0(VAR_3->dma_descs[VAR_4].virt,
      "Allocating buffer but previous still here\n");

 VAR_7 = (VAR_3->width * VAR_3->height * VAR_3->format->depth) >> 3;
 VAR_8 = FUNC_1(VAR_5->pci_dev, VAR_7,
        &VAR_3->dma_descs[VAR_4].phys);
 if (!VAR_8) {
  FUNC_3(&VAR_5->v4l2_dev,
    "dma%d: unable to allocate %s-buffer\n",
    VAR_3->ch, VAR_4 ? "B" : "P");
  return -VAR_0;
 }
 VAR_3->dma_descs[VAR_4].size = VAR_7;
 VAR_3->dma_descs[VAR_4].virt = VAR_8;
 FUNC_2(VAR_5, VAR_6, VAR_3->dma_descs[VAR_4].phys);

 return 0;
}
