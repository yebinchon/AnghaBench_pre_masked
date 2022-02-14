
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {int txbd_wrptr; int txbd_rdptr; TYPE_2__* dev; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int tx_mask; int tx_rollover_ind; } ;
struct TYPE_4__ {int device; } ;






__attribute__((used)) static inline int
FUNC_0(struct pcie_service_card *VAR_0)
{
 const struct mwifiex_pcie_card_reg *VAR_1 = VAR_0->pcie.reg;

 switch (VAR_0->dev->device) {
 case 130:
  if (((VAR_0->txbd_wrptr & VAR_1->tx_mask) !=
       (VAR_0->txbd_rdptr & VAR_1->tx_mask)) ||
      ((VAR_0->txbd_wrptr & VAR_1->tx_rollover_ind) !=
       (VAR_0->txbd_rdptr & VAR_1->tx_rollover_ind)))
   return 1;
  break;
 case 129:
 case 128:
  if (((VAR_0->txbd_wrptr & VAR_1->tx_mask) !=
       (VAR_0->txbd_rdptr & VAR_1->tx_mask)) ||
      ((VAR_0->txbd_wrptr & VAR_1->tx_rollover_ind) ==
       (VAR_0->txbd_rdptr & VAR_1->tx_rollover_ind)))
   return 1;
  break;
 }

 return 0;
}
