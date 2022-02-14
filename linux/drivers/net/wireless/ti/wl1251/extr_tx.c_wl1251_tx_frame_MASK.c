
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl1251 {int monitor_present; scalar_t__ default_key; int joined; int * vif; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct TYPE_3__ {scalar_t__ hw_key_idx; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct wl1251*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct wl1251*,scalar_t__) ;
 int FUNC_4 (struct wl1251*,struct sk_buff*,struct ieee80211_tx_info*) ;
 int FUNC_5 (struct wl1251*) ;
 int FUNC_6 (struct wl1251*,struct sk_buff*,struct ieee80211_tx_info*) ;
 int FUNC_7 (struct wl1251*) ;

__attribute__((used)) static int FUNC_8(struct wl1251 *VAR_1, struct sk_buff *VAR_2)
{
 struct ieee80211_tx_info *VAR_3;
 int VAR_4 = 0;
 u8 VAR_5;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->control.hw_key) {
  if (FUNC_2(VAR_1->monitor_present))
   return -VAR_0;

  VAR_5 = VAR_3->control.hw_key->hw_key_idx;
  if (FUNC_2(VAR_1->default_key != VAR_5)) {
   VAR_4 = FUNC_3(VAR_1, VAR_5);
   if (VAR_4 < 0)
    return VAR_4;
  }
 }


 if ((VAR_1->vif == ((void*)0)) && !VAR_1->joined)
  FUNC_1(VAR_1);

 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_6(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_7(VAR_1);

 return VAR_4;
}
