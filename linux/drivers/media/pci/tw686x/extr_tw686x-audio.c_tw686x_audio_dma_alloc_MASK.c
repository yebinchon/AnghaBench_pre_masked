
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tw686x_dev {scalar_t__ dma_mode; TYPE_2__* pci_dev; } ;
struct tw686x_audio_channel {size_t ch; TYPE_1__* dma_descs; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int phys; int size; void* virt; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,size_t,char*) ;
 void* FUNC_1 (TYPE_2__*,int ,int *) ;
 int FUNC_2 (struct tw686x_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tw686x_dev *VAR_5,
      struct tw686x_audio_channel *VAR_6)
{
 int VAR_7;






 if (VAR_5->dma_mode != VAR_4)
  return 0;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  u32 VAR_8 = VAR_7 ? VAR_0[VAR_6->ch] : VAR_1[VAR_6->ch];
  void *VAR_9;

  VAR_9 = FUNC_1(VAR_5->pci_dev, VAR_2,
         &VAR_6->dma_descs[VAR_7].phys);
  if (!VAR_9) {
   FUNC_0(&VAR_5->pci_dev->dev,
    "dma%d: unable to allocate audio DMA %s-buffer\n",
    VAR_6->ch, VAR_7 ? "B" : "P");
   return -VAR_3;
  }
  VAR_6->dma_descs[VAR_7].virt = VAR_9;
  VAR_6->dma_descs[VAR_7].size = VAR_2;
  FUNC_2(VAR_5, VAR_8, VAR_6->dma_descs[VAR_7].phys);
 }
 return 0;
}
