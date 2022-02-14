
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int ctrlmode; } ;
struct sja1000_priv {int (* read_reg ) (struct sja1000_priv*,int ) ;int (* post_irq ) (struct sja1000_priv*) ;TYPE_1__ can; int (* pre_irq ) (struct sja1000_priv*) ;} ;
struct net_device_stats {int tx_bytes; int tx_packets; int tx_errors; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct sja1000_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*,int,int) ;
 scalar_t__ FUNC_8 (struct sja1000_priv*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sja1000_priv*) ;
 int FUNC_11 (struct sja1000_priv*,int ) ;
 int FUNC_12 (struct sja1000_priv*,int ) ;
 int FUNC_13 (struct sja1000_priv*,int ) ;
 int FUNC_14 (struct sja1000_priv*,int ) ;
 int FUNC_15 (struct sja1000_priv*,int ) ;
 int FUNC_16 (struct sja1000_priv*) ;

irqreturn_t FUNC_17(int VAR_20, void *VAR_21)
{
 struct net_device *VAR_22 = (struct net_device *)VAR_21;
 struct sja1000_priv *VAR_23 = FUNC_4(VAR_22);
 struct net_device_stats *VAR_24 = &VAR_22->stats;
 uint8_t VAR_25, VAR_26;
 int VAR_27 = 0;

 if (VAR_23->pre_irq)
  VAR_23->pre_irq(VAR_23);


 if (VAR_23->read_reg(VAR_23, VAR_14) == VAR_9)
  goto out;

 while ((VAR_25 = VAR_23->read_reg(VAR_23, VAR_15)) &&
        (VAR_27 < VAR_16)) {

  VAR_26 = VAR_23->read_reg(VAR_23, VAR_17);

  if (VAR_26 == 0xFF && FUNC_8(VAR_23))
   goto out;

  if (VAR_25 & VAR_12)
   FUNC_5(VAR_22, "wakeup interrupt\n");

  if (VAR_25 & VAR_11) {

   if (VAR_23->can.ctrlmode & VAR_0 &&
       !(VAR_26 & VAR_19)) {
    VAR_24->tx_errors++;
    FUNC_0(VAR_22, 0);
   } else {

    VAR_24->tx_bytes +=
     VAR_23->read_reg(VAR_23, VAR_13) & 0xf;
    VAR_24->tx_packets++;
    FUNC_1(VAR_22, 0);
   }
   FUNC_6(VAR_22);
   FUNC_2(VAR_22, VAR_1);
  }
  if (VAR_25 & VAR_10) {

   while (VAR_26 & VAR_18) {
    FUNC_9(VAR_22);
    VAR_26 = VAR_23->read_reg(VAR_23, VAR_17);

    if (VAR_26 == 0xFF && FUNC_8(VAR_23))
     goto out;
   }
  }
  if (VAR_25 & (VAR_4 | VAR_5 | VAR_3 | VAR_6 | VAR_2)) {

   if (FUNC_7(VAR_22, VAR_25, VAR_26))
    break;
  }
  VAR_27++;
 }
out:
 if (VAR_23->post_irq)
  VAR_23->post_irq(VAR_23);

 if (VAR_27 >= VAR_16)
  FUNC_3(VAR_22, "%d messages handled in ISR", VAR_27);

 return (VAR_27) ? VAR_7 : VAR_8;
}
