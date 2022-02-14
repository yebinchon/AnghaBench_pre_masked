
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int count; int dma_addr; } ;
struct TYPE_8__ {int count; int dma_addr; } ;
struct TYPE_10__ {TYPE_4__ rrd; TYPE_3__ rfd; } ;
struct TYPE_6__ {int count; int dma_addr; } ;
struct TYPE_7__ {TYPE_1__ tpd; } ;
struct emac_adapter {int rxbuf_size; scalar_t__ base; TYPE_5__ rx_q; TYPE_2__ tx_q; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct emac_adapter *VAR_15)
{

 FUNC_2(FUNC_1(VAR_15->tx_q.tpd.dma_addr),
        VAR_15->base + VAR_1);

 FUNC_2(FUNC_0(VAR_15->tx_q.tpd.dma_addr),
        VAR_15->base + VAR_8);

 FUNC_2(VAR_15->tx_q.tpd.count & VAR_14,
        VAR_15->base + VAR_9);


 FUNC_2(FUNC_1(VAR_15->rx_q.rfd.dma_addr),
        VAR_15->base + VAR_0);

 FUNC_2(FUNC_0(VAR_15->rx_q.rfd.dma_addr),
        VAR_15->base + VAR_3);
 FUNC_2(FUNC_0(VAR_15->rx_q.rrd.dma_addr),
        VAR_15->base + VAR_6);

 FUNC_2(VAR_15->rx_q.rfd.count & VAR_11,
        VAR_15->base + VAR_4);
 FUNC_2(VAR_15->rx_q.rrd.count & VAR_12,
        VAR_15->base + VAR_7);

 FUNC_2(VAR_15->rxbuf_size & VAR_13,
        VAR_15->base + VAR_5);

 FUNC_2(0, VAR_15->base + VAR_2);




 FUNC_2(1, VAR_15->base + VAR_10);
}
