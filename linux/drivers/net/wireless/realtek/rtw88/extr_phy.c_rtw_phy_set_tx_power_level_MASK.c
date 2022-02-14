
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rtw_hal {scalar_t__ rf_path_num; int tx_power_mutex; } ;
struct rtw_dev {struct rtw_hal hal; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_tx_power_index ) (struct rtw_dev*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtw_dev*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct rtw_dev*) ;

void FUNC_4(struct rtw_dev *VAR_0, u8 VAR_1)
{
 struct rtw_chip_info *VAR_2 = VAR_0->chip;
 struct rtw_hal *VAR_3 = &VAR_0->hal;
 u8 VAR_4;

 FUNC_0(&VAR_3->tx_power_mutex);

 for (VAR_4 = 0; VAR_4 < VAR_3->rf_path_num; VAR_4++)
  FUNC_2(VAR_0, VAR_1, VAR_4);

 VAR_2->ops->set_tx_power_index(VAR_0);
 FUNC_1(&VAR_3->tx_power_mutex);
}
