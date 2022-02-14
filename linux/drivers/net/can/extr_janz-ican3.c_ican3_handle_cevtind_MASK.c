
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_errors; int rx_over_errors; int tx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct ican3_msg {scalar_t__* data; int len; } ;
struct TYPE_3__ {int error_passive; int error_warning; int bus_error; int bus_off; } ;
struct TYPE_4__ {int state; int ctrlmode; TYPE_1__ can_stats; } ;
struct ican3_dev {TYPE_2__ can; struct net_device* ndev; int echoq; } ;
struct can_frame {int can_id; scalar_t__* data; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;

 scalar_t__ VAR_23 ;

 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;

 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ican3_dev*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ican3_dev *VAR_31, struct ican3_msg *VAR_32)
{
 struct net_device *VAR_33 = VAR_31->ndev;
 struct net_device_stats *VAR_34 = &VAR_33->stats;
 enum can_state VAR_35 = VAR_31->can.state;
 u8 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 struct can_frame *VAR_41;
 struct sk_buff *VAR_42;


 if (VAR_32->data[1] != VAR_19) {
  FUNC_6(VAR_31->ndev, "unable to handle errors on non-SJA1000\n");
  return -VAR_27;
 }


 if (FUNC_4(VAR_32->len) < 6) {
  FUNC_6(VAR_31->ndev, "error message too short\n");
  return -VAR_26;
 }

 VAR_36 = VAR_32->data[0];
 VAR_37 = VAR_32->data[2];
 VAR_38 = VAR_32->data[3];
 VAR_39 = VAR_32->data[4];
 VAR_40 = VAR_32->data[5];
 if (VAR_36 == VAR_18) {
  int VAR_43;
  FUNC_5(VAR_31->ndev, "bus error interrupt\n");


  if (!(VAR_37 & VAR_23)) {
   FUNC_3(FUNC_8(&VAR_31->echoq));
   VAR_34->tx_errors++;
  } else {
   VAR_34->rx_errors++;
  }





  VAR_43 = FUNC_2(VAR_31, 1);
  if (VAR_43) {
   FUNC_6(VAR_31->ndev, "unable to re-enable bus-error\n");
   return VAR_43;
  }


  if (!(VAR_31->can.ctrlmode & VAR_0))
   return 0;
 }

 VAR_42 = FUNC_0(VAR_33, &VAR_41);
 if (VAR_42 == ((void*)0))
  return -VAR_28;


 if (VAR_36 == VAR_20 || VAR_36 == VAR_22) {
  FUNC_5(VAR_31->ndev, "data overrun interrupt\n");
  VAR_41->can_id |= VAR_3;
  VAR_41->data[1] = VAR_4;
  VAR_34->rx_over_errors++;
  VAR_34->rx_errors++;
 }


 if (VAR_36 == VAR_21) {
  FUNC_5(VAR_31->ndev, "error warning + passive interrupt\n");
  if (VAR_38 & VAR_29) {
   VAR_35 = VAR_14;
   VAR_41->can_id |= VAR_2;
   VAR_31->can.can_stats.bus_off++;
   FUNC_1(VAR_33);
  } else if (VAR_38 & VAR_30) {
   if (VAR_39 >= 128 || VAR_40 >= 128)
    VAR_35 = VAR_16;
   else
    VAR_35 = VAR_17;
  } else {
   VAR_35 = VAR_15;
  }
 }


 if (VAR_36 == VAR_18) {
  VAR_31->can.can_stats.bus_error++;
  VAR_41->can_id |= VAR_9 | VAR_1;

  switch (VAR_37 & VAR_24) {
  case 130:
   VAR_41->data[2] |= VAR_10;
   break;
  case 129:
   VAR_41->data[2] |= VAR_11;
   break;
  case 128:
   VAR_41->data[2] |= VAR_12;
   break;
  default:
   VAR_41->data[3] = VAR_37 & VAR_25;
   break;
  }

  if (!(VAR_37 & VAR_23))
   VAR_41->data[2] |= VAR_13;

  VAR_41->data[6] = VAR_40;
  VAR_41->data[7] = VAR_39;
 }

 if (VAR_35 != VAR_31->can.state && (VAR_35 == VAR_17 ||
     VAR_35 == VAR_16)) {
  VAR_41->can_id |= VAR_3;
  if (VAR_35 == VAR_17) {
   VAR_31->can.can_stats.error_warning++;
   VAR_41->data[1] = (VAR_40 > VAR_39) ?
    VAR_8 :
    VAR_6;
  } else {
   VAR_31->can.can_stats.error_passive++;
   VAR_41->data[1] = (VAR_40 > VAR_39) ?
    VAR_7 :
    VAR_5;
  }

  VAR_41->data[6] = VAR_40;
  VAR_41->data[7] = VAR_39;
 }

 VAR_31->can.state = VAR_35;
 FUNC_7(VAR_42);
 return 0;
}
