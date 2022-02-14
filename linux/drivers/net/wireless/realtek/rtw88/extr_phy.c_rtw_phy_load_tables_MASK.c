
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_table {int dummy; } ;
struct TYPE_2__ {size_t rf_path_num; } ;
struct rtw_dev {TYPE_1__ hal; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {struct rtw_table** rf_tbl; struct rtw_table const* agc_tbl; struct rtw_table const* bb_tbl; struct rtw_table const* mac_tbl; } ;


 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,struct rtw_table const*) ;

void FUNC_2(struct rtw_dev *VAR_0)
{
 struct rtw_chip_info *VAR_1 = VAR_0->chip;
 u8 VAR_2;

 FUNC_1(VAR_0, VAR_1->mac_tbl);
 FUNC_1(VAR_0, VAR_1->bb_tbl);
 FUNC_1(VAR_0, VAR_1->agc_tbl);
 FUNC_0(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_0->hal.rf_path_num; VAR_2++) {
  const struct rtw_table *VAR_3;

  VAR_3 = VAR_1->rf_tbl[VAR_2];
  FUNC_1(VAR_0, VAR_3);
 }
}
