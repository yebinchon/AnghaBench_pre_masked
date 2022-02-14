
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct rtw_hal {size_t rf_path_num; } ;
struct rtw_dev {struct rtw_hal hal; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* dig; } ;
struct TYPE_2__ {int mask; int addr; } ;


 int FUNC_0 (struct rtw_dev*,int ,int ,size_t) ;

void FUNC_1(struct rtw_dev *VAR_0, u8 VAR_1)
{
 struct rtw_chip_info *VAR_2 = VAR_0->chip;
 struct rtw_hal *VAR_3 = &VAR_0->hal;
 u32 VAR_4, VAR_5;
 u8 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->rf_path_num; VAR_6++) {
  VAR_4 = VAR_2->dig[VAR_6].addr;
  VAR_5 = VAR_2->dig[VAR_6].mask;
  FUNC_0(VAR_0, VAR_4, VAR_5, VAR_1);
 }
}
