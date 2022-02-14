
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_mac {scalar_t__ link_state; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct rtl_dm {int linked_interval; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_dm* FUNC_2 (int ) ;
 struct rtl_hal* FUNC_3 (int ) ;
 struct rtl_mac* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_2)
{
 struct rtl_mac *VAR_3 = FUNC_4(FUNC_5(VAR_2));
 struct rtl_dm *VAR_4 = FUNC_2(FUNC_5(VAR_2));
 struct rtl_hal *VAR_5 = FUNC_3(FUNC_5(VAR_2));

 if (VAR_3->link_state >= VAR_1) {
  if (VAR_4->linked_interval < 3)
   VAR_4->linked_interval++;

  if (VAR_4->linked_interval == 2) {
   if (VAR_5->hw_type == VAR_0)
    FUNC_0(VAR_2, 0);
   else
    FUNC_1(VAR_2, 0);
  }
 } else {
  VAR_4->linked_interval = 0;
 }
}
