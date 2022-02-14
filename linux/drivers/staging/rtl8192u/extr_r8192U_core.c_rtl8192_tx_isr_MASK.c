
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct urb {scalar_t__ status; scalar_t__ context; } ;
struct sk_buff {scalar_t__ len; scalar_t__ cb; } ;
struct TYPE_6__ {int txbytesunicast; int txoktotal; } ;
struct r8192_priv {TYPE_4__* ieee80211; int * tx_pending; TYPE_2__ stats; } ;
struct net_device {int dummy; } ;
struct cb_desc {size_t queue_index; } ;
struct TYPE_7__ {int tx_errors; } ;
struct TYPE_5__ {int NumTxOkInPeriod; } ;
struct TYPE_8__ {int (* softmac_hard_start_xmit ) (struct sk_buff*,struct net_device*) ;int * skb_waitQ; int queue_stop; TYPE_3__ stats; scalar_t__ tx_headroom; TYPE_1__ LinkDetectInfo; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct sk_buff* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 int FUNC_7 (struct urb*) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_3)
{
 struct sk_buff *VAR_4 = (struct sk_buff *)VAR_3->context;
 struct net_device *VAR_5;
 struct r8192_priv *VAR_6 = ((void*)0);
 struct cb_desc *VAR_7;
 u8 VAR_8;

 if (!VAR_4)
  return;

 VAR_5 = *(struct net_device **)(VAR_4->cb);
 VAR_7 = (struct cb_desc *)(VAR_4->cb + VAR_1);
 VAR_8 = VAR_7->queue_index;

 VAR_6 = FUNC_2(VAR_5);

 if (VAR_7->queue_index != VAR_2) {
  if (VAR_3->status == 0) {
   FUNC_3(VAR_5);
   VAR_6->stats.txoktotal++;
   VAR_6->ieee80211->LinkDetectInfo.NumTxOkInPeriod++;
   VAR_6->stats.txbytesunicast +=
    (VAR_4->len - VAR_6->ieee80211->tx_headroom);
  } else {
   VAR_6->ieee80211->stats.tx_errors++;

  }
 }


 FUNC_1(VAR_4);
 FUNC_7(VAR_3);
 FUNC_0(&VAR_6->tx_pending[VAR_8]);
 if (VAR_8 != VAR_0) {

  if ((FUNC_5(&VAR_6->ieee80211->skb_waitQ[VAR_8]) != 0) &&
      (!(VAR_6->ieee80211->queue_stop))) {
   VAR_4 = FUNC_4(&(VAR_6->ieee80211->skb_waitQ[VAR_8]));
   if (VAR_4)
    VAR_6->ieee80211->softmac_hard_start_xmit(VAR_4,
          VAR_5);

   return;
  }
 }
}
