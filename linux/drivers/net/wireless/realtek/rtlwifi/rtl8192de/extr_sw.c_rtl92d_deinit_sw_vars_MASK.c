
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int * skb_waitq; } ;
struct TYPE_3__ {int * pfirmware; } ;
struct rtl_priv {TYPE_2__ mac80211; TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_0(VAR_0);
 u8 VAR_2;

 if (VAR_1->rtlhal.pfirmware) {
  FUNC_2(VAR_1->rtlhal.pfirmware);
  VAR_1->rtlhal.pfirmware = ((void*)0);
 }
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  FUNC_1(&VAR_1->mac80211.skb_waitq[VAR_2]);
}
