
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int * tx_buffer; } ;
struct atl1e_adapter {TYPE_1__ tx_ring; int * ring_vir_addr; int ring_dma; int ring_size; struct pci_dev* pdev; } ;


 int FUNC_0 (struct atl1e_adapter*) ;
 int FUNC_1 (struct atl1e_adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_dev*,int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct atl1e_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);

 if (VAR_0->ring_vir_addr) {
  FUNC_3(VAR_1, VAR_0->ring_size,
    VAR_0->ring_vir_addr, VAR_0->ring_dma);
  VAR_0->ring_vir_addr = ((void*)0);
 }

 if (VAR_0->tx_ring.tx_buffer) {
  FUNC_2(VAR_0->tx_ring.tx_buffer);
  VAR_0->tx_ring.tx_buffer = ((void*)0);
 }
}
