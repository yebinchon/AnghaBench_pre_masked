
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_hal {void***** tx_pwr_limit_5g; void***** tx_pwr_limit_2g; } ;
struct rtw_dev {TYPE_1__* chip; struct rtw_hal hal; } ;
typedef void* s8 ;
struct TYPE_2__ {int max_power_index; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rtw_dev *VAR_2,
     u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct rtw_hal *VAR_6 = &VAR_2->hal;
 s8 VAR_7 = (s8)VAR_2->chip->max_power_index;
 u8 VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_6->tx_pwr_limit_2g[VAR_3][VAR_4][VAR_5][VAR_8] = VAR_7;


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6->tx_pwr_limit_5g[VAR_3][VAR_4][VAR_5][VAR_8] = VAR_7;
}
