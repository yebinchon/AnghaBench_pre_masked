
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct can_device_stats {int error_warning; int error_passive; int bus_off; int bus_error; int arbitration_lost; } ;
struct TYPE_7__ {int state; struct can_device_stats can_stats; } ;
struct ucan_priv {TYPE_4__* netdev; TYPE_3__ can; } ;
struct TYPE_5__ {int* data; } ;
struct TYPE_6__ {TYPE_1__ can_msg; } ;
struct ucan_message_in {TYPE_2__ msg; } ;
struct net_device_stats {int rx_errors; int tx_errors; int rx_over_errors; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;
typedef int canid_t ;
struct TYPE_8__ {struct net_device_stats stats; } ;


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


 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static bool FUNC_1(struct ucan_priv *VAR_14,
        struct ucan_message_in *VAR_15,
        canid_t VAR_16)
{
 enum can_state VAR_17 = VAR_14->can.state;
 struct net_device_stats *VAR_18 = &VAR_14->netdev->stats;
 struct can_device_stats *VAR_19 = &VAR_14->can.can_stats;

 if (VAR_16 & VAR_10)
  VAR_19->arbitration_lost++;

 if (VAR_16 & VAR_1)
  VAR_19->bus_error++;

 if (VAR_16 & VAR_0)
  VAR_18->tx_errors++;

 if (VAR_16 & VAR_2)
  VAR_17 = 130;


 if (VAR_16 & VAR_3) {
  u8 VAR_20 = VAR_15->msg.can_msg.data[1];

  if (VAR_20 & VAR_5)
   VAR_18->rx_over_errors++;


  if (VAR_20 & VAR_4)
   VAR_17 = VAR_13;

  if (VAR_20 & (VAR_7 | VAR_9))
   VAR_17 = 128;

  if (VAR_20 & (VAR_6 | VAR_8))
   VAR_17 = 129;
 }


 if (VAR_16 & VAR_11) {
  u8 VAR_21 = VAR_15->msg.can_msg.data[2];

  if (VAR_21 & VAR_12)
   VAR_18->tx_errors++;
  else
   VAR_18->rx_errors++;
 }


 if (VAR_14->can.state == VAR_17)
  return 0;


 if (VAR_14->can.state > VAR_17) {
  VAR_14->can.state = VAR_17;
  return 1;
 }


 VAR_14->can.state = VAR_17;
 switch (VAR_17) {
 case 130:
  VAR_19->bus_off++;
  FUNC_0(VAR_14->netdev);
  break;
 case 129:
  VAR_19->error_passive++;
  break;
 case 128:
  VAR_19->error_warning++;
  break;
 default:
  break;
 }
 return 1;
}
