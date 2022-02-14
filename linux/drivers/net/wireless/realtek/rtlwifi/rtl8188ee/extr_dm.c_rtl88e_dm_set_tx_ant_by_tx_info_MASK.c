
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct rtl_efuse {scalar_t__ antenna_div_type; } ;
struct fast_ant_training {int * antsel_c; int * antsel_b; int * antsel_a; } ;
struct rtl_dm {struct fast_ant_training fat_table; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct rtl_dm* FUNC_0 (int ) ;
 struct rtl_efuse* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct ieee80211_hw *VAR_2,
         u8 *VAR_3, u32 VAR_4)
{
 struct rtl_efuse *VAR_5 = FUNC_1(FUNC_2(VAR_2));
 struct rtl_dm *VAR_6 = FUNC_0(FUNC_2(VAR_2));
 struct fast_ant_training *VAR_7 = &VAR_6->fat_table;
 __le32 *VAR_8 = (__le32 *)VAR_3;

 if ((VAR_5->antenna_div_type == VAR_0) ||
     (VAR_5->antenna_div_type == VAR_1)) {
  FUNC_3(VAR_8, VAR_7->antsel_a[VAR_4]);
  FUNC_4(VAR_8, VAR_7->antsel_b[VAR_4]);
  FUNC_5(VAR_8, VAR_7->antsel_c[VAR_4]);
 }
}
