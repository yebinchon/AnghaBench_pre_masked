
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ macphymode; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct ieee80211_hw*,int,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_5(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_1(VAR_9);
 unsigned short VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 bool VAR_14;
 u32 VAR_15;
 u8 VAR_16;

 if (VAR_10->rtlhal.macphymode == VAR_8) {
  VAR_13 = 255;
  VAR_12 = 246;
  VAR_16 = 0;
  VAR_15 = 0x80bf0d29;
 } else {
  VAR_13 = 127;
  VAR_12 = 123;
  VAR_16 = 0;
  VAR_15 = 0x80750005;
 }




 FUNC_3(VAR_10, VAR_2, VAR_16);
 FUNC_4(VAR_10, VAR_1, VAR_15);



 FUNC_4(VAR_10, VAR_5,
   (FUNC_2(VAR_10, VAR_5 + 2) << 16 |
   VAR_12));



 FUNC_3(VAR_10, VAR_4 + 1, VAR_12);



 FUNC_3(VAR_10, VAR_6, VAR_12);
 FUNC_3(VAR_10, VAR_7, VAR_12);



 FUNC_3(VAR_10, 0x45D, VAR_12);





 FUNC_3(VAR_10, VAR_0, 0x11);


 FUNC_3(VAR_10, VAR_3, 0x4);


 for (VAR_11 = 0; VAR_11 < (VAR_12 - 1); VAR_11++) {
  VAR_14 = FUNC_0(VAR_9, VAR_11, VAR_11 + 1);
  if (1 != VAR_14)
   return VAR_14;
 }


 VAR_14 = FUNC_0(VAR_9, (VAR_12 - 1), 0xFF);
 if (1 != VAR_14)
  return VAR_14;





 for (VAR_11 = VAR_12; VAR_11 < VAR_13; VAR_11++) {
  VAR_14 = FUNC_0(VAR_9, VAR_11, (VAR_11 + 1));
  if (1 != VAR_14)
   return VAR_14;
 }


 VAR_14 = FUNC_0(VAR_9, VAR_13, VAR_12);
 if (1 != VAR_14)
  return VAR_14;

 return 1;
}
