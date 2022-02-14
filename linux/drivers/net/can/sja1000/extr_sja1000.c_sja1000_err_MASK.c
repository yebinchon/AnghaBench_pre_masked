
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int arbitration_lost; int bus_error; } ;
struct TYPE_4__ {int state; TYPE_1__ can_stats; } ;
struct sja1000_priv {unsigned int (* read_reg ) (struct sja1000_priv*,int ) ;TYPE_2__ can; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int tx_errors; int rx_errors; int rx_over_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {unsigned int* data; int can_id; scalar_t__ can_dlc; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
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
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct can_frame*,int,int) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct sja1000_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sja1000_priv*,int ) ;
 unsigned int FUNC_7 (struct sja1000_priv*,int ) ;
 unsigned int FUNC_8 (struct sja1000_priv*,int ) ;
 int FUNC_9 (struct sja1000_priv*,int ) ;
 int FUNC_10 (struct sja1000_priv*,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_29, uint8_t VAR_30, uint8_t VAR_31)
{
 struct sja1000_priv *VAR_32 = FUNC_4(VAR_29);
 struct net_device_stats *VAR_33 = &VAR_29->stats;
 struct can_frame *VAR_34;
 struct sk_buff *VAR_35;
 enum can_state VAR_36 = VAR_32->can.state;
 enum can_state VAR_37, VAR_38;
 unsigned int VAR_39, VAR_40;
 uint8_t VAR_41, VAR_42;

 VAR_35 = FUNC_0(VAR_29, &VAR_34);
 if (VAR_35 == ((void*)0))
  return -VAR_17;

 VAR_40 = VAR_32->read_reg(VAR_32, VAR_26);
 VAR_39 = VAR_32->read_reg(VAR_32, VAR_25);

 VAR_34->data[6] = VAR_40;
 VAR_34->data[7] = VAR_39;

 if (VAR_30 & VAR_20) {

  FUNC_3(VAR_29, "data overrun interrupt\n");
  VAR_34->can_id |= VAR_1;
  VAR_34->data[1] = VAR_2;
  VAR_33->rx_over_errors++;
  VAR_33->rx_errors++;
  FUNC_6(VAR_32, VAR_13);
 }

 if (VAR_30 & VAR_21) {

  FUNC_3(VAR_29, "error warning interrupt\n");

  if (VAR_31 & VAR_27)
   VAR_36 = VAR_9;
  else if (VAR_31 & VAR_28)
   VAR_36 = VAR_12;
  else
   VAR_36 = VAR_10;
 }
 if (VAR_30 & VAR_19) {

  VAR_32->can.can_stats.bus_error++;
  VAR_33->rx_errors++;

  VAR_41 = VAR_32->read_reg(VAR_32, VAR_24);

  VAR_34->can_id |= VAR_4 | VAR_0;


  switch (VAR_41 & VAR_15) {
  case 130:
   VAR_34->data[2] |= VAR_5;
   break;
  case 129:
   VAR_34->data[2] |= VAR_6;
   break;
  case 128:
   VAR_34->data[2] |= VAR_7;
   break;
  default:
   break;
  }


  VAR_34->data[3] = VAR_41 & VAR_16;


  if ((VAR_41 & VAR_14) == 0)
   VAR_34->data[2] |= VAR_8;
 }
 if (VAR_30 & VAR_22) {

  FUNC_3(VAR_29, "error passive interrupt\n");

  if (VAR_36 == VAR_11)
   VAR_36 = VAR_12;
  else
   VAR_36 = VAR_11;
 }
 if (VAR_30 & VAR_18) {

  FUNC_3(VAR_29, "arbitration lost interrupt\n");
  VAR_42 = VAR_32->read_reg(VAR_32, VAR_23);
  VAR_32->can.can_stats.arbitration_lost++;
  VAR_33->tx_errors++;
  VAR_34->can_id |= VAR_3;
  VAR_34->data[0] = VAR_42 & 0x1f;
 }

 if (VAR_36 != VAR_32->can.state) {
  VAR_38 = VAR_40 >= VAR_39 ? VAR_36 : 0;
  VAR_37 = VAR_40 <= VAR_39 ? VAR_36 : 0;

  FUNC_2(VAR_29, VAR_34, VAR_38, VAR_37);

  if(VAR_36 == VAR_9)
   FUNC_1(VAR_29);
 }

 VAR_33->rx_packets++;
 VAR_33->rx_bytes += VAR_34->can_dlc;
 FUNC_5(VAR_35);

 return 0;
}
