
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_id; } ;
struct TYPE_2__ {unsigned int rx_missed_errors; unsigned int multicast; } ;
struct gemini_ethernet_port {unsigned int* hw_stats; int ir_stats_syncp; TYPE_1__ stats; scalar_t__ gmac_base; struct gemini_ethernet* geth; } ;
struct gemini_ethernet {int irq_lock; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct gemini_ethernet_port* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_8)
{
 struct gemini_ethernet_port *VAR_9 = FUNC_0(VAR_8);
 unsigned int VAR_10, VAR_11, VAR_12;
 struct gemini_ethernet *VAR_13 = VAR_9->geth;
 unsigned long VAR_14;

 FUNC_2(&VAR_13->irq_lock, VAR_14);
 FUNC_4(&VAR_9->ir_stats_syncp);

 VAR_10 = FUNC_1(VAR_9->gmac_base + VAR_3);
 VAR_9->hw_stats[0] += VAR_10;
 VAR_9->hw_stats[1] += FUNC_1(VAR_9->gmac_base + VAR_4);
 VAR_11 = FUNC_1(VAR_9->gmac_base + VAR_7);
 VAR_9->hw_stats[2] += VAR_11;
 VAR_12 = FUNC_1(VAR_9->gmac_base + VAR_2);
 VAR_9->hw_stats[3] += VAR_12;
 VAR_9->hw_stats[4] += FUNC_1(VAR_9->gmac_base + VAR_5);
 VAR_9->hw_stats[5] += FUNC_1(VAR_9->gmac_base + VAR_6);

 VAR_9->stats.rx_missed_errors += VAR_10;
 VAR_9->stats.multicast += VAR_11;
 VAR_9->stats.multicast += VAR_12;

 FUNC_6(VAR_1 << (VAR_8->dev_id * 8),
        VAR_13->base + VAR_0);

 FUNC_5(&VAR_9->ir_stats_syncp);
 FUNC_3(&VAR_13->irq_lock, VAR_14);
}
