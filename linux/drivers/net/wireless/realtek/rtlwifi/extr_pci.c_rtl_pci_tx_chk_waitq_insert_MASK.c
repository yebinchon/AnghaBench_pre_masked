
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct rtl_sta_info {TYPE_3__* tids; } ;
struct TYPE_12__ {int waitq_lock; } ;
struct TYPE_11__ {int * skb_waitq; } ;
struct TYPE_10__ {int * higher_busytxtraffic; } ;
struct TYPE_7__ {int earlymode_enable; } ;
struct rtl_priv {TYPE_6__ locks; TYPE_5__ mac80211; TYPE_4__ link_info; TYPE_1__ rtlhal; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le16 ;
struct TYPE_8__ {scalar_t__ agg_state; } ;
struct TYPE_9__ {TYPE_2__ agg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 size_t FUNC_5 (struct sk_buff*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(struct ieee80211_hw *VAR_2,
     struct ieee80211_sta *VAR_3,
     struct sk_buff *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_6(VAR_2);
 struct rtl_sta_info *VAR_6 = ((void*)0);
 u8 VAR_7 = FUNC_5(VAR_4);
 __le16 VAR_8 = FUNC_4(VAR_4);

 if (!VAR_3)
  return 0;
 VAR_6 = (struct rtl_sta_info *)VAR_3->drv_priv;

 if (!VAR_5->rtlhal.earlymode_enable)
  return 0;
 if (FUNC_1(VAR_8))
  return 0;
 if (FUNC_3(VAR_8))
  return 0;
 if (FUNC_2(VAR_8))
  return 0;
 if (VAR_6->tids[VAR_7].agg.agg_state != VAR_0)
  return 0;
 if (FUNC_0(VAR_2, VAR_4) > VAR_1)
  return 0;
 if (VAR_7 > 7)
  return 0;


 if (!VAR_5->link_info.higher_busytxtraffic[VAR_7])
  return 0;

 FUNC_8(&VAR_5->locks.waitq_lock);
 FUNC_7(&VAR_5->mac80211.skb_waitq[VAR_7], VAR_4);
 FUNC_9(&VAR_5->locks.waitq_lock);

 return 1;
}
