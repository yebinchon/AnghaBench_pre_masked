
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_3__ {int bus_off; int error_passive; int error_warning; } ;
struct TYPE_4__ {int state; TYPE_1__ can_stats; } ;
struct ifi_canfd_priv {TYPE_2__ can; } ;
struct can_frame {int* data; scalar_t__ can_dlc; int can_id; } ;
struct can_berr_counter {int txerr; int rxerr; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct can_berr_counter*) ;
 int FUNC_3 (struct net_device*,int ) ;
 struct ifi_canfd_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_6,
      enum can_state VAR_7)
{
 struct ifi_canfd_priv *VAR_8 = FUNC_4(VAR_6);
 struct net_device_stats *VAR_9 = &VAR_6->stats;
 struct can_frame *VAR_10;
 struct sk_buff *VAR_11;
 struct can_berr_counter VAR_12;

 switch (VAR_7) {
 case 130:

  VAR_8->can.can_stats.error_warning++;
  VAR_8->can.state = 130;
  break;
 case 128:

  VAR_8->can.can_stats.error_warning++;
  VAR_8->can.state = 128;
  break;
 case 129:

  VAR_8->can.can_stats.error_passive++;
  VAR_8->can.state = 129;
  break;
 case 131:

  VAR_8->can.state = 131;
  FUNC_3(VAR_6, 0);
  VAR_8->can.can_stats.bus_off++;
  FUNC_1(VAR_6);
  break;
 default:
  break;
 }


 VAR_11 = FUNC_0(VAR_6, &VAR_10);
 if (FUNC_6(!VAR_11))
  return 0;

 FUNC_2(VAR_6, &VAR_12);

 switch (VAR_7) {
 case 128:

  VAR_10->can_id |= VAR_1;
  VAR_10->data[1] = (VAR_12.txerr > VAR_12.rxerr) ?
   VAR_5 :
   VAR_3;
  VAR_10->data[6] = VAR_12.txerr;
  VAR_10->data[7] = VAR_12.rxerr;
  break;
 case 129:

  VAR_10->can_id |= VAR_1;
  VAR_10->data[1] |= VAR_2;
  if (VAR_12.txerr > 127)
   VAR_10->data[1] |= VAR_4;
  VAR_10->data[6] = VAR_12.txerr;
  VAR_10->data[7] = VAR_12.rxerr;
  break;
 case 131:

  VAR_10->can_id |= VAR_0;
  break;
 default:
  break;
 }

 VAR_9->rx_packets++;
 VAR_9->rx_bytes += VAR_10->can_dlc;
 FUNC_5(VAR_11);

 return 1;
}
