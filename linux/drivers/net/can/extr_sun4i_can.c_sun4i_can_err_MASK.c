
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int arbitration_lost; int bus_error; } ;
struct TYPE_4__ {int state; TYPE_1__ can_stats; } ;
struct sun4ican_priv {TYPE_2__ can; scalar_t__ base; } ;
struct sk_buff {int dummy; } ;
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
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;

 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

 int VAR_26 ;

 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct can_frame*,int,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct sun4ican_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sun4ican_priv*,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_27, u8 VAR_28, u8 VAR_29)
{
 struct sun4ican_priv *VAR_30 = FUNC_5(VAR_27);
 struct net_device_stats *VAR_31 = &VAR_27->stats;
 struct can_frame *VAR_32;
 struct sk_buff *VAR_33;
 enum can_state VAR_34 = VAR_30->can.state;
 enum can_state VAR_35, VAR_36;
 unsigned int VAR_37, VAR_38, VAR_39;
 u32 VAR_40, VAR_41;


 VAR_33 = FUNC_0(VAR_27, &VAR_32);

 VAR_39 = FUNC_7(VAR_30->base + VAR_20);
 VAR_37 = (VAR_39 >> 16) & 0xFF;
 VAR_38 = VAR_39 & 0xFF;

 if (VAR_33) {
  VAR_32->data[6] = VAR_38;
  VAR_32->data[7] = VAR_37;
 }

 if (VAR_28 & VAR_17) {

  FUNC_4(VAR_27, "data overrun interrupt\n");
  if (FUNC_3(VAR_33)) {
   VAR_32->can_id |= VAR_1;
   VAR_32->data[1] = VAR_2;
  }
  VAR_31->rx_over_errors++;
  VAR_31->rx_errors++;




  FUNC_9(VAR_27);
  FUNC_8(VAR_27);


  FUNC_10(VAR_30, VAR_14);
 }
 if (VAR_28 & VAR_19) {

  FUNC_4(VAR_27, "error warning interrupt\n");

  if (VAR_29 & VAR_22)
   VAR_34 = VAR_9;
  else if (VAR_29 & VAR_25)
   VAR_34 = VAR_12;
  else
   VAR_34 = VAR_10;
 }
 if (VAR_28 & VAR_16) {

  FUNC_4(VAR_27, "bus error interrupt\n");
  VAR_30->can.can_stats.bus_error++;
  VAR_31->rx_errors++;

  if (FUNC_3(VAR_33)) {
   VAR_40 = FUNC_7(VAR_30->base + VAR_21);

   VAR_32->can_id |= VAR_4 | VAR_0;

   switch (VAR_40 & VAR_26) {
   case 130:
    VAR_32->data[2] |= VAR_5;
    break;
   case 129:
    VAR_32->data[2] |= VAR_6;
    break;
   case 128:
    VAR_32->data[2] |= VAR_7;
    break;
   default:
    VAR_32->data[3] = (VAR_40 & VAR_24)
            >> 16;
    break;
   }

   if ((VAR_40 & VAR_23) == 0)
    VAR_32->data[2] |= VAR_8;
  }
 }
 if (VAR_28 & VAR_18) {

  FUNC_4(VAR_27, "error passive interrupt\n");
  if (VAR_34 == VAR_11)
   VAR_34 = VAR_12;
  else
   VAR_34 = VAR_11;
 }
 if (VAR_28 & VAR_15) {

  FUNC_4(VAR_27, "arbitration lost interrupt\n");
  VAR_41 = FUNC_7(VAR_30->base + VAR_21);
  VAR_30->can.can_stats.arbitration_lost++;
  VAR_31->tx_errors++;
  if (FUNC_3(VAR_33)) {
   VAR_32->can_id |= VAR_3;
   VAR_32->data[0] = (VAR_41 >> 8) & 0x1f;
  }
 }

 if (VAR_34 != VAR_30->can.state) {
  VAR_36 = VAR_38 >= VAR_37 ? VAR_34 : 0;
  VAR_35 = VAR_38 <= VAR_37 ? VAR_34 : 0;

  if (FUNC_3(VAR_33))
   FUNC_2(VAR_27, VAR_32, VAR_36, VAR_35);
  else
   VAR_30->can.state = VAR_34;
  if (VAR_34 == VAR_9)
   FUNC_1(VAR_27);
 }

 if (FUNC_3(VAR_33)) {
  VAR_31->rx_packets++;
  VAR_31->rx_bytes += VAR_32->can_dlc;
  FUNC_6(VAR_33);
 } else {
  return -VAR_13;
 }

 return 0;
}
