
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {int evtbd_rdptr; scalar_t__ evtbd_ring_pbase; int * evtbd_ring_vbase; scalar_t__ evtbd_ring_size; scalar_t__ evtbd_wrptr; int dev; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int evt_rollover_ind; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (int ,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_0)
{
 struct pcie_service_card *VAR_1 = VAR_0->card;
 const struct mwifiex_pcie_card_reg *VAR_2 = VAR_1->pcie.reg;

 FUNC_0(VAR_0);

 if (VAR_1->evtbd_ring_vbase)
  FUNC_1(VAR_1->dev, VAR_1->evtbd_ring_size,
        VAR_1->evtbd_ring_vbase,
        VAR_1->evtbd_ring_pbase);
 VAR_1->evtbd_wrptr = 0;
 VAR_1->evtbd_rdptr = 0 | VAR_2->evt_rollover_ind;
 VAR_1->evtbd_ring_size = 0;
 VAR_1->evtbd_ring_vbase = ((void*)0);
 VAR_1->evtbd_ring_pbase = 0;

 return 0;
}
