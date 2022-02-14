
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_missed_errors; int rx_errors; int rx_crc_errors; int rx_frame_errors; int rx_over_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct arc_emac_priv {int rx_missed_errors; int napi; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct arc_emac_priv*,int ,unsigned int) ;
 unsigned int FUNC_2 (struct arc_emac_priv*,int ) ;
 int FUNC_3 (struct arc_emac_priv*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct arc_emac_priv* FUNC_7 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_11, void *VAR_12)
{
 struct net_device *VAR_13 = VAR_12;
 struct arc_emac_priv *VAR_14 = FUNC_7(VAR_13);
 struct net_device_stats *VAR_15 = &VAR_13->stats;
 unsigned int VAR_16;

 VAR_16 = FUNC_2(VAR_14, VAR_9);
 VAR_16 &= ~VAR_2;


 FUNC_3(VAR_14, VAR_9, VAR_16);

 if (VAR_16 & (VAR_7 | VAR_10)) {
  if (FUNC_4(FUNC_6(&VAR_14->napi))) {
   FUNC_1(VAR_14, VAR_8, VAR_7 | VAR_10);
   FUNC_0(&VAR_14->napi);
  }
 }

 if (VAR_16 & VAR_0) {




  if (VAR_16 & VAR_3) {
   VAR_15->rx_missed_errors += 0x100;
   VAR_15->rx_errors += 0x100;
   VAR_14->rx_missed_errors += 0x100;
   FUNC_5(&VAR_14->napi);
  }

  if (VAR_16 & VAR_4) {
   VAR_15->rx_crc_errors += 0x100;
   VAR_15->rx_errors += 0x100;
  }

  if (VAR_16 & VAR_6) {
   VAR_15->rx_frame_errors += 0x100;
   VAR_15->rx_errors += 0x100;
  }

  if (VAR_16 & VAR_5) {
   VAR_15->rx_over_errors += 0x100;
   VAR_15->rx_errors += 0x100;
  }
 }

 return VAR_1;
}
