
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_dpk_info {int is_dpk_pwr_on; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int rfk_init_tbl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_0)
{
 struct rtw_chip_info *VAR_1 = VAR_0->chip;
 struct rtw_dpk_info *VAR_2 = &VAR_0->dm_info.dpk_info;

 if (!VAR_1->rfk_init_tbl)
  return;

 FUNC_2(VAR_0, 0x1e24, FUNC_0(17), 0x1);
 FUNC_2(VAR_0, 0x1cd0, FUNC_0(28), 0x1);
 FUNC_2(VAR_0, 0x1cd0, FUNC_0(29), 0x1);
 FUNC_2(VAR_0, 0x1cd0, FUNC_0(30), 0x1);
 FUNC_2(VAR_0, 0x1cd0, FUNC_0(31), 0x0);

 FUNC_1(VAR_0, VAR_1->rfk_init_tbl);

 VAR_2->is_dpk_pwr_on = 1;
}
