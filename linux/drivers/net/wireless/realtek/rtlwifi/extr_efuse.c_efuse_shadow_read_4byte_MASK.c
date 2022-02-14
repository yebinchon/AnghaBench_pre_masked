
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct rtl_efuse {int** efuse_map; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 struct rtl_efuse* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1,
        u16 VAR_2, u32 *VAR_3)
{
 struct rtl_efuse *VAR_4 = FUNC_0(FUNC_1(VAR_1));

 *VAR_3 = VAR_4->efuse_map[VAR_0][VAR_2];
 *VAR_3 |= VAR_4->efuse_map[VAR_0][VAR_2 + 1] << 8;
 *VAR_3 |= VAR_4->efuse_map[VAR_0][VAR_2 + 2] << 16;
 *VAR_3 |= VAR_4->efuse_map[VAR_0][VAR_2 + 3] << 24;
}
