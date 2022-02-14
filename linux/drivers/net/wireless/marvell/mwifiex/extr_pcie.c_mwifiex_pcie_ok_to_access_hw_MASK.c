
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {scalar_t__ sleep_cookie_vbase; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int sleep_cookie; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct mwifiex_adapter *VAR_2)
{
 u32 VAR_3;
 struct pcie_service_card *VAR_4 = VAR_2->card;
 const struct mwifiex_pcie_card_reg *VAR_5 = VAR_4->pcie.reg;

 if (!VAR_5->sleep_cookie)
  return 1;

 if (VAR_4->sleep_cookie_vbase) {
  VAR_3 = FUNC_0(VAR_4->sleep_cookie_vbase);
  FUNC_1(VAR_2, VAR_1,
       "info: ACCESS_HW: sleep cookie=0x%x\n",
       VAR_3);
  if (VAR_3 == VAR_0)
   return 1;
 }

 return 0;
}
