
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ucan_urb_context {int dlc; } ;
struct TYPE_8__ {size_t tx_fifo; } ;
struct ucan_priv {int echo_skb_lock; TYPE_5__* netdev; struct ucan_urb_context* context_array; TYPE_1__ device_info; } ;
struct TYPE_10__ {TYPE_2__* can_tx_complete_msg; } ;
struct ucan_message_in {TYPE_3__ msg; int len; } ;
struct TYPE_11__ {int tx_dropped; int tx_bytes; int tx_packets; int tx_errors; } ;
struct TYPE_12__ {TYPE_4__ stats; } ;
struct TYPE_9__ {size_t echo_index; int flags; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,size_t) ;
 int FUNC_2 (TYPE_5__*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,char*,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct ucan_priv*,struct ucan_urb_context*) ;

__attribute__((used)) static void FUNC_8(struct ucan_priv *VAR_2,
     struct ucan_message_in *VAR_3)
{
 unsigned long VAR_4;
 u16 VAR_5, VAR_6;
 u8 VAR_7, VAR_8;
 u16 VAR_9 = FUNC_3(VAR_3->len);

 struct ucan_urb_context *VAR_10;

 if (VAR_9 < VAR_0 || (VAR_9 % 2 != 0)) {
  FUNC_4(VAR_2->netdev, "invalid tx complete length\n");
  return;
 }

 VAR_5 = (VAR_9 - VAR_0) / 2;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {

  VAR_7 = VAR_3->msg.can_tx_complete_msg[VAR_6].echo_index;
  if (VAR_7 >= VAR_2->device_info.tx_fifo) {
   VAR_2->netdev->stats.tx_errors++;
   FUNC_4(VAR_2->netdev,
       "invalid echo_index %d received\n",
       VAR_7);
   continue;
  }


  VAR_10 = &VAR_2->context_array[VAR_7];
  VAR_8 = FUNC_0(VAR_10->dlc);




  if (!FUNC_7(VAR_2, VAR_10))
   continue;

  FUNC_5(&VAR_2->echo_skb_lock, VAR_4);
  if (VAR_3->msg.can_tx_complete_msg[VAR_6].flags &
      VAR_1) {

   VAR_2->netdev->stats.tx_packets++;
   VAR_2->netdev->stats.tx_bytes += VAR_8;
   FUNC_2(VAR_2->netdev, VAR_7);
  } else {
   VAR_2->netdev->stats.tx_dropped++;
   FUNC_1(VAR_2->netdev, VAR_7);
  }
  FUNC_6(&VAR_2->echo_skb_lock, VAR_4);
 }
}
