
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_errors; int rx_over_errors; } ;
struct TYPE_15__ {int bus_error; int error_passive; int error_warning; int bus_off; } ;
struct TYPE_16__ {scalar_t__ state; TYPE_6__ can_stats; } ;
struct ems_usb {TYPE_7__ can; TYPE_8__* netdev; } ;
struct TYPE_10__ {int ecc; int txerr; int rxerr; } ;
struct TYPE_11__ {TYPE_1__ sja1000; } ;
struct TYPE_12__ {TYPE_2__ regs; } ;
struct TYPE_13__ {TYPE_3__ cc; } ;
struct TYPE_14__ {int can_state; TYPE_4__ error; } ;
struct ems_cpc_msg {scalar_t__ type; TYPE_5__ msg; } ;
struct can_frame {int can_id; int* data; scalar_t__ can_dlc; } ;
struct TYPE_17__ {struct net_device_stats stats; } ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

 int VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;

 int VAR_21 ;
 int VAR_22 ;
 struct sk_buff* FUNC_0 (TYPE_8__*,struct can_frame**) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct ems_usb *VAR_23, struct ems_cpc_msg *VAR_24)
{
 struct can_frame *VAR_25;
 struct sk_buff *VAR_26;
 struct net_device_stats *VAR_27 = &VAR_23->netdev->stats;

 VAR_26 = FUNC_0(VAR_23->netdev, &VAR_25);
 if (VAR_26 == ((void*)0))
  return;

 if (VAR_24->type == VAR_16) {
  u8 VAR_28 = VAR_24->msg.can_state;

  if (VAR_28 & VAR_21) {
   VAR_23->can.state = VAR_11;
   VAR_25->can_id |= VAR_1;

   VAR_23->can.can_stats.bus_off++;
   FUNC_1(VAR_23->netdev);
  } else if (VAR_28 & VAR_22) {
   VAR_23->can.state = VAR_14;
   VAR_23->can.can_stats.error_warning++;
  } else {
   VAR_23->can.state = VAR_12;
   VAR_23->can.can_stats.error_passive++;
  }
 } else if (VAR_24->type == VAR_15) {
  u8 VAR_29 = VAR_24->msg.error.cc.regs.sja1000.ecc;
  u8 VAR_30 = VAR_24->msg.error.cc.regs.sja1000.txerr;
  u8 VAR_31 = VAR_24->msg.error.cc.regs.sja1000.rxerr;


  VAR_23->can.can_stats.bus_error++;
  VAR_27->rx_errors++;

  VAR_25->can_id |= VAR_6 | VAR_0;

  switch (VAR_29 & VAR_19) {
  case 130:
   VAR_25->data[2] |= VAR_7;
   break;
  case 129:
   VAR_25->data[2] |= VAR_8;
   break;
  case 128:
   VAR_25->data[2] |= VAR_9;
   break;
  default:
   VAR_25->data[3] = VAR_29 & VAR_20;
   break;
  }


  if ((VAR_29 & VAR_18) == 0)
   VAR_25->data[2] |= VAR_10;

  if (VAR_23->can.state == VAR_14 ||
      VAR_23->can.state == VAR_13) {
   VAR_25->can_id |= VAR_2;
   VAR_25->data[1] = (VAR_30 > VAR_31) ?
       VAR_5 : VAR_4;
  }
 } else if (VAR_24->type == VAR_17) {
  VAR_25->can_id |= VAR_2;
  VAR_25->data[1] = VAR_3;

  VAR_27->rx_over_errors++;
  VAR_27->rx_errors++;
 }

 VAR_27->rx_packets++;
 VAR_27->rx_bytes += VAR_25->can_dlc;
 FUNC_2(VAR_26);
}
