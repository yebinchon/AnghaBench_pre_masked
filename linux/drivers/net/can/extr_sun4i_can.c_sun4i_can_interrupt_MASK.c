
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sun4ican_priv {scalar_t__ base; } ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct sun4ican_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct net_device*,int,int) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_16, void *VAR_17)
{
 struct net_device *VAR_18 = (struct net_device *)VAR_17;
 struct sun4ican_priv *VAR_19 = FUNC_4(VAR_18);
 struct net_device_stats *VAR_20 = &VAR_18->stats;
 u8 VAR_21, VAR_22;
 int VAR_23 = 0;

 while ((VAR_21 = FUNC_7(VAR_19->base + VAR_12)) &&
        (VAR_23 < VAR_3)) {
  VAR_23++;
  VAR_22 = FUNC_7(VAR_19->base + VAR_14);

  if (VAR_21 & VAR_11)
   FUNC_5(VAR_18, "wakeup interrupt\n");

  if (VAR_21 & VAR_10) {

   VAR_20->tx_bytes +=
       FUNC_7(VAR_19->base +
      VAR_13) & 0xf;
   VAR_20->tx_packets++;
   FUNC_0(VAR_18, 0);
   FUNC_6(VAR_18);
   FUNC_1(VAR_18, VAR_0);
  }
  if ((VAR_21 & VAR_9) &&
      !(VAR_21 & VAR_6)) {

   while (VAR_22 & VAR_15) {

    FUNC_9(VAR_18);
    VAR_22 = FUNC_7(VAR_19->base + VAR_14);
   }
  }
  if (VAR_21 &
      (VAR_6 | VAR_8 | VAR_5 |
       VAR_7 | VAR_4)) {

   if (FUNC_8(VAR_18, VAR_21, VAR_22))
    FUNC_3(VAR_18, "can't allocate buffer - clearing pending interrupts\n");
  }

  FUNC_10(VAR_21, VAR_19->base + VAR_12);
  FUNC_7(VAR_19->base + VAR_12);
 }
 if (VAR_23 >= VAR_3)
  FUNC_2(VAR_18, "%d messages handled in ISR", VAR_23);

 return (VAR_23) ? VAR_1 : VAR_2;
}
