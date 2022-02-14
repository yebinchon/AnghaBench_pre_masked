
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_efuse {int crystal_cap; int pa_type_2g; int pa_type_5g; int lna_type_2g; int lna_type_5g; int channel_plan; int rf_board_option; int bt_setting; int share_ant; int regd; int btcoex; int ext_pa_2g; int ext_lna_2g; int ext_pa_5g; } ;
struct rtw_dev {int mutex; struct rtw_efuse efuse; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*) ;
 int FUNC_6 (struct rtw_dev*) ;
 int FUNC_7 (struct rtw_dev*) ;

__attribute__((used)) static int FUNC_8(struct rtw_dev *VAR_0)
{
 struct rtw_efuse *VAR_1 = &VAR_0->efuse;
 int VAR_2;

 FUNC_1(&VAR_0->mutex);


 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  goto out;

 if (VAR_1->crystal_cap == 0xff)
  VAR_1->crystal_cap = 0;
 if (VAR_1->pa_type_2g == 0xff)
  VAR_1->pa_type_2g = 0;
 if (VAR_1->pa_type_5g == 0xff)
  VAR_1->pa_type_5g = 0;
 if (VAR_1->lna_type_2g == 0xff)
  VAR_1->lna_type_2g = 0;
 if (VAR_1->lna_type_5g == 0xff)
  VAR_1->lna_type_5g = 0;
 if (VAR_1->channel_plan == 0xff)
  VAR_1->channel_plan = 0x7f;
 if (VAR_1->rf_board_option == 0xff)
  VAR_1->rf_board_option = 0;
 if (VAR_1->bt_setting & FUNC_0(0))
  VAR_1->share_ant = 1;
 if (VAR_1->regd == 0xff)
  VAR_1->regd = 0;

 VAR_1->btcoex = (VAR_1->rf_board_option & 0xe0) == 0x20;
 VAR_1->ext_pa_2g = VAR_1->pa_type_2g & FUNC_0(4) ? 1 : 0;
 VAR_1->ext_lna_2g = VAR_1->lna_type_2g & FUNC_0(3) ? 1 : 0;
 VAR_1->ext_pa_5g = VAR_1->pa_type_5g & FUNC_0(0) ? 1 : 0;
 VAR_1->ext_lna_2g = VAR_1->lna_type_5g & FUNC_0(3) ? 1 : 0;

 FUNC_4(VAR_0);

out:
 FUNC_2(&VAR_0->mutex);
 return VAR_2;
}
