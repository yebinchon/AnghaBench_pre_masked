
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_hal {int ic_class; } ;
struct rtl_efuse {scalar_t__ epromtype; int autoload_failflag; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_hw*,int ) ;
 struct rtl_efuse* FUNC_1 (int ) ;
 struct rtl_hal* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_4)
{
 struct rtl_efuse *VAR_5 = FUNC_1(FUNC_3(VAR_4));
 struct rtl_hal *VAR_6 = FUNC_2(FUNC_3(VAR_4));
 u8 VAR_7;

 VAR_6->ic_class = VAR_2;


 if ((VAR_5->epromtype == VAR_0) &&
  !VAR_5->autoload_failflag) {
  VAR_7 = FUNC_0(VAR_4, VAR_1);

  if (VAR_7 == 0xfe)
   VAR_6->ic_class = VAR_3;
 }
}
