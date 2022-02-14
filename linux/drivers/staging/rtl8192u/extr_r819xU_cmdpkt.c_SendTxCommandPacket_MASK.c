
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct cb_desc {size_t queue_index; scalar_t__ txbuf_size; scalar_t__ bLastIniPkt; int bCmdOrInit; } ;
typedef int rt_status ;
typedef int dev ;
struct TYPE_2__ {int (* softmac_hard_start_xmit ) (struct sk_buff*,struct net_device*) ;int * skb_waitQ; scalar_t__ queue_stop; int (* check_nic_enough_desc ) (struct net_device*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (unsigned char*,struct net_device**,int) ;
 int FUNC_4 (struct sk_buff*,void*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct net_device*,size_t) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;

rt_status FUNC_10(struct net_device *VAR_7, void *VAR_8, u32 VAR_9)
{
 struct r8192_priv *VAR_10 = FUNC_2(VAR_7);
 struct sk_buff *VAR_11;
 struct cb_desc *VAR_12;




 VAR_11 = FUNC_1(VAR_6 + VAR_9 + 4);
 if (!VAR_11)
  return VAR_3;
 FUNC_3((unsigned char *)(VAR_11->cb), &VAR_7, sizeof(VAR_7));
 VAR_12 = (struct cb_desc *)(VAR_11->cb + VAR_2);
 VAR_12->queue_index = VAR_5;
 VAR_12->bCmdOrInit = VAR_1;
 VAR_12->bLastIniPkt = 0;
 FUNC_7(VAR_11, VAR_6);
 FUNC_4(VAR_11, VAR_8, VAR_9);
 VAR_12->txbuf_size = (u16)VAR_9;

 if (!VAR_10->ieee80211->check_nic_enough_desc(VAR_7, VAR_12->queue_index) ||
     (!FUNC_5(&VAR_10->ieee80211->skb_waitQ[VAR_12->queue_index])) ||
     (VAR_10->ieee80211->queue_stop)) {
  FUNC_0(VAR_0, "=== NULL packet ======> tx full!\n");
  FUNC_6(&VAR_10->ieee80211->skb_waitQ[VAR_12->queue_index], VAR_11);
 } else {
  VAR_10->ieee80211->softmac_hard_start_xmit(VAR_11, VAR_7);
 }

 return VAR_4;
}
