
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_buf_size; } ;
struct pcie_service_card {TYPE_1__ pcie; struct pci_dev* dev; } ;
struct pci_dev {int dummy; } ;
struct mwifiex_adapter {int tx_buf_size; struct pcie_service_card* card; } ;


 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_0)
{
 struct pcie_service_card *VAR_1 = VAR_0->card;
 struct pci_dev *VAR_2 = VAR_1->dev;




 VAR_0->tx_buf_size = VAR_1->pcie.tx_buf_size;

 FUNC_0(VAR_0);

 FUNC_1(VAR_2);
}
