
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct atl2_adapter {int ring_dma; int ring_vir_addr; int ring_size; struct pci_dev* pdev; } ;


 int FUNC_0 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct atl2_adapter *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 FUNC_0(VAR_1, VAR_0->ring_size, VAR_0->ring_vir_addr,
  VAR_0->ring_dma);
}
