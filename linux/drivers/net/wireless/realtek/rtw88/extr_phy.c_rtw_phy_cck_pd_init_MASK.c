
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_dm_info {int cck_fa_avg; scalar_t__** cck_pd_lv; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0(struct rtw_dev *VAR_3)
{
 struct rtw_dm_info *VAR_4 = &VAR_3->dm_info;
 u8 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
   VAR_4->cck_pd_lv[VAR_5][VAR_6] = 0;
 }

 VAR_4->cck_fa_avg = VAR_0;
}
