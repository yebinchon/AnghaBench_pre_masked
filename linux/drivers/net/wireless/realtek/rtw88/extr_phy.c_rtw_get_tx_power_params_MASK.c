
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_txpwr_idx {int pwr_idx_5g; int pwr_idx_2g; } ;
struct rtw_power_params {size_t pwr_base; int pwr_limit; int pwr_offset; } ;
struct rtw_hal {int ** tx_pwr_by_rate_offset_5g; int ** tx_pwr_by_rate_offset_2g; } ;
struct TYPE_2__ {struct rtw_txpwr_idx* txpwr_idx_table; } ;
struct rtw_dev {TYPE_1__ efuse; struct rtw_hal hal; } ;
typedef int s8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (struct rtw_dev*,int *,size_t,size_t,size_t) ;
 size_t FUNC_2 (struct rtw_dev*,int *,size_t,size_t,size_t) ;
 int FUNC_3 (struct rtw_dev*,size_t,size_t,size_t,size_t,size_t,size_t) ;

void FUNC_4(struct rtw_dev *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5,
        u8 VAR_6, u8 VAR_7, struct rtw_power_params *VAR_8)
{
 struct rtw_hal *VAR_9 = &VAR_2->hal;
 struct rtw_txpwr_idx *VAR_10;
 u8 VAR_11, VAR_12;
 u8 *VAR_13 = &VAR_8->pwr_base;
 s8 *VAR_14 = &VAR_8->pwr_offset;
 s8 *VAR_15 = &VAR_8->pwr_limit;

 VAR_10 = &VAR_2->efuse.txpwr_idx_table[VAR_3];
 VAR_11 = FUNC_0(VAR_6);


 if (VAR_6 <= 14) {
  VAR_12 = VAR_0;
  *VAR_13 = FUNC_1(VAR_2,
            &VAR_10->pwr_idx_2g,
            VAR_5, VAR_4, VAR_11);
  *VAR_14 = VAR_9->tx_pwr_by_rate_offset_2g[VAR_3][VAR_4];
 } else {
  VAR_12 = VAR_1;
  *VAR_13 = FUNC_2(VAR_2,
            &VAR_10->pwr_idx_5g,
            VAR_5, VAR_4, VAR_11);
  *VAR_14 = VAR_9->tx_pwr_by_rate_offset_5g[VAR_3][VAR_4];
 }

 *VAR_15 = FUNC_3(VAR_2, VAR_12, VAR_5, VAR_3,
         VAR_4, VAR_6, VAR_7);
}
