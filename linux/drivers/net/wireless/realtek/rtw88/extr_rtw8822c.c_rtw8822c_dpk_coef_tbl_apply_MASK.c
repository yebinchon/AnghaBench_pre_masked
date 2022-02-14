
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct rtw_dpk_info {int ** coef; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*) ;
 int * VAR_1 ;
 int FUNC_1 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_2, u8 VAR_3)
{
 struct rtw_dpk_info *VAR_4 = &VAR_2->dm_info.dpk_info;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 20; VAR_5++) {
  FUNC_1(VAR_2, VAR_0,
       VAR_1[VAR_5]);
  VAR_4->coef[VAR_3][VAR_5] = FUNC_0(VAR_2);
 }
}
