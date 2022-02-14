
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtw_coex_stat {int score_board; } ;
struct rtw_coex {struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int new_scbd10_def; int scbd_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtw_dev*,int ,int) ;

void FUNC_1(struct rtw_dev *VAR_3, u16 VAR_4, bool VAR_5)
{
 struct rtw_chip_info *VAR_6 = VAR_3->chip;
 struct rtw_coex *VAR_7 = &VAR_3->coex;
 struct rtw_coex_stat *VAR_8 = &VAR_7->stat;
 u16 VAR_9 = 0x2;

 if (!VAR_6->scbd_support)
  return;

 VAR_9 |= VAR_8->score_board;




 if (!VAR_6->new_scbd10_def && (VAR_4 & VAR_1)) {
  if (VAR_5)
   VAR_9 &= ~VAR_1;
  else
   VAR_9 |= VAR_1;
 } else {
  if (VAR_5)
   VAR_9 |= VAR_4;
  else
   VAR_9 &= ~VAR_4;
 }

 if (VAR_9 != VAR_8->score_board) {
  VAR_8->score_board = VAR_9;
  VAR_9 |= VAR_0;
  FUNC_0(VAR_3, VAR_2, VAR_9);
 }
}
