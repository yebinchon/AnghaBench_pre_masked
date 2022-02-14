
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_1,
           u8 VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_1);
 u8 VAR_4;
 bool VAR_5 = 0;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (((VAR_4 >> VAR_2) & FUNC_0(0)) == 0)
  VAR_5 = 1;
 return VAR_5;
}
