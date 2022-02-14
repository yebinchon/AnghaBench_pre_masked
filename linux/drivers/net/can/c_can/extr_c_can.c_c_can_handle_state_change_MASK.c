
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int* data; scalar_t__ can_dlc; int can_id; } ;
struct can_berr_counter {int txerr; int rxerr; } ;
struct TYPE_3__ {int bus_off; int error_passive; int error_warning; } ;
struct TYPE_4__ {TYPE_1__ can_stats; int state; } ;
struct c_can_priv {unsigned int (* read_reg ) (struct c_can_priv*,int ) ;TYPE_2__ can; } ;
typedef enum c_can_bus_error_types { ____Placeholder_c_can_bus_error_types } c_can_bus_error_types ;


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

 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct net_device*,struct can_berr_counter*) ;
 struct sk_buff* FUNC_1 (struct net_device*,struct can_frame**) ;
 int FUNC_2 (struct net_device*) ;
 struct c_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 unsigned int FUNC_5 (struct c_can_priv*,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_14,
    enum c_can_bus_error_types VAR_15)
{
 unsigned int VAR_16;
 unsigned int VAR_17;
 struct c_can_priv *VAR_18 = FUNC_3(VAR_14);
 struct net_device_stats *VAR_19 = &VAR_14->stats;
 struct can_frame *VAR_20;
 struct sk_buff *VAR_21;
 struct can_berr_counter VAR_22;

 switch (VAR_15) {
 case 128:
  VAR_18->can.state = VAR_8;
  break;
 case 129:

  VAR_18->can.can_stats.error_warning++;
  VAR_18->can.state = VAR_10;
  break;
 case 130:

  VAR_18->can.can_stats.error_passive++;
  VAR_18->can.state = VAR_9;
  break;
 case 131:

  VAR_18->can.state = VAR_7;
  VAR_18->can.can_stats.bus_off++;
  break;
 default:
  break;
 }


 VAR_21 = FUNC_1(VAR_14, &VAR_20);
 if (FUNC_6(!VAR_21))
  return 0;

 FUNC_0(VAR_14, &VAR_22);
 VAR_16 = VAR_18->read_reg(VAR_18, VAR_11);
 VAR_17 = (VAR_16 & VAR_12) >>
    VAR_13;

 switch (VAR_15) {
 case 128:

  VAR_20->can_id |= VAR_1;
  VAR_20->data[1] = VAR_2;
  VAR_20->data[6] = VAR_22.txerr;
  VAR_20->data[7] = VAR_22.rxerr;
  break;
 case 129:

  VAR_20->can_id |= VAR_1;
  VAR_20->data[1] = (VAR_22.txerr > VAR_22.rxerr) ?
   VAR_6 :
   VAR_4;
  VAR_20->data[6] = VAR_22.txerr;
  VAR_20->data[7] = VAR_22.rxerr;

  break;
 case 130:

  VAR_20->can_id |= VAR_1;
  if (VAR_17)
   VAR_20->data[1] |= VAR_3;
  if (VAR_22.txerr > 127)
   VAR_20->data[1] |= VAR_5;

  VAR_20->data[6] = VAR_22.txerr;
  VAR_20->data[7] = VAR_22.rxerr;
  break;
 case 131:

  VAR_20->can_id |= VAR_0;
  FUNC_2(VAR_14);
  break;
 default:
  break;
 }

 VAR_19->rx_packets++;
 VAR_19->rx_bytes += VAR_20->can_dlc;
 FUNC_4(VAR_21);

 return 1;
}
