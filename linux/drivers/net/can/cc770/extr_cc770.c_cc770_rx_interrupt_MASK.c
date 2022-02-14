
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device_stats {int rx_errors; int rx_over_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct cc770_priv {int control_normal_mode; } ;
struct TYPE_2__ {int ctrl1; int ctrl0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct cc770_priv*,int ) ;
 int FUNC_1 (struct net_device*,unsigned int,int) ;
 int FUNC_2 (struct cc770_priv*,int ,int) ;
 TYPE_1__* VAR_16 ;
 struct cc770_priv* FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_17, unsigned int VAR_18)
{
 struct cc770_priv *VAR_19 = FUNC_3(VAR_17);
 struct net_device_stats *VAR_20 = &VAR_17->stats;
 unsigned int VAR_21 = FUNC_4(VAR_18);
 u8 VAR_22;
 int VAR_23 = VAR_0;

 while (VAR_23--) {
  VAR_22 = FUNC_0(VAR_19, VAR_16[VAR_21].ctrl1);

  if (!(VAR_22 & VAR_9)) {

   if (VAR_19->control_normal_mode & VAR_1) {
    if (!(FUNC_0(VAR_19, VAR_16[VAR_21].ctrl0) &
          VAR_3))
     break;
   } else {
    break;
   }
  }

  if (VAR_22 & VAR_5) {
   VAR_20->rx_over_errors++;
   VAR_20->rx_errors++;
  }
  if (VAR_21 < VAR_6)
   FUNC_2(VAR_19, VAR_16[VAR_21].ctrl1,
     VAR_8 | VAR_4 |
     VAR_15 | VAR_11);
  FUNC_1(VAR_17, VAR_21, VAR_22);

  FUNC_2(VAR_19, VAR_16[VAR_21].ctrl0,
    VAR_7 | VAR_13 |
    VAR_12 | VAR_2);
  FUNC_2(VAR_19, VAR_16[VAR_21].ctrl1,
    VAR_8 | VAR_4 |
    VAR_14 | VAR_10);
 }
}
