
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int flags; int sk; int ring; } ;
struct tap_dev {int tap_features; int (* count_rx_dropped ) (struct tap_dev*) ;} ;
struct sk_buff {scalar_t__ ip_summed; struct sk_buff* next; struct net_device* dev; } ;
struct net_device {int dummy; } ;
typedef int rx_handler_result_t ;
typedef int netdev_features_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct tap_dev*) ;
 struct tap_dev* FUNC_11 (struct net_device*) ;
 struct tap_queue* FUNC_12 (struct tap_dev*,struct sk_buff*) ;
 int FUNC_13 (int ,int) ;

rx_handler_result_t FUNC_14(struct sk_buff **VAR_10)
{
 struct sk_buff *VAR_11 = *VAR_10;
 struct net_device *VAR_12 = VAR_11->dev;
 struct tap_dev *VAR_13;
 struct tap_queue *VAR_14;
 netdev_features_t VAR_15 = VAR_9;

 VAR_13 = FUNC_11(VAR_12);
 if (!VAR_13)
  return VAR_8;

 VAR_14 = FUNC_12(VAR_13, VAR_11);
 if (!VAR_14)
  return VAR_8;

 FUNC_9(VAR_11, VAR_4);





 if (VAR_14->flags & VAR_5)
  VAR_15 |= VAR_13->tap_features;
 if (FUNC_5(VAR_11, VAR_15)) {
  struct sk_buff *VAR_16 = FUNC_1(VAR_11, VAR_15, 0);

  if (FUNC_0(VAR_16))
   goto drop;

  if (!VAR_16) {
   if (FUNC_6(&VAR_14->ring, VAR_11))
    goto drop;
   goto wake_up;
  }

  FUNC_2(VAR_11);
  while (VAR_16) {
   struct sk_buff *VAR_17 = VAR_16->next;

   VAR_16->next = ((void*)0);
   if (FUNC_6(&VAR_14->ring, VAR_16)) {
    FUNC_3(VAR_16);
    FUNC_4(VAR_17);
    break;
   }
   VAR_16 = VAR_17;
  }
 } else {





  if (VAR_11->ip_summed == VAR_0 &&
      !(VAR_15 & VAR_6) &&
      FUNC_8(VAR_11))
   goto drop;
  if (FUNC_6(&VAR_14->ring, VAR_11))
   goto drop;
 }

wake_up:
 FUNC_13(FUNC_7(&VAR_14->sk), VAR_1 | VAR_3 | VAR_2);
 return VAR_7;

drop:

 if (VAR_13->count_rx_dropped)
  VAR_13->count_rx_dropped(VAR_13);
 FUNC_3(VAR_11);
 return VAR_7;
}
