
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_6 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_11, bool VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_4(VAR_11);
 struct rtl_hal *VAR_14 = FUNC_3(FUNC_4(VAR_11));
 u8 VAR_15;
 u8 VAR_16;

 if (!VAR_12)
  VAR_15 = VAR_8;
 else
  VAR_15 = (FUNC_0(VAR_14->version))
      ? VAR_10
      : VAR_9;
 FUNC_5(VAR_13, VAR_4, VAR_15);
 FUNC_5(VAR_13, VAR_5, VAR_15);
 FUNC_5(VAR_13, VAR_6, VAR_15);
 FUNC_5(VAR_13, VAR_3, VAR_15);
 FUNC_5(VAR_13, VAR_2+1, VAR_15);
 FUNC_6(VAR_13, (VAR_3 + 2), 0x27FF);
 VAR_16 = FUNC_1(VAR_7) | FUNC_2(VAR_0);
 FUNC_5(VAR_13, VAR_1, VAR_16);
}
