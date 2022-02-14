
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int rfe_type; scalar_t__ hw_type; scalar_t__ external_lna_2g; scalar_t__ external_lna_5g; scalar_t__ external_pa_2g; scalar_t__ external_pa_5g; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_4, u8 *VAR_5,
         bool VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_3(VAR_4);
 struct rtl_hal *VAR_8 = FUNC_2(VAR_7);

 if (!VAR_6) {
  if (VAR_5[VAR_2] & FUNC_0(7)) {
   if (VAR_8->external_lna_5g) {
    if (VAR_8->external_pa_5g) {
     if (VAR_8->external_lna_2g &&
         VAR_8->external_pa_2g)
      VAR_8->rfe_type = 3;
     else
      VAR_8->rfe_type = 0;
    } else {
     VAR_8->rfe_type = 2;
    }
   } else {
    VAR_8->rfe_type = 4;
   }
  } else {
   VAR_8->rfe_type = VAR_5[VAR_2] & 0x3F;

   if (VAR_8->rfe_type == 4 &&
       (VAR_8->external_pa_5g ||
        VAR_8->external_pa_2g ||
        VAR_8->external_lna_5g ||
        VAR_8->external_lna_2g)) {
    if (VAR_8->hw_type == VAR_3)
     VAR_8->rfe_type = 2;
   }
  }
 } else {
  VAR_8->rfe_type = 0x04;
 }

 FUNC_1(VAR_7, VAR_0, VAR_1,
   "RFE Type: 0x%2x\n", VAR_8->rfe_type);
}
