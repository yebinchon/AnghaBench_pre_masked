
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_video_channel {struct tw686x_dev* dev; struct tw686x_dma_desc* dma_descs; } ;
struct tw686x_dma_desc {int * virt; int phys; int size; } ;
struct tw686x_dev {struct pci_dev* pci_dev; int lock; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tw686x_video_channel *VAR_0,
       unsigned int VAR_1)
{
 struct tw686x_dma_desc *VAR_2 = &VAR_0->dma_descs[VAR_1];
 struct tw686x_dev *VAR_3 = VAR_0->dev;
 struct pci_dev *VAR_4;
 unsigned long VAR_5;


 FUNC_2(&VAR_3->lock, VAR_5);
 VAR_4 = VAR_3->pci_dev;
 FUNC_3(&VAR_3->lock, VAR_5);
 if (!VAR_4) {
  FUNC_0(1, "trying to deallocate on missing device\n");
  return;
 }

 if (VAR_2->virt) {
  FUNC_1(VAR_3->pci_dev, VAR_2->size,
        VAR_2->virt, VAR_2->phys);
  VAR_2->virt = ((void*)0);
 }
}
