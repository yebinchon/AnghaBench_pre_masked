
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtw_dm_info {scalar_t__ cck_fa_avg; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct rtw_dev *VAR_3)
{
 struct rtw_dm_info *VAR_4 = &VAR_3->dm_info;
 u32 VAR_5 = VAR_4->cck_fa_avg;

 if (VAR_5 > VAR_1)
  return 1;

 if (VAR_5 < VAR_0)
  return 0;

 return VAR_2;
}
