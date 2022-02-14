
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtw_coex_dm {int cur_wl_pwr_lvl; } ;
struct rtw_coex {struct rtw_coex_dm dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct rtw_dev*,int const,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_0, u8 VAR_1)
{
 struct rtw_coex *VAR_2 = &VAR_0->coex;
 struct rtw_coex_dm *VAR_3 = &VAR_2->dm;
 static const u16 VAR_4[] = {0xc58, 0xe58};
 static const u8 VAR_5[] = {0xd8, 0xd4, 0xd0, 0xcc, 0xc8};
 u8 VAR_6, VAR_7;

 if (VAR_1 == VAR_3->cur_wl_pwr_lvl)
  return;

 VAR_3->cur_wl_pwr_lvl = VAR_1;

 if (VAR_3->cur_wl_pwr_lvl >= FUNC_0(VAR_5))
  VAR_3->cur_wl_pwr_lvl = FUNC_0(VAR_5) - 1;

 VAR_7 = VAR_5[VAR_3->cur_wl_pwr_lvl];

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++)
  FUNC_1(VAR_0, VAR_4[VAR_6], 0xff, VAR_7);
}
