
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_dpk_info {int gnt_value; int gnt_control; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtw_dev*,int) ;
 int FUNC_2 (struct rtw_dev*,int,int ,int) ;
 int FUNC_3 (struct rtw_dev*,int) ;
 int FUNC_4 (struct rtw_dev*,int,int ) ;
 int FUNC_5 (struct rtw_dev*,int,int ,int) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_2, bool VAR_3)
{
 struct rtw_dpk_info *VAR_4 = &VAR_2->dm_info.dpk_info;

 if (VAR_3) {
  VAR_4->gnt_control = FUNC_3(VAR_2, 0x70);
  VAR_4->gnt_value = FUNC_1(VAR_2, 0x38);
  FUNC_5(VAR_2, 0x70, FUNC_0(26), 0x1);
  FUNC_2(VAR_2, 0x38, VAR_0, 0x77);
 } else {
  FUNC_2(VAR_2, 0x38, VAR_1,
         VAR_4->gnt_value);
  FUNC_4(VAR_2, 0x70, VAR_4->gnt_control);
 }
}
