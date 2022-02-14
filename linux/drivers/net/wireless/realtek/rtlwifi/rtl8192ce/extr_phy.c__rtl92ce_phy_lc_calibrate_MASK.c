
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int ,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;

void FUNC_6(struct ieee80211_hw *VAR_4, bool VAR_5)
{
 u8 VAR_6;
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9;
 struct rtl_priv *VAR_10 = FUNC_2(VAR_4);

 VAR_6 = FUNC_3(VAR_10, 0xd03);

 if ((VAR_6 & 0x70) != 0)
  FUNC_5(VAR_10, 0xd03, VAR_6 & 0x8F);
 else
  FUNC_5(VAR_10, VAR_1, 0xFF);

 if ((VAR_6 & 0x70) != 0) {
  VAR_7 = FUNC_1(VAR_4, VAR_2, 0x00, VAR_0);

  if (VAR_5)
   VAR_8 = FUNC_1(VAR_4, VAR_3, 0x00,
        VAR_0);

  FUNC_4(VAR_4, VAR_2, 0x00, VAR_0,
         (VAR_7 & 0x8FFFF) | 0x10000);

  if (VAR_5)
   FUNC_4(VAR_4, VAR_3, 0x00, VAR_0,
          (VAR_8 & 0x8FFFF) | 0x10000);
 }
 VAR_9 = FUNC_1(VAR_4, VAR_2, 0x18, VAR_0);

 FUNC_4(VAR_4, VAR_2, 0x18, VAR_0, VAR_9 | 0x08000);

 FUNC_0(100);

 if ((VAR_6 & 0x70) != 0) {
  FUNC_5(VAR_10, 0xd03, VAR_6);
  FUNC_4(VAR_4, VAR_2, 0x00, VAR_0, VAR_7);

  if (VAR_5)
   FUNC_4(VAR_4, VAR_3, 0x00, VAR_0,
          VAR_8);
 } else {
  FUNC_5(VAR_10, VAR_1, 0x00);
 }
}
