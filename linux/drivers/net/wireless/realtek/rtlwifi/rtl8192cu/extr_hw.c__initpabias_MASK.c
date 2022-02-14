
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int) ;
 int FUNC_7 (struct ieee80211_hw*,int ,int,int,int) ;
 int FUNC_8 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_5(VAR_2);
 struct rtl_hal *VAR_4 = FUNC_4(FUNC_5(VAR_2));
 u8 VAR_5;


 VAR_5 = FUNC_3(VAR_2, 0x1FA);
 if (!(VAR_5 & FUNC_0(0))) {
  FUNC_7(VAR_2, VAR_0, 0x15, 0x0FFFFF, 0x0F406);
  FUNC_7(VAR_2, VAR_0, 0x15, 0x0FFFFF, 0x4F406);
  FUNC_7(VAR_2, VAR_0, 0x15, 0x0FFFFF, 0x8F406);
  FUNC_7(VAR_2, VAR_0, 0x15, 0x0FFFFF, 0xCF406);
 }
 if (!(VAR_5 & FUNC_0(1)) && FUNC_2(VAR_4->version) &&
     FUNC_1(VAR_4->version)) {
  FUNC_7(VAR_2, VAR_1, 0x15, 0x0FFFFF, 0x0F406);
  FUNC_7(VAR_2, VAR_1, 0x15, 0x0FFFFF, 0x4F406);
  FUNC_7(VAR_2, VAR_1, 0x15, 0x0FFFFF, 0x8F406);
  FUNC_7(VAR_2, VAR_1, 0x15, 0x0FFFFF, 0xCF406);
 }
 if (!(VAR_5 & FUNC_0(4))) {
  VAR_5 = FUNC_6(VAR_3, 0x16);
  VAR_5 &= 0x0F;
  FUNC_8(VAR_3, 0x16, VAR_5 | 0x90);
 }
}
