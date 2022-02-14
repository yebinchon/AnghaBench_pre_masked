
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_efuse {scalar_t__ share_ant; } ;
struct rtw_coex_stat {scalar_t__ gnt_workaround_state; scalar_t__ wl_coex_mode; int kt_ver; } ;
struct rtw_coex {scalar_t__ under_5g; scalar_t__ freerun; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_coex coex; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtw_dev*,int,int,int) ;
 int FUNC_2 (struct rtw_dev*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_2)
{
 struct rtw_coex *VAR_3 = &VAR_2->coex;
 struct rtw_coex_stat *VAR_4 = &VAR_3->stat;
 struct rtw_efuse *VAR_5 = &VAR_2->efuse;
 u32 VAR_6;

 if (VAR_4->gnt_workaround_state == VAR_4->wl_coex_mode)
  return;

 VAR_4->gnt_workaround_state = VAR_4->wl_coex_mode;

 if ((VAR_4->kt_ver == 0 && VAR_3->under_5g) || VAR_3->freerun)
  VAR_6 = 0x40021;
 else
  VAR_6 = 0x40000;


 if (VAR_5->share_ant)
  VAR_6 |= FUNC_0(13);

 FUNC_2(VAR_2, VAR_1, 0x1, 0xfffff, VAR_6);
 FUNC_1(VAR_2, 0x1c32, FUNC_0(6), 1);
 FUNC_1(VAR_2, 0x1c39, FUNC_0(4), 0);
 FUNC_1(VAR_2, 0x1c3b, FUNC_0(4), 1);
 FUNC_1(VAR_2, 0x4160, FUNC_0(3), 1);




 if (VAR_4->wl_coex_mode == VAR_0 ||
     VAR_3->under_5g || !VAR_5->share_ant) {
  if (VAR_4->kt_ver >= 3) {
   FUNC_1(VAR_2, 0x1860, FUNC_0(3), 0);
   FUNC_1(VAR_2, 0x1ca7, FUNC_0(3), 1);
  } else {
   FUNC_1(VAR_2, 0x1860, FUNC_0(3), 1);
  }
 } else {

  FUNC_1(VAR_2, 0x1860, FUNC_0(3), 0);
  if (VAR_4->kt_ver >= 3)
   FUNC_1(VAR_2, 0x1ca7, FUNC_0(3), 0);
 }
}
