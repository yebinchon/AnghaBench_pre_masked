
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw686x_dev {int pci_dev; } ;
struct tw686x_audio_channel {TYPE_1__* dma_descs; } ;
struct TYPE_2__ {int * virt; int phys; int size; } ;


 int FUNC_0 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct tw686x_dev *VAR_0,
      struct tw686x_audio_channel *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (!VAR_1->dma_descs[VAR_2].virt)
   continue;
  FUNC_0(VAR_0->pci_dev, VAR_1->dma_descs[VAR_2].size,
        VAR_1->dma_descs[VAR_2].virt,
        VAR_1->dma_descs[VAR_2].phys);
  VAR_1->dma_descs[VAR_2].virt = ((void*)0);
 }
}
