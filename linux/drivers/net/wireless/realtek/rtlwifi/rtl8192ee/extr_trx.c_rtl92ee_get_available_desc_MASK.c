
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef scalar_t__ tmp_4byte ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;

u16 FUNC_4(struct ieee80211_hw *VAR_1, u8 VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_1);
 u16 VAR_4 = 0;
 u16 VAR_5, VAR_6;
 u32 VAR_7;

 VAR_7 = FUNC_3(VAR_3,
       FUNC_1(VAR_2));
 VAR_5 = (u16)((VAR_7 >> 16) & 0x0fff);
 VAR_6 = (u16)((VAR_7) & 0x0fff);

 VAR_4 = FUNC_0(VAR_5,
         VAR_6,
         VAR_0);

 return VAR_4;
}
