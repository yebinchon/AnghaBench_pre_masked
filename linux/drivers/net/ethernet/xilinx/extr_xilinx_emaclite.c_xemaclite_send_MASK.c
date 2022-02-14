
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct net_local {int reset_lock; struct sk_buff* deferred_skb; } ;
struct TYPE_2__ {unsigned int tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (struct net_local*,int *,unsigned int) ;

__attribute__((used)) static netdev_tx_t
FUNC_7(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct net_local *VAR_3 = FUNC_1(VAR_2);
 struct sk_buff *VAR_4;
 unsigned int VAR_5;
 unsigned long VAR_6;

 VAR_5 = VAR_1->len;

 VAR_4 = VAR_1;

 FUNC_4(&VAR_3->reset_lock, VAR_6);
 if (FUNC_6(VAR_3, (u8 *)VAR_4->data, VAR_5) != 0) {




  FUNC_2(VAR_2);
  VAR_3->deferred_skb = VAR_4;

  FUNC_3(VAR_4);
  FUNC_5(&VAR_3->reset_lock, VAR_6);
  return VAR_0;
 }
 FUNC_5(&VAR_3->reset_lock, VAR_6);

 FUNC_3(VAR_4);

 VAR_2->stats.tx_bytes += VAR_5;
 FUNC_0(VAR_4);

 return VAR_0;
}
