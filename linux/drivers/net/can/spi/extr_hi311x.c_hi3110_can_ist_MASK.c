
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int tx_bytes; int tx_packets; int rx_errors; } ;
struct net_device {TYPE_3__ stats; } ;
struct TYPE_4__ {int bus_error; } ;
struct TYPE_5__ {int state; scalar_t__ restart_ms; int ctrlmode; TYPE_1__ can_stats; } ;
struct hi3110_priv {int force_quit; int tx_len; int hi3110_lock; struct net_device* net; TYPE_2__ can; struct spi_device* spi; } ;
struct can_frame {int* data; int can_id; } ;
typedef int irqreturn_t ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct can_frame*,int,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct spi_device*) ;
 int FUNC_6 (struct spi_device*) ;
 void* FUNC_7 (struct spi_device*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*,char*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_31, void *VAR_32)
{
 struct hi3110_priv *VAR_33 = VAR_32;
 struct spi_device *VAR_34 = VAR_33->spi;
 struct net_device *VAR_35 = VAR_33->net;

 FUNC_8(&VAR_33->hi3110_lock);

 while (!VAR_33->force_quit) {
  enum can_state VAR_36;
  u8 VAR_37, VAR_38, VAR_39;

  while (!(VAR_28 &
    (VAR_39 = FUNC_7(VAR_34, VAR_25)))) {
   FUNC_5(VAR_34);
  }

  VAR_37 = FUNC_7(VAR_34, VAR_23);
  VAR_38 = FUNC_7(VAR_34, VAR_22);

  if (VAR_38 & VAR_15)
   VAR_36 = VAR_9;
  else if (VAR_38 & VAR_18)
   VAR_36 = VAR_11;
  else if (VAR_39 & VAR_27)
   VAR_36 = VAR_12;
  else
   VAR_36 = VAR_10;

  if (VAR_36 != VAR_33->can.state) {
   struct can_frame *VAR_40;
   struct sk_buff *VAR_41;
   enum can_state VAR_42, VAR_43;
   u8 VAR_44, VAR_45;

   VAR_41 = FUNC_0(VAR_35, &VAR_40);
   if (!VAR_41)
    break;

   VAR_45 = FUNC_7(VAR_34, VAR_26);
   VAR_44 = FUNC_7(VAR_34, VAR_24);
   VAR_40->data[6] = VAR_45;
   VAR_40->data[7] = VAR_44;
   VAR_43 = VAR_45 >= VAR_44 ? VAR_36 : 0;
   VAR_42 = VAR_45 <= VAR_44 ? VAR_36 : 0;
   FUNC_2(VAR_35, VAR_40, VAR_43, VAR_42);
   FUNC_11(VAR_41);

   if (VAR_36 == VAR_9) {
    FUNC_1(VAR_35);
    if (VAR_33->can.restart_ms == 0) {
     VAR_33->force_quit = 1;
     FUNC_6(VAR_34);
     break;
    }
   }
  }


  if ((VAR_37 & VAR_21) &&
      (VAR_33->can.ctrlmode & VAR_0)) {
   struct can_frame *VAR_46;
   struct sk_buff *VAR_47;


   if (VAR_38 & VAR_19) {
    VAR_47 = FUNC_0(VAR_35, &VAR_46);
    if (!VAR_47)
     break;

    VAR_46->can_id |= VAR_2 | VAR_1;
    VAR_33->can.can_stats.bus_error++;
    VAR_33->net->stats.rx_errors++;
    if (VAR_38 & VAR_14)
     VAR_46->data[2] |= VAR_3;
    else if (VAR_38 & VAR_17)
     VAR_46->data[2] |= VAR_4;
    else if (VAR_38 & VAR_20)
     VAR_46->data[2] |= VAR_7;
    else if (VAR_38 & VAR_16)
     VAR_46->data[3] |= VAR_6;
    else if (VAR_38 & VAR_13)
     VAR_46->data[3] |= VAR_5;

    VAR_46->data[6] = FUNC_7(VAR_34, VAR_26);
    VAR_46->data[7] = FUNC_7(VAR_34, VAR_24);
    FUNC_10(VAR_33->net, "Bus Error\n");
    FUNC_11(VAR_47);
   }
  }

  if (VAR_33->tx_len && VAR_39 & VAR_29) {
   VAR_35->stats.tx_packets++;
   VAR_35->stats.tx_bytes += VAR_33->tx_len - 1;
   FUNC_4(VAR_35, VAR_8);
   if (VAR_33->tx_len) {
    FUNC_3(VAR_35, 0);
    VAR_33->tx_len = 0;
   }
   FUNC_12(VAR_35);
  }

  if (VAR_37 == 0)
   break;
 }
 FUNC_9(&VAR_33->hi3110_lock);
 return VAR_30;
}
