
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct urb {int status; int transfer_dma; int transfer_buffer; int dev; struct ucan_urb_context* context; } ;
struct ucan_urb_context {struct ucan_priv* up; } ;
struct ucan_priv {int context_array; TYPE_2__* netdev; int echo_skb_lock; } ;
struct ucan_message_out {int dummy; } ;
struct TYPE_6__ {int tx_dropped; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,struct ucan_urb_context*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct ucan_priv*,struct ucan_urb_context*) ;
 int FUNC_8 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct urb *VAR_0)
{
 unsigned long VAR_1;
 struct ucan_priv *VAR_2;
 struct ucan_urb_context *VAR_3 = VAR_0->context;


 if (FUNC_0(!VAR_3))
  return;


 FUNC_8(VAR_0->dev,
     sizeof(struct ucan_message_out),
     VAR_0->transfer_buffer,
     VAR_0->transfer_dma);

 VAR_2 = VAR_3->up;
 if (FUNC_0(!VAR_2))
  return;


 if (!FUNC_4(VAR_2->netdev))
  return;


 if (VAR_0->status) {
  FUNC_3(VAR_2->netdev,
       "failed to transmit USB message to device: %d\n",
        VAR_0->status);


  FUNC_5(&VAR_2->echo_skb_lock, VAR_1);
  FUNC_1(VAR_2->netdev, VAR_3 - VAR_2->context_array);
  FUNC_6(&VAR_2->echo_skb_lock, VAR_1);

  VAR_2->netdev->stats.tx_dropped++;


  if (!FUNC_7(VAR_2, VAR_3))
   FUNC_2(VAR_2->netdev,
       "urb failed, failed to release context\n");
 }
}
