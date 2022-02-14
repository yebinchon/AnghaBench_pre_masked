
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtw_dm_info {size_t** cck_pd_lv; int cck_fa_avg; } ;
struct rtw_dev {struct rtw_dm_info dm_info; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int,int,size_t,size_t) ;
 scalar_t__ FUNC_1 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_1, u8 VAR_2)
{
 struct rtw_dm_info *VAR_3 = &VAR_1->dm_info;
 s8 VAR_4[4] = {2, 4, 6, 8};
 s8 VAR_5[4] = {2, 2, 2, 4};
 u8 VAR_6;
 u8 VAR_7, VAR_8;

 VAR_7 = (u8)FUNC_1(VAR_1, 0x1a2c, 0x60000);
 VAR_8 = (u8)FUNC_1(VAR_1, 0x9b0, 0xc);

 if (VAR_3->cck_pd_lv[VAR_8][VAR_7] == VAR_2)
  return;

 VAR_6 = VAR_3->cck_pd_lv[VAR_8][VAR_7];


 VAR_3->cck_fa_avg = VAR_0;

 FUNC_0(VAR_1,
        VAR_4[VAR_2] - VAR_4[VAR_6],
        VAR_5[VAR_2] - VAR_5[VAR_6],
        VAR_8, VAR_7);
 VAR_3->cck_pd_lv[VAR_8][VAR_7] = VAR_2;
}
