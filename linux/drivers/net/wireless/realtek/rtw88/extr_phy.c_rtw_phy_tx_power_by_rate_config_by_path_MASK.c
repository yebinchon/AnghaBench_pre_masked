
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_hal {void*** tx_pwr_by_rate_offset_5g; void*** tx_pwr_by_rate_offset_2g; void*** tx_pwr_by_rate_base_5g; void*** tx_pwr_by_rate_base_2g; } ;
typedef void* s8 ;


 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct rtw_hal *VAR_1, u8 VAR_2,
     u8 VAR_3, u8 VAR_4, u8 *VAR_5)
{
 u8 VAR_6;
 u8 VAR_7, VAR_8;
 s8 VAR_9, VAR_10;

 if (VAR_3 >= VAR_0)
  VAR_7 = VAR_5[VAR_4 - 3];
 else
  VAR_7 = VAR_5[VAR_4 - 1];
 VAR_9 = VAR_1->tx_pwr_by_rate_offset_2g[VAR_2][VAR_7];
 VAR_10 = VAR_1->tx_pwr_by_rate_offset_5g[VAR_2][VAR_7];
 VAR_1->tx_pwr_by_rate_base_2g[VAR_2][VAR_3] = VAR_9;
 VAR_1->tx_pwr_by_rate_base_5g[VAR_2][VAR_3] = VAR_10;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_8 = VAR_5[VAR_6];
  VAR_1->tx_pwr_by_rate_offset_2g[VAR_2][VAR_8] -= VAR_9;
  VAR_1->tx_pwr_by_rate_offset_5g[VAR_2][VAR_8] -= VAR_10;
 }
}
