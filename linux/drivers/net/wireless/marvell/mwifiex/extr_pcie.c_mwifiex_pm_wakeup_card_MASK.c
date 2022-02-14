
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {scalar_t__ sleep_cookie; int fw_status; } ;
struct mwifiex_adapter {int ps_state; struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_5)
{
 struct pcie_service_card *VAR_6 = VAR_5->card;
 const struct mwifiex_pcie_card_reg *VAR_7 = VAR_6->pcie.reg;

 FUNC_0(VAR_5, VAR_1,
      "event: Wakeup device...\n");

 if (VAR_7->sleep_cookie)
  FUNC_1(VAR_5);


 if (FUNC_2(VAR_5, VAR_7->fw_status, VAR_2)) {
  FUNC_0(VAR_5, VAR_0,
       "Writing fw_status register failed\n");
  return -1;
 }

 if (VAR_7->sleep_cookie) {
  FUNC_1(VAR_5);
  FUNC_0(VAR_5, VAR_3,
       "PCIE wakeup: Setting PS_STATE_AWAKE\n");
  VAR_5->ps_state = VAR_4;
 }

 return 0;
}
