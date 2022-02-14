
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct ntb_transport_mw {int * virt_addr; int * alloc_addr; scalar_t__ alloc_size; scalar_t__ buff_size; scalar_t__ xlat_size; int dma_addr; } ;
struct ntb_transport_ctx {TYPE_1__* ndev; struct ntb_transport_mw* mw_vec; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ntb_transport_ctx *VAR_1, int VAR_2)
{
 struct ntb_transport_mw *VAR_3 = &VAR_1->mw_vec[VAR_2];
 struct pci_dev *VAR_4 = VAR_1->ndev->pdev;

 if (!VAR_3->virt_addr)
  return;

 FUNC_1(VAR_1->ndev, VAR_0, VAR_2);
 FUNC_0(&VAR_4->dev, VAR_3->alloc_size,
     VAR_3->alloc_addr, VAR_3->dma_addr);
 VAR_3->xlat_size = 0;
 VAR_3->buff_size = 0;
 VAR_3->alloc_size = 0;
 VAR_3->alloc_addr = ((void*)0);
 VAR_3->virt_addr = ((void*)0);
}
