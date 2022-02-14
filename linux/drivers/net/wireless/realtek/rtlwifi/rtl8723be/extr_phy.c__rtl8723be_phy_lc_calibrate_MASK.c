
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
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int,int ,int) ;
 int FUNC_6 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_7, bool VAR_8)
{
 u8 VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0, VAR_12;
 struct rtl_priv *VAR_13 = FUNC_3(VAR_7);

 VAR_9 = FUNC_4(VAR_13, 0xd03);

 if ((VAR_9 & 0x70) != 0)
  FUNC_6(VAR_13, 0xd03, VAR_9 & 0x8F);
 else
  FUNC_6(VAR_13, VAR_3, 0xFF);

 if ((VAR_9 & 0x70) != 0) {
  VAR_10 = FUNC_2(VAR_7, VAR_4, 0x00, VAR_2);

  if (VAR_8)
   VAR_11 = FUNC_2(VAR_7, VAR_5, 0x00,
        VAR_2);

  FUNC_5(VAR_7, VAR_4, 0x00, VAR_2,
         (VAR_10 & 0x8FFFF) | 0x10000);

  if (VAR_8)
   FUNC_5(VAR_7, VAR_5, 0x00, VAR_2,
          (VAR_11 & 0x8FFFF) | 0x10000);
 }
 VAR_12 = FUNC_2(VAR_7, VAR_4, 0x18, VAR_2);

 FUNC_5(VAR_7, VAR_4, 0xb0, VAR_6, 0xdfbe0);
 FUNC_5(VAR_7, VAR_4, 0x18, VAR_2, 0x8c0a);




 FUNC_1(50);

 FUNC_5(VAR_7, VAR_4, 0xb0, VAR_6, 0xdffe0);

 if ((VAR_9 & 0x70) != 0) {
  FUNC_6(VAR_13, 0xd03, VAR_9);
  FUNC_5(VAR_7, VAR_4, 0x00, VAR_2, VAR_10);

  if (VAR_8)
   FUNC_5(VAR_7, VAR_5, 0x00,
          VAR_2, VAR_11);
 } else {
  FUNC_6(VAR_13, VAR_3, 0x00);
 }
 FUNC_0(VAR_13, VAR_0, VAR_1, "\n");
}
