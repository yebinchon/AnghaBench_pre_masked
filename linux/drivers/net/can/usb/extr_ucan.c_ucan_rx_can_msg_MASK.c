
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ctrlmode; } ;
struct ucan_priv {TYPE_4__* netdev; TYPE_1__ can; } ;
struct TYPE_8__ {int data; int id; } ;
struct TYPE_7__ {TYPE_3__ can_msg; } ;
struct ucan_message_in {TYPE_2__ msg; int len; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int data; } ;
typedef int canid_t ;
struct TYPE_9__ {struct net_device_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (TYPE_4__*,struct can_frame**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,char*,int,...) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (struct ucan_priv*,struct ucan_message_in*,int) ;

__attribute__((used)) static void FUNC_8(struct ucan_priv *VAR_7, struct ucan_message_in *VAR_8)
{
 int VAR_9;
 canid_t VAR_10;
 struct can_frame *VAR_11;
 struct sk_buff *VAR_12;
 struct net_device_stats *VAR_13 = &VAR_7->netdev->stats;


 VAR_9 = FUNC_1(VAR_8->len);


 if (VAR_9 < VAR_6 + sizeof(VAR_8->msg.can_msg.id)) {
  FUNC_4(VAR_7->netdev, "invalid input message len: %d\n", VAR_9);
  return;
 }


 VAR_10 = FUNC_2(VAR_8->msg.can_msg.id);
 if (VAR_10 & VAR_3) {
  bool VAR_14 = FUNC_7(VAR_7, VAR_8, VAR_10);


  if (!(VAR_7->can.ctrlmode & VAR_0) &&
      !VAR_14)
   return;
 } else {
  canid_t VAR_15;

  VAR_15 = VAR_4;
  if (VAR_10 & VAR_1)
   VAR_15 |= VAR_2 | VAR_1;
  else
   VAR_15 |= VAR_5;

  if (VAR_10 & ~VAR_15)
   FUNC_4(VAR_7->netdev,
        "unexpected bits set (canid %x, mask %x)",
        VAR_10, VAR_15);

  VAR_10 &= VAR_15;
 }


 VAR_12 = FUNC_0(VAR_7->netdev, &VAR_11);
 if (!VAR_12)
  return;


 VAR_11->can_id = VAR_10;


 VAR_11->can_dlc = FUNC_6(&VAR_8->msg.can_msg, VAR_9);


 if (!(VAR_11->can_id & VAR_4) || (VAR_11->can_id & VAR_3))
  FUNC_3(VAR_11->data, VAR_8->msg.can_msg.data, VAR_11->can_dlc);


 VAR_13->rx_packets++;
 VAR_13->rx_bytes += VAR_11->can_dlc;


 FUNC_5(VAR_12);
}
