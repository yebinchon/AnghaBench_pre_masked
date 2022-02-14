
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_efuse {size_t** txpwrlevel_cck; int** txpwr_ht20diff; size_t** txpwrlevel_ht40_1s; int** txpwr_legacyhtdiff; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rtl_efuse *VAR_1, u8 VAR_2,
     u8 *VAR_3, u8 *VAR_4,
     u8 *VAR_5, u8 *VAR_6)
{
 VAR_3[VAR_0] =
     VAR_1->txpwrlevel_cck[VAR_0][VAR_2];

 if (VAR_1->txpwr_ht20diff[VAR_0][VAR_2] > 0x0f)
  VAR_5[VAR_0] =
    VAR_1->txpwrlevel_ht40_1s[VAR_0][VAR_2] -
    (~(VAR_1->txpwr_ht20diff[VAR_0][VAR_2]) + 1);
 else
  VAR_5[VAR_0] =
    VAR_1->txpwrlevel_ht40_1s[VAR_0][VAR_2] +
    VAR_1->txpwr_ht20diff[VAR_0][VAR_2];
 if (VAR_1->txpwr_legacyhtdiff[VAR_0][VAR_2] > 0xf)
  VAR_4[VAR_0] =
    VAR_1->txpwrlevel_ht40_1s[VAR_0][VAR_2] -
    (~(VAR_1->txpwr_legacyhtdiff[VAR_0][VAR_2])+1);
 else
  VAR_4[VAR_0] =
  VAR_1->txpwrlevel_ht40_1s[VAR_0][VAR_2] +
    VAR_1->txpwr_legacyhtdiff[VAR_0][VAR_2];
 VAR_6[VAR_0] =
   VAR_1->txpwrlevel_ht40_1s[VAR_0][VAR_2];
}
