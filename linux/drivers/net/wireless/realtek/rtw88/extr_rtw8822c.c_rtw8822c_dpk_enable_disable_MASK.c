
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtw_dpk_info {int is_dpk_pwr_on; int * dpk_gs; int dpk_path_ok; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct rtw_dev*,int ,int,int) ;
 int FUNC_2 (struct rtw_dev*,int ,int ) ;
 scalar_t__ FUNC_3 (size_t,int ) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_9)
{
 struct rtw_dpk_info *VAR_10 = &VAR_9->dm_info.dpk_info;
 u32 VAR_11 = FUNC_0(15) | FUNC_0(14);

 FUNC_1(VAR_9, VAR_6, VAR_1, 0xc);

 FUNC_1(VAR_9, VAR_4, VAR_0,
    VAR_10->is_dpk_pwr_on);
 FUNC_1(VAR_9, VAR_5, VAR_0,
    VAR_10->is_dpk_pwr_on);

 if (FUNC_3(VAR_7, VAR_10->dpk_path_ok)) {
  FUNC_1(VAR_9, VAR_4, VAR_11, 0x0);
  FUNC_2(VAR_9, VAR_2, VAR_10->dpk_gs[VAR_7]);
 }
 if (FUNC_3(VAR_8, VAR_10->dpk_path_ok)) {
  FUNC_1(VAR_9, VAR_5, VAR_11, 0x0);
  FUNC_2(VAR_9, VAR_3, VAR_10->dpk_gs[VAR_8]);
 }
}
