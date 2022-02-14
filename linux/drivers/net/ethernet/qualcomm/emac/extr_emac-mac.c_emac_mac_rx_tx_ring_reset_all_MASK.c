
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {unsigned int count; TYPE_5__* rfbuff; scalar_t__ consume_idx; scalar_t__ produce_idx; } ;
struct TYPE_11__ {scalar_t__ consume_idx; scalar_t__ produce_idx; } ;
struct TYPE_14__ {TYPE_6__ rfd; TYPE_4__ rrd; } ;
struct TYPE_9__ {unsigned int count; TYPE_1__* tpbuff; scalar_t__ consume_idx; scalar_t__ produce_idx; } ;
struct TYPE_10__ {TYPE_2__ tpd; } ;
struct emac_adapter {TYPE_7__ rx_q; TYPE_3__ tx_q; } ;
struct TYPE_12__ {scalar_t__ dma_addr; } ;
struct TYPE_8__ {scalar_t__ dma_addr; } ;



__attribute__((used)) static void FUNC_0(struct emac_adapter *VAR_0)
{
 unsigned int VAR_1;

 VAR_0->tx_q.tpd.produce_idx = 0;
 VAR_0->tx_q.tpd.consume_idx = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->tx_q.tpd.count; VAR_1++)
  VAR_0->tx_q.tpd.tpbuff[VAR_1].dma_addr = 0;

 VAR_0->rx_q.rrd.produce_idx = 0;
 VAR_0->rx_q.rrd.consume_idx = 0;
 VAR_0->rx_q.rfd.produce_idx = 0;
 VAR_0->rx_q.rfd.consume_idx = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->rx_q.rfd.count; VAR_1++)
  VAR_0->rx_q.rfd.rfbuff[VAR_1].dma_addr = 0;
}
