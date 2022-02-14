
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int,int ,int) ;
 int FUNC_6 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_6, bool VAR_7)
{
 u8 VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0, VAR_11;
 struct rtl_priv *VAR_12 = FUNC_3(VAR_6);

 VAR_8 = FUNC_4(VAR_12, 0xd03);

 if ((VAR_8 & 0x70) != 0)
  FUNC_6(VAR_12, 0xd03, VAR_8 & 0x8F);
 else
  FUNC_6(VAR_12, VAR_3, 0xFF);

 if ((VAR_8 & 0x70) != 0) {
  VAR_9 = FUNC_2(VAR_6, VAR_4, 0x00, VAR_2);

  if (VAR_7)
   VAR_10 = FUNC_2(VAR_6, VAR_5, 0x00,
        VAR_2);

  FUNC_5(VAR_6, VAR_4, 0x00, VAR_2,
         (VAR_9 & 0x8FFFF) | 0x10000);

  if (VAR_7)
   FUNC_5(VAR_6, VAR_5, 0x00, VAR_2,
          (VAR_10 & 0x8FFFF) | 0x10000);
 }
 VAR_11 = FUNC_2(VAR_6, VAR_4, 0x18, VAR_2);

 FUNC_5(VAR_6, VAR_4, 0x18, VAR_2, VAR_11 | 0x08000);

 FUNC_1(100);

 if ((VAR_8 & 0x70) != 0) {
  FUNC_6(VAR_12, 0xd03, VAR_8);
  FUNC_5(VAR_6, VAR_4, 0x00, VAR_2, VAR_9);

  if (VAR_7)
   FUNC_5(VAR_6, VAR_5, 0x00, VAR_2,
          VAR_10);
 } else {
  FUNC_6(VAR_12, VAR_3, 0x00);
 }
 FUNC_0(VAR_12, VAR_0, VAR_1, "\n");
}
