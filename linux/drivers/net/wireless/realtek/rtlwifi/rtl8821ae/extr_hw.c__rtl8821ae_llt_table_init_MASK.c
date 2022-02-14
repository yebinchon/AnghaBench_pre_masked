
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_1(VAR_9);
 unsigned short VAR_11;
 u8 VAR_12;
 u32 VAR_13;
 u8 VAR_14;
 bool VAR_15;

 VAR_14 = 255;
 VAR_12 = 0xF7;
 VAR_13 = 0x80e60808;

 FUNC_2(VAR_10, VAR_6, VAR_12);
 FUNC_4(VAR_10, VAR_6 + 2, VAR_0 - 1);

 FUNC_2(VAR_10, VAR_5 + 1, VAR_12);

 FUNC_2(VAR_10, VAR_7, VAR_12);
 FUNC_2(VAR_10, VAR_8, VAR_12);

 FUNC_2(VAR_10, VAR_1, 0x31);
 FUNC_2(VAR_10, VAR_4, 0x4);

 for (VAR_11 = 0; VAR_11 < (VAR_12 - 1); VAR_11++) {
  VAR_15 = FUNC_0(VAR_9, VAR_11, VAR_11 + 1);
  if (!VAR_15)
   return VAR_15;
 }

 VAR_15 = FUNC_0(VAR_9, (VAR_12 - 1), 0xFF);
 if (!VAR_15)
  return VAR_15;

 for (VAR_11 = VAR_12; VAR_11 < VAR_14; VAR_11++) {
  VAR_15 = FUNC_0(VAR_9, VAR_11, (VAR_11 + 1));
  if (!VAR_15)
   return VAR_15;
 }

 VAR_15 = FUNC_0(VAR_9, VAR_14, VAR_12);
 if (!VAR_15)
  return VAR_15;

 FUNC_3(VAR_10, VAR_2, VAR_13);

 FUNC_2(VAR_10, VAR_3, 0x00);

 return 1;
}
