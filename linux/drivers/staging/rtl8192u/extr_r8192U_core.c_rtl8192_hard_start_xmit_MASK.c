
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {int tx_lock; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct cb_desc {scalar_t__ queue_index; } ;
typedef int dev ;
struct TYPE_2__ {int tx_headroom; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned char*,struct net_device**,int) ;
 int FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 (struct net_device*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct r8192_priv *VAR_5 = (struct r8192_priv *)FUNC_0(VAR_4);
 int VAR_6;
 unsigned long VAR_7;
 struct cb_desc *VAR_8 = (struct cb_desc *)(VAR_3->cb + VAR_0);
 u8 VAR_9 = VAR_8->queue_index;


 FUNC_5(&VAR_5->tx_lock, VAR_7);

 FUNC_1((unsigned char *)(VAR_3->cb), &VAR_4, sizeof(VAR_4));
 if (VAR_9 == VAR_1) {
  FUNC_4(VAR_3, VAR_2);
  FUNC_3(VAR_4, VAR_3);
  VAR_6 = 1;
 } else {
  FUNC_4(VAR_3, VAR_5->ieee80211->tx_headroom);
  VAR_6 = FUNC_2(VAR_4, VAR_3);
 }

 FUNC_6(&VAR_5->tx_lock, VAR_7);

 return VAR_6;
}
