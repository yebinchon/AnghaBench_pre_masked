
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ dma_addr; int * v_addr; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ dma_addr; int * v_addr; int * rfbuff; } ;
struct emac_rx_queue {TYPE_1__ rrd; TYPE_2__ rfd; } ;
struct emac_adapter {struct emac_rx_queue rx_q; } ;


 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct emac_adapter *VAR_0)
{
 struct emac_rx_queue *VAR_1 = &VAR_0->rx_q;

 FUNC_0(VAR_0);

 FUNC_1(VAR_1->rfd.rfbuff);
 VAR_1->rfd.rfbuff = ((void*)0);

 VAR_1->rfd.v_addr = ((void*)0);
 VAR_1->rfd.dma_addr = 0;
 VAR_1->rfd.size = 0;

 VAR_1->rrd.v_addr = ((void*)0);
 VAR_1->rrd.dma_addr = 0;
 VAR_1->rrd.size = 0;
}
