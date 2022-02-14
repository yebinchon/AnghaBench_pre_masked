
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {scalar_t__ sleep_cookie; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;

__attribute__((used)) static void FUNC_5(struct mwifiex_adapter *VAR_0)
{
 struct pcie_service_card *VAR_1 = VAR_0->card;
 const struct mwifiex_pcie_card_reg *VAR_2 = VAR_1->pcie.reg;

 if (VAR_2->sleep_cookie)
  FUNC_3(VAR_0);

 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0);
}
