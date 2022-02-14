
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int fw_status; } ;
struct mwifiex_adapter {int winner; struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*,...) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*,int ,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct mwifiex_adapter *VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4 = 0;
 struct pcie_service_card *VAR_5 = VAR_2->card;
 const struct mwifiex_pcie_card_reg *VAR_6 = VAR_5->pcie.reg;

 if (FUNC_1(VAR_2, VAR_6->fw_status, &VAR_3)) {
  VAR_4 = -1;
 } else if (!VAR_3) {
  FUNC_0(VAR_2, VAR_1, "PCI-E is the winner\n");
  VAR_2->winner = 1;
 } else {
  FUNC_0(VAR_2, VAR_0,
       "PCI-E is not the winner <%#x>", VAR_3);
 }

 return VAR_4;
}
