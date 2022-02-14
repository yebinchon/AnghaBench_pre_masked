
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;

__attribute__((used)) static bool FUNC_5(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_8);
 unsigned short VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 bool VAR_13;
 FUNC_3(VAR_9, VAR_5, (0x27FF0000 | VAR_11));
 FUNC_2(VAR_9, VAR_4 + 1, VAR_11);

 FUNC_2(VAR_9, VAR_6, VAR_11);
 FUNC_2(VAR_9, VAR_7, VAR_11);

 FUNC_2(VAR_9, 0x45D, VAR_11);
 FUNC_2(VAR_9, VAR_0, 0x11);
 FUNC_2(VAR_9, VAR_3, 0x4);

 for (VAR_10 = 0; VAR_10 < (VAR_11 - 1); VAR_10++) {
  VAR_13 = FUNC_0(VAR_8, VAR_10, VAR_10 + 1);
  if (1 != VAR_13)
   return VAR_13;
 }

 VAR_13 = FUNC_0(VAR_8, (VAR_11 - 1), 0xFF);
 if (1 != VAR_13)
  return VAR_13;

 for (VAR_10 = VAR_11; VAR_10 < VAR_12; VAR_10++) {
  VAR_13 = FUNC_0(VAR_8, VAR_10, (VAR_10 + 1));
  if (1 != VAR_13)
   return VAR_13;
 }

 VAR_13 = FUNC_0(VAR_8, VAR_12, VAR_11);
 if (1 != VAR_13)
  return VAR_13;

 return 1;
}
