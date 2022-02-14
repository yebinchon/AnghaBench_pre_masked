
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_hal {scalar_t__**** tx_pwr_limit_5g; } ;
struct rtw_dev {TYPE_1__* chip; struct rtw_hal hal; } ;
typedef scalar_t__ s8 ;
struct TYPE_2__ {size_t max_power_index; } ;



__attribute__((used)) static void
FUNC_0(struct rtw_dev *VAR_0, u8 VAR_1,
        u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct rtw_hal *VAR_6 = &VAR_0->hal;
 u8 VAR_7 = VAR_0->chip->max_power_index;
 s8 VAR_8 = VAR_6->tx_pwr_limit_5g[VAR_1][VAR_2][VAR_4][VAR_3];
 s8 VAR_9 = VAR_6->tx_pwr_limit_5g[VAR_1][VAR_2][VAR_5][VAR_3];

 if (VAR_8 == VAR_9)
  return;

 if (VAR_8 == VAR_7)
  VAR_6->tx_pwr_limit_5g[VAR_1][VAR_2][VAR_4][VAR_3] = VAR_9;

 else if (VAR_9 == VAR_7)
  VAR_6->tx_pwr_limit_5g[VAR_1][VAR_2][VAR_5][VAR_3] = VAR_8;
}
