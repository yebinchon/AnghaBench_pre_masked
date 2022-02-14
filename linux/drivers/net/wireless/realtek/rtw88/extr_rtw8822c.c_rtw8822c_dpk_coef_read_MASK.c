
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtw_dpk_info {int ** coef; } ;
struct TYPE_2__ {struct rtw_dpk_info dpk_info; } ;
struct rtw_dev {TYPE_1__ dm_info; } ;


 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int ,int ) ;

__attribute__((used)) static u8 FUNC_2(struct rtw_dev *VAR_0, u8 VAR_1)
{
 struct rtw_dpk_info *VAR_2 = &VAR_0->dm_info.dpk_info;
 u8 VAR_3, VAR_4 = 1;
 u16 VAR_5, VAR_6;

 for (VAR_3 = 0; VAR_3 < 20; VAR_3++) {
  VAR_5 = FUNC_0(0x1fff0000, VAR_2->coef[VAR_1][VAR_3]);
  VAR_6 = FUNC_0(0x1fff, VAR_2->coef[VAR_1][VAR_3]);

  if (FUNC_1(VAR_0, VAR_5, VAR_6)) {
   VAR_4 = 0;
   break;
  }
 }
 return VAR_4;
}
