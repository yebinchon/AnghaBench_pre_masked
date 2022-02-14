
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,int,int ,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ,int ) ;
 struct rtl_hal* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0,
      bool VAR_1,
      u8 VAR_2,
      u8 VAR_3)
{
 struct rtl_hal *VAR_4 = FUNC_3(FUNC_4(VAR_0));

 if (FUNC_0(VAR_4->version))
  FUNC_1(VAR_0, VAR_1, VAR_2,
         VAR_3);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2,
         VAR_3);
}
