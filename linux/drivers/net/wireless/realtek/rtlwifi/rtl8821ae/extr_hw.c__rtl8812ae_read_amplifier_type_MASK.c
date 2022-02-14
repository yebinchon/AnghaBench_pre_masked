
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int pa_type_2g; int type_gpa; int pa_type_5g; int type_apa; int lna_type_2g; int type_glna; int lna_type_5g; int type_alna; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int*,int) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0, u8 *VAR_1,
        bool VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_3(VAR_0);
 struct rtl_hal *VAR_4 = FUNC_2(VAR_3);

 u8 VAR_5 = (VAR_1[0XBD] & FUNC_0(2)) >> 2;
 u8 VAR_6 = (VAR_1[0XBD] & FUNC_0(6)) >> 6;
 u8 VAR_7 = (VAR_1[0XBF] & FUNC_0(2)) >> 2;
 u8 VAR_8 = (VAR_1[0XBF] & FUNC_0(6)) >> 6;

 u8 VAR_9 = (VAR_1[0XBD] & (FUNC_0(1) | FUNC_0(0))) >> 0;

 u8 VAR_10 = (VAR_1[0XBD] & (FUNC_0(5) | FUNC_0(4))) >> 4;

 u8 VAR_11 = (VAR_1[0XBF] & (FUNC_0(1) | FUNC_0(0))) >> 0;

 u8 VAR_12 = (VAR_1[0XBF] & (FUNC_0(5) | FUNC_0(4))) >> 4;

 FUNC_1(VAR_0, VAR_1, VAR_2);


 if ((VAR_4->pa_type_2g & (FUNC_0(5) | FUNC_0(4))) == (FUNC_0(5) | FUNC_0(4)))
  VAR_4->type_gpa = VAR_6 << 2 | VAR_5;


 if ((VAR_4->pa_type_5g & (FUNC_0(1) | FUNC_0(0))) == (FUNC_0(1) | FUNC_0(0)))
  VAR_4->type_apa = VAR_8 << 2 | VAR_7;


 if ((VAR_4->lna_type_2g & (FUNC_0(7) | FUNC_0(3))) == (FUNC_0(7) | FUNC_0(3)))
  VAR_4->type_glna = VAR_10 << 2 | VAR_9;


 if ((VAR_4->lna_type_5g & (FUNC_0(7) | FUNC_0(3))) == (FUNC_0(7) | FUNC_0(3)))
  VAR_4->type_alna = VAR_12 << 2 | VAR_11;
}
