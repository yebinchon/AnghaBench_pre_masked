
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct pucan_tx_msg {int client; int d; int channel_dlc; void* flags; void* can_id; void* type; void* size; } ;
struct TYPE_2__ {int ctrlmode; int echo_skb_max; int * echo_skb; } ;
struct peak_canfd_priv {int echo_idx; int (* write_tx_msg ) (struct peak_canfd_priv*,struct pucan_tx_msg*) ;int echo_lock; TYPE_1__ can; int index; struct pucan_tx_msg* (* alloc_tx_msg ) (struct peak_canfd_priv*,int ,int*) ;} ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct canfd_frame {int can_id; int flags; scalar_t__ len; int data; } ;
typedef int netdev_tx_t ;


 int FUNC_0 (scalar_t__,int) ;
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
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct sk_buff*,struct net_device*,int) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 struct peak_canfd_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 struct pucan_tx_msg* FUNC_13 (struct peak_canfd_priv*,int ,int*) ;
 int FUNC_14 (struct peak_canfd_priv*,struct pucan_tx_msg*) ;

__attribute__((used)) static netdev_tx_t FUNC_15(struct sk_buff *VAR_20,
      struct net_device *VAR_21)
{
 struct peak_canfd_priv *VAR_22 = FUNC_9(VAR_21);
 struct net_device_stats *VAR_23 = &VAR_21->stats;
 struct canfd_frame *VAR_24 = (struct canfd_frame *)VAR_20->data;
 struct pucan_tx_msg *VAR_25;
 u16 VAR_26, VAR_27;
 unsigned long VAR_28;
 bool VAR_29;
 int VAR_30;
 u8 VAR_31;

 if (FUNC_2(VAR_21, VAR_20))
  return VAR_11;

 VAR_26 = FUNC_0(sizeof(*VAR_25) + VAR_24->len, 4);
 VAR_25 = VAR_22->alloc_tx_msg(VAR_22, VAR_26, &VAR_30);




 if (!VAR_25) {
  VAR_23->tx_dropped++;
  FUNC_10(VAR_21);
  return VAR_10;
 }

 VAR_25->size = FUNC_6(VAR_26);
 VAR_25->type = FUNC_6(VAR_13);
 VAR_27 = 0;

 if (VAR_24->can_id & VAR_5) {
  VAR_27 |= VAR_16;
  VAR_25->can_id = FUNC_7(VAR_24->can_id & VAR_6);
 } else {
  VAR_25->can_id = FUNC_7(VAR_24->can_id & VAR_9);
 }

 if (FUNC_3(VAR_20)) {

  VAR_31 = FUNC_4(VAR_24->len);

  VAR_27 |= VAR_15;

  if (VAR_24->flags & VAR_0)
   VAR_27 |= VAR_12;

  if (VAR_24->flags & VAR_1)
   VAR_27 |= VAR_14;
 } else {

  VAR_31 = VAR_24->len;

  if (VAR_24->can_id & VAR_8)
   VAR_27 |= VAR_18;
 }


 VAR_27 |= VAR_17;


 if (VAR_22->can.ctrlmode & VAR_4)
  VAR_27 |= VAR_19;

 VAR_25->flags = FUNC_6(VAR_27);
 VAR_25->channel_dlc = FUNC_1(VAR_22->index, VAR_31);
 FUNC_8(VAR_25->d, VAR_24->data, VAR_24->len);


 VAR_25->client = VAR_22->echo_idx;

 FUNC_11(&VAR_22->echo_lock, VAR_28);


 FUNC_5(VAR_20, VAR_21, VAR_22->echo_idx);


 VAR_22->echo_idx = (VAR_22->echo_idx + 1) % VAR_22->can.echo_skb_max;





 VAR_29 = !!(VAR_22->can.echo_skb[VAR_22->echo_idx]);


 if (VAR_22->can.ctrlmode & VAR_3)
  VAR_29 |= (VAR_30 <
     (sizeof(*VAR_25) + VAR_2));
 else
  VAR_29 |= (VAR_30 <
     (sizeof(*VAR_25) + VAR_7));

 if (VAR_29)
  FUNC_10(VAR_21);

 FUNC_12(&VAR_22->echo_lock, VAR_28);


 VAR_22->write_tx_msg(VAR_22, VAR_25);

 return VAR_11;
}
