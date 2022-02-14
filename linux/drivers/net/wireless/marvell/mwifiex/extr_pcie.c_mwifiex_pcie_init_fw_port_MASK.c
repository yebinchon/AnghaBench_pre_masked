
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {int txbd_wrptr; int rxbd_rdptr; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int tx_wrap_mask; int rx_rdptr; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 scalar_t__ FUNC_1 (struct mwifiex_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_1)
{
 struct pcie_service_card *VAR_2 = VAR_1->card;
 const struct mwifiex_pcie_card_reg *VAR_3 = VAR_2->pcie.reg;
 int VAR_4 = VAR_2->txbd_wrptr & VAR_3->tx_wrap_mask;


 if (FUNC_1(VAR_1, VAR_3->rx_rdptr, VAR_2->rxbd_rdptr |
         VAR_4)) {
  FUNC_0(VAR_1, VAR_0,
       "RECV DATA: failed to write reg->rx_rdptr\n");
  return -1;
 }
 return 0;
}
