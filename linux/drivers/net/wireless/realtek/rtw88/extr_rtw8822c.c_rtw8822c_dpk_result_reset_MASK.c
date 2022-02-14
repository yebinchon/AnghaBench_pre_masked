
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtw_dpk_info {int* dpk_gs; int * thermal_dpk; scalar_t__* pre_pwsf; scalar_t__* result; scalar_t__* dpk_txagc; int dpk_path_ok; } ;
struct TYPE_4__ {int rf_path_num; } ;
struct TYPE_3__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_2__ hal; TYPE_1__ dm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct rtw_dev*,int) ;
 int FUNC_2 (struct rtw_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_2)
{
 struct rtw_dpk_info *VAR_3 = &VAR_2->dm_info.dpk_info;
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->hal.rf_path_num; VAR_4++) {
  FUNC_0(VAR_4, VAR_3->dpk_path_ok);
  FUNC_2(VAR_2, VAR_1, VAR_0,
     0x8 | (VAR_4 << 1));
  FUNC_2(VAR_2, 0x1b58, 0x0000007f, 0x0);

  VAR_3->dpk_txagc[VAR_4] = 0;
  VAR_3->result[VAR_4] = 0;
  VAR_3->dpk_gs[VAR_4] = 0x5b;
  VAR_3->pre_pwsf[VAR_4] = 0;
  VAR_3->thermal_dpk[VAR_4] = FUNC_1(VAR_2,
         VAR_4);
 }
}
