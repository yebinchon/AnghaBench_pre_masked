
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {int * sleep_cookie_vbase; int * cmdrsp_buf; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {scalar_t__ sleep_cookie; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (struct mwifiex_adapter*) ;
 int FUNC_7 (struct mwifiex_adapter*) ;
 int FUNC_8 (struct mwifiex_adapter*) ;
 int FUNC_9 (struct mwifiex_adapter*) ;

__attribute__((used)) static int FUNC_10(struct mwifiex_adapter *VAR_1)
{
 struct pcie_service_card *VAR_2 = VAR_1->card;
 const struct mwifiex_pcie_card_reg *VAR_3 = VAR_2->pcie.reg;
 int VAR_4;

 VAR_2->cmdrsp_buf = ((void*)0);
 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_1, VAR_0, "Failed to create txbd ring\n");
  goto err_cre_txbd;
 }

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_1, VAR_0, "Failed to create rxbd ring\n");
  goto err_cre_rxbd;
 }

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_1, VAR_0, "Failed to create evtbd ring\n");
  goto err_cre_evtbd;
 }

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_1, VAR_0, "Failed to allocate cmdbuf buffer\n");
  goto err_alloc_cmdbuf;
 }

 if (VAR_3->sleep_cookie) {
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4) {
   FUNC_0(VAR_1, VAR_0, "Failed to allocate sleep_cookie buffer\n");
   goto err_alloc_cookie;
  }
 } else {
  VAR_2->sleep_cookie_vbase = ((void*)0);
 }

 return 0;

err_alloc_cookie:
 FUNC_6(VAR_1);
err_alloc_cmdbuf:
 FUNC_7(VAR_1);
err_cre_evtbd:
 FUNC_8(VAR_1);
err_cre_rxbd:
 FUNC_9(VAR_1);
err_cre_txbd:
 return VAR_4;
}
