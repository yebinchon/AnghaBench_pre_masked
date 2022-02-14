
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_hal {int current_ra_rate; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_0,
         u8 *VAR_1, u8 VAR_2)
{
 struct rtl_hal *VAR_3 = FUNC_2(FUNC_3(VAR_0));
 u8 VAR_4 = VAR_1[0] & 0x3F;

 VAR_3->current_ra_rate = FUNC_1(VAR_0, VAR_4);

 FUNC_0(VAR_0, VAR_4);
}
