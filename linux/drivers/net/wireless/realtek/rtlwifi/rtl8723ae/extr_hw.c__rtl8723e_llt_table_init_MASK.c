
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;
 int FUNC_6 (struct rtl_priv*,int,int) ;

__attribute__((used)) static bool FUNC_7(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_2(VAR_9);
 unsigned short VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 bool VAR_14;
 u8 VAR_15;
 FUNC_4(VAR_10, VAR_0, 0x8B);
 FUNC_5(VAR_10, VAR_6, (0x27FF0000 | VAR_12));
 FUNC_4(VAR_10, VAR_5 + 1, VAR_12);

 FUNC_4(VAR_10, VAR_7, VAR_12);
 FUNC_4(VAR_10, VAR_8, VAR_12);

 FUNC_4(VAR_10, 0x45D, VAR_12);
 FUNC_4(VAR_10, VAR_1, 0x11);
 FUNC_4(VAR_10, VAR_4, 0x4);

 for (VAR_11 = 0; VAR_11 < (VAR_12 - 1); VAR_11++) {
  VAR_14 = FUNC_1(VAR_9, VAR_11, VAR_11 + 1);
  if (1 != VAR_14)
   return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_9, (VAR_12 - 1), 0xFF);
 if (1 != VAR_14)
  return VAR_14;

 for (VAR_11 = VAR_12; VAR_11 < VAR_13; VAR_11++) {
  VAR_14 = FUNC_1(VAR_9, VAR_11, (VAR_11 + 1));
  if (1 != VAR_14)
   return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_9, VAR_13, VAR_12);
 if (1 != VAR_14)
  return VAR_14;

 FUNC_4(VAR_10, VAR_0, 0xff);
 VAR_15 = FUNC_3(VAR_10, VAR_2 + 3);
 FUNC_4(VAR_10, VAR_2 + 3, VAR_15 | FUNC_0(7));

 return 1;
}
