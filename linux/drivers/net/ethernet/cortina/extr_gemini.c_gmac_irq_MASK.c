
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dev_id; } ;
struct TYPE_2__ {int rx_fifo_errors; } ;
struct gemini_ethernet_port {int ir_stats_syncp; TYPE_1__ stats; int rx_coalesce_timer; int rx_coalesce_nsecs; int napi; struct gemini_ethernet* geth; } ;
struct gemini_ethernet {int irq_lock; scalar_t__ base; } ;
typedef int ktime_t ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct gemini_ethernet_port* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_16(int VAR_10, void *VAR_11)
{
 struct gemini_ethernet_port *VAR_12;
 struct net_device *VAR_13 = VAR_11;
 struct gemini_ethernet *VAR_14;
 u32 VAR_15, VAR_16 = 0;

 VAR_12 = FUNC_10(VAR_13);
 VAR_14 = VAR_12->geth;

 VAR_15 = FUNC_3(VAR_13, 0);
 VAR_16 |= VAR_15;

 if (VAR_15 & (VAR_2 << (VAR_13->dev_id * 2))) {

  FUNC_9(VAR_13, "hw failure/sw bug\n");
  FUNC_0(VAR_13);


  FUNC_1(VAR_13, 0);
  return VAR_8;
 }

 if (VAR_15 & (VAR_3 << (VAR_13->dev_id * 6)))
  FUNC_4(VAR_13, 0);

 VAR_15 = FUNC_3(VAR_13, 1);
 VAR_16 |= VAR_15;

 if (VAR_15 & (VAR_0 << VAR_13->dev_id)) {
  FUNC_2(VAR_13, 0);

  if (!VAR_12->rx_coalesce_nsecs) {
   FUNC_8(&VAR_12->napi);
  } else {
   ktime_t VAR_17;

   VAR_17 = FUNC_7(0, VAR_12->rx_coalesce_nsecs);
   FUNC_6(&VAR_12->rx_coalesce_timer, VAR_17,
          VAR_7);
  }
 }

 VAR_15 = FUNC_3(VAR_13, 4);
 VAR_16 |= VAR_15;

 if (VAR_15 & (VAR_4 << (VAR_13->dev_id * 8)))
  FUNC_5(VAR_13);

 if (VAR_15 & (VAR_6 << (VAR_13->dev_id * 8))) {
  FUNC_15(VAR_5 << (VAR_13->dev_id * 8),
         VAR_14->base + VAR_1);

  FUNC_11(&VAR_14->irq_lock);
  FUNC_13(&VAR_12->ir_stats_syncp);
  ++VAR_12->stats.rx_fifo_errors;
  FUNC_14(&VAR_12->ir_stats_syncp);
  FUNC_12(&VAR_14->irq_lock);
 }

 return VAR_16 ? VAR_8 : VAR_9;
}
