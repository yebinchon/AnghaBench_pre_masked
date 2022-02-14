
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {int rxbd_rdptr; scalar_t__ rxbd_ring_pbase; int * rxbd_ring_vbase; scalar_t__ rxbd_wrptr; scalar_t__ rxbd_ring_size; int dev; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int rx_rollover_ind; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (int ,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_0)
{
 struct pcie_service_card *VAR_1 = VAR_0->card;
 const struct mwifiex_pcie_card_reg *VAR_2 = VAR_1->pcie.reg;

 FUNC_0(VAR_0);

 if (VAR_1->rxbd_ring_vbase)
  FUNC_1(VAR_1->dev, VAR_1->rxbd_ring_size,
        VAR_1->rxbd_ring_vbase,
        VAR_1->rxbd_ring_pbase);
 VAR_1->rxbd_ring_size = 0;
 VAR_1->rxbd_wrptr = 0;
 VAR_1->rxbd_rdptr = 0 | VAR_2->rx_rollover_ind;
 VAR_1->rxbd_ring_vbase = ((void*)0);
 VAR_1->rxbd_ring_pbase = 0;

 return 0;
}
