
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef struct ucan_urb_context* u8 ;
struct urb {int dummy; } ;
struct ucan_urb_context {int dummy; } ;
struct ucan_priv {int context_array; TYPE_2__* netdev; int echo_skb_lock; int tx_urbs; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct can_frame {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_7__ {int tx_dropped; } ;
struct TYPE_8__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (TYPE_2__*,struct ucan_urb_context*) ;
 int FUNC_3 (struct sk_buff*,TYPE_2__*,struct ucan_urb_context*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 struct ucan_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct ucan_urb_context* FUNC_12 (struct ucan_priv*) ;
 int FUNC_13 (struct ucan_priv*,struct urb*) ;
 struct urb* FUNC_14 (struct ucan_priv*,struct ucan_urb_context*,struct can_frame*,struct ucan_urb_context*) ;
 int FUNC_15 (struct ucan_priv*,struct ucan_urb_context*) ;
 int FUNC_16 (struct urb*,int *) ;
 int FUNC_17 (struct urb*) ;
 int FUNC_18 (struct urb*,int ) ;
 int FUNC_19 (struct urb*) ;

__attribute__((used)) static netdev_tx_t FUNC_20(struct sk_buff *VAR_4,
       struct net_device *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;
 u8 VAR_8;
 struct urb *VAR_9;
 struct ucan_urb_context *VAR_10;
 struct ucan_priv *VAR_11 = FUNC_6(VAR_5);
 struct can_frame *VAR_12 = (struct can_frame *)VAR_4->data;


 if (FUNC_1(VAR_5, VAR_4))
  return VAR_3;


 VAR_10 = FUNC_12(VAR_11);
 VAR_8 = VAR_10 - VAR_11->context_array;

 if (FUNC_0(!VAR_10))
  return VAR_2;


 VAR_9 = FUNC_14(VAR_11, VAR_10, VAR_12, VAR_8);
 if (!VAR_9)
  goto drop;


 FUNC_10(&VAR_11->echo_skb_lock, VAR_6);
 FUNC_3(VAR_4, VAR_11->netdev, VAR_8);
 FUNC_11(&VAR_11->echo_skb_lock, VAR_6);


 FUNC_16(VAR_9, &VAR_11->tx_urbs);
 VAR_7 = FUNC_18(VAR_9, VAR_1);


 if (VAR_7) {

  FUNC_19(VAR_9);
  FUNC_13(VAR_11, VAR_9);
  if (!FUNC_15(VAR_11, VAR_10))
   FUNC_5(VAR_11->netdev,
       "xmit err: failed to release context\n");




  FUNC_10(&VAR_11->echo_skb_lock, VAR_6);
  FUNC_2(VAR_11->netdev, VAR_8);
  FUNC_11(&VAR_11->echo_skb_lock, VAR_6);

  if (VAR_7 == -VAR_0) {
   FUNC_8(VAR_11->netdev);
  } else {
   FUNC_7(VAR_11->netdev,
        "xmit err: failed to submit urb %d\n",
        VAR_7);
   VAR_11->netdev->stats.tx_dropped++;
  }
  return VAR_3;
 }

 FUNC_9(VAR_5);


 FUNC_17(VAR_9);

 return VAR_3;

drop:
 if (!FUNC_15(VAR_11, VAR_10))
  FUNC_5(VAR_11->netdev,
      "xmit drop: failed to release context\n");
 FUNC_4(VAR_4);
 VAR_11->netdev->stats.tx_dropped++;

 return VAR_3;
}
