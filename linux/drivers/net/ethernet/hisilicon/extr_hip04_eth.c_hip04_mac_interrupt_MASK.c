
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device_stats {int tx_dropped; int rx_dropped; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct hip04_priv {int reg_inten; int napi; int tx_coalesce_timer; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct hip04_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct net_device *VAR_13 = (struct net_device *)VAR_12;
 struct hip04_priv *VAR_14 = FUNC_4(VAR_13);
 struct net_device_stats *VAR_15 = &VAR_13->stats;
 u32 VAR_16 = FUNC_5(VAR_14->base + VAR_5);

 if (!VAR_16)
  return VAR_3;

 FUNC_7(VAR_1, VAR_14->base + VAR_6);

 if (FUNC_6(VAR_16 & VAR_0)) {
  if (VAR_16 & (VAR_9 | VAR_7)) {
   VAR_15->rx_errors++;
   VAR_15->rx_dropped++;
   FUNC_3(VAR_13, "rx drop\n");
  }
  if (VAR_16 & VAR_10) {
   VAR_15->tx_dropped++;
   FUNC_3(VAR_13, "tx drop\n");
  }
 }

 if (VAR_16 & VAR_8 && FUNC_2(&VAR_14->napi)) {

  VAR_14->reg_inten &= ~(VAR_8);
  FUNC_7(VAR_1 & ~VAR_8, VAR_14->base + VAR_4);
  FUNC_1(&VAR_14->tx_coalesce_timer);
  FUNC_0(&VAR_14->napi);
 }

 return VAR_2;
}
