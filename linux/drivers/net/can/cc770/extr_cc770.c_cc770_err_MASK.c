
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_3__ {int error_warning; int error_passive; int bus_off; } ;
struct TYPE_4__ {int state; TYPE_1__ can_stats; } ;
struct cc770_priv {int control_normal_mode; TYPE_2__ can; } ;
struct can_frame {int* data; scalar_t__ can_dlc; int can_id; } ;


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
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 void* FUNC_2 (struct cc770_priv*,int ) ;
 int FUNC_3 (struct cc770_priv*,int ,int ) ;
 int VAR_25 ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct cc770_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_28, u8 VAR_29)
{
 struct cc770_priv *VAR_30 = FUNC_5(VAR_28);
 struct net_device_stats *VAR_31 = &VAR_28->stats;
 struct can_frame *VAR_32;
 struct sk_buff *VAR_33;
 u8 VAR_34;

 FUNC_4(VAR_28, "status interrupt (%#x)\n", VAR_29);

 VAR_33 = FUNC_0(VAR_28, &VAR_32);
 if (!VAR_33)
  return -VAR_20;


 if (VAR_30->control_normal_mode & VAR_18) {
  VAR_32->data[6] = FUNC_2(VAR_30, VAR_27);
  VAR_32->data[7] = FUNC_2(VAR_30, VAR_26);
 }

 if (VAR_29 & VAR_21) {

  FUNC_3(VAR_30, VAR_25, VAR_19);
  VAR_32->can_id |= VAR_1;
  VAR_30->can.state = VAR_14;
  VAR_30->can.can_stats.bus_off++;
  FUNC_1(VAR_28);
 } else if (VAR_29 & VAR_24) {
  VAR_32->can_id |= VAR_2;

  if (VAR_32->data[7] > 127) {
   VAR_32->data[1] = VAR_3 |
    VAR_5;
   VAR_30->can.state = VAR_16;
   VAR_30->can.can_stats.error_passive++;
  } else {
   VAR_32->data[1] = VAR_4 |
    VAR_6;
   VAR_30->can.state = VAR_17;
   VAR_30->can.can_stats.error_warning++;
  }
 } else {

  VAR_32->can_id |= VAR_7;
  VAR_32->data[2] = VAR_8;
  VAR_30->can.state = VAR_15;
 }

 VAR_34 = VAR_29 & VAR_23;
 if (VAR_34 < 7 && VAR_34 > 0) {
  if (VAR_34 == VAR_22) {
   VAR_32->can_id |= VAR_0;
  } else {
   VAR_32->can_id |= VAR_7;
   switch (VAR_34) {
   case 128:
    VAR_32->data[2] |= VAR_13;
    break;
   case 129:
    VAR_32->data[2] |= VAR_11;
    break;
   case 131:
    VAR_32->data[2] |= VAR_10;
    break;
   case 132:
    VAR_32->data[2] |= VAR_9;
    break;
   case 130:
    VAR_32->data[3] = VAR_12;
    break;
   }
  }
 }


 VAR_31->rx_packets++;
 VAR_31->rx_bytes += VAR_32->can_dlc;
 FUNC_6(VAR_33);

 return 0;
}
