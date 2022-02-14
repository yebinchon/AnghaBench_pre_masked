
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct rtl_hal*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 struct rtl_hal* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;

void FUNC_5(struct ieee80211_hw *VAR_2,
          u8 VAR_3)
{
 struct rtl_hal *VAR_4 = FUNC_3(FUNC_4(VAR_2));

 if (!FUNC_0(VAR_4)) {
  switch (VAR_3) {
  case 129:
   FUNC_2(VAR_2, VAR_0);
   break;
  case 128:
   FUNC_2(VAR_2, VAR_1);
   break;
  default:
   FUNC_1("Unknown operation\n");
   break;
  }
 }
}
