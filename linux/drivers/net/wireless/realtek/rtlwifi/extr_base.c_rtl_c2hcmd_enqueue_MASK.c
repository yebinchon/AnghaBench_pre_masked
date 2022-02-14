
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int c2hcmd_wq; int rtl_wq; } ;
struct TYPE_4__ {int c2hcmd_lock; } ;
struct rtl_priv {TYPE_1__ works; TYPE_2__ locks; int c2hcmd_queue; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct ieee80211_hw*,struct sk_buff*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct ieee80211_hw *VAR_0, struct sk_buff *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_5(VAR_0);
 unsigned long VAR_3;

 if (FUNC_4(VAR_0, VAR_1)) {
  FUNC_3(VAR_0, VAR_1);
  FUNC_1(VAR_1);
  return;
 }


 FUNC_6(&VAR_2->locks.c2hcmd_lock, VAR_3);

 FUNC_0(&VAR_2->c2hcmd_queue, VAR_1);

 FUNC_7(&VAR_2->locks.c2hcmd_lock, VAR_3);


 FUNC_2(VAR_2->works.rtl_wq, &VAR_2->works.c2hcmd_wq, 0);
}
