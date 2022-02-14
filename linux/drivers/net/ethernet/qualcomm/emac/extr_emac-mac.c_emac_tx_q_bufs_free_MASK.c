
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ dma_addr; int * v_addr; int * tpbuff; } ;
struct emac_tx_queue {TYPE_1__ tpd; } ;
struct emac_adapter {struct emac_tx_queue tx_q; } ;


 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct emac_adapter *VAR_0)
{
 struct emac_tx_queue *VAR_1 = &VAR_0->tx_q;

 FUNC_0(VAR_0);

 FUNC_1(VAR_1->tpd.tpbuff);
 VAR_1->tpd.tpbuff = ((void*)0);
 VAR_1->tpd.v_addr = ((void*)0);
 VAR_1->tpd.dma_addr = 0;
 VAR_1->tpd.size = 0;
}
