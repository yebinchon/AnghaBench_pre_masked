
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (struct rtl_priv*,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_2, u8 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5, VAR_6;
 bool VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 VAR_6 = FUNC_2(VAR_4, (VAR_1 + VAR_3));

 if (((VAR_5 >> VAR_3) & FUNC_0(0)) == 0 && VAR_6 == 0)
  VAR_7 = 1;
 return VAR_7;
}
