
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
struct m_can_classdev {TYPE_2__ can; } ;
struct can_frame {int* data; scalar_t__ can_dlc; int can_id; } ;
struct can_berr_counter {int txerr; int rxerr; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,struct can_berr_counter*) ;
 struct sk_buff* FUNC_1 (struct net_device*,struct can_frame**) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct m_can_classdev*) ;
 unsigned int FUNC_4 (struct m_can_classdev*,int ) ;
 struct m_can_classdev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_9,
         enum can_state VAR_10)
{
 struct m_can_classdev *VAR_11 = FUNC_5(VAR_9);
 struct net_device_stats *VAR_12 = &VAR_9->stats;
 struct can_frame *VAR_13;
 struct sk_buff *VAR_14;
 struct can_berr_counter VAR_15;
 unsigned int VAR_16;

 switch (VAR_10) {
 case 129:

  VAR_11->can.can_stats.error_warning++;
  VAR_11->can.state = VAR_6;
  break;
 case 128:

  VAR_11->can.can_stats.error_passive++;
  VAR_11->can.state = 128;
  break;
 case 130:

  VAR_11->can.state = 130;
  FUNC_3(VAR_11);
  VAR_11->can.can_stats.bus_off++;
  FUNC_2(VAR_9);
  break;
 default:
  break;
 }


 VAR_14 = FUNC_1(VAR_9, &VAR_13);
 if (FUNC_7(!VAR_14))
  return 0;

 FUNC_0(VAR_9, &VAR_15);

 switch (VAR_10) {
 case 129:

  VAR_13->can_id |= VAR_1;
  VAR_13->data[1] = (VAR_15.txerr > VAR_15.rxerr) ?
   VAR_5 :
   VAR_3;
  VAR_13->data[6] = VAR_15.txerr;
  VAR_13->data[7] = VAR_15.rxerr;
  break;
 case 128:

  VAR_13->can_id |= VAR_1;
  VAR_16 = FUNC_4(VAR_11, VAR_8);
  if (VAR_16 & VAR_7)
   VAR_13->data[1] |= VAR_2;
  if (VAR_15.txerr > 127)
   VAR_13->data[1] |= VAR_4;
  VAR_13->data[6] = VAR_15.txerr;
  VAR_13->data[7] = VAR_15.rxerr;
  break;
 case 130:

  VAR_13->can_id |= VAR_0;
  break;
 default:
  break;
 }

 VAR_12->rx_packets++;
 VAR_12->rx_bytes += VAR_13->can_dlc;
 FUNC_6(VAR_14);

 return 1;
}
