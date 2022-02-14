
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_coal {int coal_ticks; int coal_bufs; int coal_ticks_irq; int coal_bufs_irq; int idle_thresh; int bufs_per_record; int budget; } ;
struct bnxt {int stats_coal_ticks; struct bnxt_coal tx_coal; struct bnxt_coal rx_coal; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bnxt *VAR_1)
{
 struct bnxt_coal *VAR_2;




 VAR_2 = &VAR_1->rx_coal;
 VAR_2->coal_ticks = 10;
 VAR_2->coal_bufs = 30;
 VAR_2->coal_ticks_irq = 1;
 VAR_2->coal_bufs_irq = 2;
 VAR_2->idle_thresh = 50;
 VAR_2->bufs_per_record = 2;
 VAR_2->budget = 64;

 VAR_2 = &VAR_1->tx_coal;
 VAR_2->coal_ticks = 28;
 VAR_2->coal_bufs = 30;
 VAR_2->coal_ticks_irq = 2;
 VAR_2->coal_bufs_irq = 2;
 VAR_2->bufs_per_record = 1;

 VAR_1->stats_coal_ticks = VAR_0;
}
