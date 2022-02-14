
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {struct pci_dev* dev; TYPE_1__ pcie; } ;
struct pci_dev {int dummy; } ;
struct mwifiex_pcie_card_reg {int drv_rdy; } ;
struct mwifiex_adapter {scalar_t__ seq_num; struct pcie_service_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,int ,int) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct mwifiex_adapter *VAR_1)
{
 struct pcie_service_card *VAR_2 = VAR_1->card;
 const struct mwifiex_pcie_card_reg *VAR_3 = VAR_2->pcie.reg;
 struct pci_dev *VAR_4 = VAR_2->dev;

 if (FUNC_2(VAR_1, VAR_3->drv_rdy, 0x00000000))
  FUNC_0(VAR_1, VAR_0, "Failed to write driver not-ready signature\n");

 FUNC_3(VAR_4);

 VAR_1->seq_num = 0;

 FUNC_1(VAR_1);
}
