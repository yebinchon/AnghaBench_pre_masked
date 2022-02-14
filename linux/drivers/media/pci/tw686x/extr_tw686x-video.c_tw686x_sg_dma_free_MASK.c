
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_video_channel {int ** sg_descs; struct tw686x_dev* dev; struct tw686x_dma_desc* dma_descs; } ;
struct tw686x_dma_desc {int * virt; int phys; scalar_t__ size; } ;
struct tw686x_dev {int pci_dev; } ;


 int FUNC_0 (int ,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct tw686x_video_channel *VAR_0,
          unsigned int VAR_1)
{
 struct tw686x_dma_desc *VAR_2 = &VAR_0->dma_descs[VAR_1];
 struct tw686x_dev *VAR_3 = VAR_0->dev;

 if (VAR_2->size) {
  FUNC_0(VAR_3->pci_dev, VAR_2->size,
        VAR_2->virt, VAR_2->phys);
  VAR_2->virt = ((void*)0);
 }

 VAR_0->sg_descs[VAR_1] = ((void*)0);
}
