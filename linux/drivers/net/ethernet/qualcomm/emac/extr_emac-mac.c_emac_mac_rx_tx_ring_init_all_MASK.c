
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_6__ {int consume_shift; int consume_mask; int consume_reg; int produce_shift; int produce_mask; int produce_reg; } ;
struct TYPE_5__ {int mask; } ;
struct TYPE_4__ {int intr; TYPE_2__* irq; int consume_shift; int consume_mask; int consume_reg; int process_shft; int process_mask; void* process_reg; int produce_shift; int produce_mask; void* produce_reg; int netdev; } ;
struct emac_adapter {TYPE_3__ tx_q; TYPE_2__ irq; TYPE_1__ rx_q; int netdev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_0(struct platform_device *VAR_15,
      struct emac_adapter *VAR_16)
{
 VAR_16->rx_q.netdev = VAR_16->netdev;

 VAR_16->rx_q.produce_reg = VAR_0;
 VAR_16->rx_q.produce_mask = VAR_13;
 VAR_16->rx_q.produce_shift = VAR_14;

 VAR_16->rx_q.process_reg = VAR_0;
 VAR_16->rx_q.process_mask = VAR_11;
 VAR_16->rx_q.process_shft = VAR_12;

 VAR_16->rx_q.consume_reg = VAR_3;
 VAR_16->rx_q.consume_mask = VAR_9;
 VAR_16->rx_q.consume_shift = VAR_10;

 VAR_16->rx_q.irq = &VAR_16->irq;
 VAR_16->rx_q.intr = VAR_16->irq.mask & VAR_4;

 VAR_16->tx_q.produce_reg = VAR_1;
 VAR_16->tx_q.produce_mask = VAR_7;
 VAR_16->tx_q.produce_shift = VAR_8;

 VAR_16->tx_q.consume_reg = VAR_2;
 VAR_16->tx_q.consume_mask = VAR_5;
 VAR_16->tx_q.consume_shift = VAR_6;
}
