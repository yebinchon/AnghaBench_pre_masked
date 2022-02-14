
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt_ring_struct {int ring_mem; } ;
struct bnxt_tx_ring_info {struct bnxt_ring_struct tx_ring_struct; int * tx_push; int tx_push_mapping; } ;
struct bnxt {int tx_nr_rings; int tx_push_size; struct bnxt_tx_ring_info* tx_ring; struct pci_dev* pdev; } ;


 int FUNC_0 (struct bnxt*,int *) ;
 int FUNC_1 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_0)
{
 int VAR_1;
 struct pci_dev *VAR_2 = VAR_0->pdev;

 if (!VAR_0->tx_ring)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->tx_nr_rings; VAR_1++) {
  struct bnxt_tx_ring_info *VAR_3 = &VAR_0->tx_ring[VAR_1];
  struct bnxt_ring_struct *VAR_4;

  if (VAR_3->tx_push) {
   FUNC_1(&VAR_2->dev, VAR_0->tx_push_size,
       VAR_3->tx_push, VAR_3->tx_push_mapping);
   VAR_3->tx_push = ((void*)0);
  }

  VAR_4 = &VAR_3->tx_ring_struct;

  FUNC_0(VAR_0, &VAR_4->ring_mem);
 }
}
