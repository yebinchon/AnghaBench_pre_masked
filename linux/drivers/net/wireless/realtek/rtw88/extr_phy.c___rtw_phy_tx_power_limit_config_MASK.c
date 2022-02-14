
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_hal {int **** tx_pwr_limit_5g; scalar_t__** tx_pwr_by_rate_base_5g; int **** tx_pwr_limit_2g; scalar_t__** tx_pwr_by_rate_base_2g; } ;
typedef scalar_t__ s8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct rtw_hal *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 s8 VAR_6;
 u8 VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = VAR_2->tx_pwr_by_rate_base_2g[0][VAR_5];
  VAR_2->tx_pwr_limit_2g[VAR_3][VAR_4][VAR_5][VAR_7] -= VAR_6;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = VAR_2->tx_pwr_by_rate_base_5g[0][VAR_5];
  VAR_2->tx_pwr_limit_5g[VAR_3][VAR_4][VAR_5][VAR_7] -= VAR_6;
 }
}
