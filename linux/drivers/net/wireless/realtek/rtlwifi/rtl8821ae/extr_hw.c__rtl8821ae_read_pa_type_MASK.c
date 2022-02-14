
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int pa_type_2g; int lna_type_2g; int external_pa_2g; int external_lna_2g; int pa_type_5g; int lna_type_5g; int external_pa_5g; int external_lna_5g; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0, u8 *VAR_1,
        bool VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_0);
 struct rtl_hal *VAR_4 = FUNC_1(VAR_3);

 if (!VAR_2) {
  VAR_4->pa_type_2g = VAR_1[0XBC];
  VAR_4->lna_type_2g = VAR_1[0XBD];
  if (VAR_4->pa_type_2g == 0xFF && VAR_4->lna_type_2g == 0xFF) {
   VAR_4->pa_type_2g = 0;
   VAR_4->lna_type_2g = 0;
  }
  VAR_4->external_pa_2g = (VAR_4->pa_type_2g & FUNC_0(5)) ? 1 : 0;
  VAR_4->external_lna_2g = (VAR_4->lna_type_2g & FUNC_0(7)) ? 1 : 0;

  VAR_4->pa_type_5g = VAR_1[0XBC];
  VAR_4->lna_type_5g = VAR_1[0XBF];
  if (VAR_4->pa_type_5g == 0xFF && VAR_4->lna_type_5g == 0xFF) {
   VAR_4->pa_type_5g = 0;
   VAR_4->lna_type_5g = 0;
  }
  VAR_4->external_pa_5g = (VAR_4->pa_type_5g & FUNC_0(1)) ? 1 : 0;
  VAR_4->external_lna_5g = (VAR_4->lna_type_5g & FUNC_0(7)) ? 1 : 0;
 } else {
  VAR_4->external_pa_2g = 0;
  VAR_4->external_lna_2g = 0;
  VAR_4->external_pa_5g = 0;
  VAR_4->external_lna_5g = 0;
 }
}
