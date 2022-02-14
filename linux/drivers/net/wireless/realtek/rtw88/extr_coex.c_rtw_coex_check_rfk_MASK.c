
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtw_coex_rfe {scalar_t__ wlg_at_btg; } ;
struct rtw_coex_stat {int bt_iqk_state; } ;
struct rtw_coex {struct rtw_coex_rfe rfe; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {scalar_t__ scbd_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct rtw_dev *VAR_5)
{
 struct rtw_chip_info *VAR_6 = VAR_5->chip;
 struct rtw_coex *VAR_7 = &VAR_5->coex;
 struct rtw_coex_stat *VAR_8 = &VAR_7->stat;
 struct rtw_coex_rfe *VAR_9 = &VAR_7->rfe;
 u8 VAR_10 = 0;
 u32 VAR_11;
 bool VAR_12, VAR_13;

 if (VAR_9->wlg_at_btg && VAR_6->scbd_support &&
     VAR_8->bt_iqk_state != 0xff) {
  VAR_11 = VAR_2 / VAR_1;
  do {

   VAR_12 = !!(FUNC_1(VAR_5) & VAR_3);


   VAR_13 = !!(FUNC_2(VAR_5, VAR_4) & VAR_0);

   if (!VAR_12 && !VAR_13)
    break;

   FUNC_0(VAR_1);
  } while (++VAR_10 < VAR_11);

  if (VAR_10 >= VAR_11)
   VAR_8->bt_iqk_state = 0xff;
 }
}
