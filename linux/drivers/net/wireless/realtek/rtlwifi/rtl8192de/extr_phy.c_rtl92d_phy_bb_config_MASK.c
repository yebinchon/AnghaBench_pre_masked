
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int version; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__) ;
 int FUNC_6 (struct rtl_priv*,int ) ;
 int FUNC_7 (struct rtl_priv*,scalar_t__) ;
 int FUNC_8 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_9 (struct rtl_priv*,int ,int) ;
 int FUNC_10 (struct rtl_priv*,scalar_t__,int) ;

bool FUNC_11(struct ieee80211_hw *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_4(VAR_13);
 u16 VAR_15;
 u32 VAR_16;
 u8 VAR_17;

 FUNC_3(VAR_13);
 VAR_15 = FUNC_7(VAR_14, VAR_9);
 FUNC_10(VAR_14, VAR_9,
         VAR_15 | FUNC_0(13) | FUNC_0(0) | FUNC_0(1));
 FUNC_8(VAR_14, VAR_5, 0x83);
 FUNC_8(VAR_14, VAR_5 + 1, 0xdb);

 VAR_17 = FUNC_5(VAR_14, VAR_8);
 FUNC_8(VAR_14, VAR_8, VAR_17 | VAR_10 | VAR_11 |
  VAR_12);
 FUNC_8(VAR_14, VAR_9, VAR_4 | VAR_3 |
  VAR_2 | VAR_1 | VAR_0);
 FUNC_8(VAR_14, VAR_6 + 1, 0x80);
 if (!(FUNC_1(VAR_14->rtlhal.version))) {
  VAR_16 = FUNC_6(VAR_14, VAR_7);
  FUNC_9(VAR_14, VAR_7, VAR_16 | FUNC_0(23));
 }

 return FUNC_2(VAR_13);
}
