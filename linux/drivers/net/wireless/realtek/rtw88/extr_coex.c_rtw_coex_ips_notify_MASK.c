
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_coex_stat {int wl_under_ips; } ;
struct rtw_coex {scalar_t__ stop_dm; struct rtw_coex_stat stat; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtw_dev*,int) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,int,int ) ;
 int FUNC_3 (struct rtw_dev*,int,int) ;

void FUNC_4(struct rtw_dev *VAR_6, u8 VAR_7)
{
 struct rtw_coex *VAR_8 = &VAR_6->coex;
 struct rtw_coex_stat *VAR_9 = &VAR_8->stat;

 if (VAR_8->stop_dm)
  return;

 if (VAR_7 == VAR_0) {
  VAR_9->wl_under_ips = 1;


  FUNC_3(VAR_6, VAR_3, 0);

  FUNC_2(VAR_6, 1, VAR_5);
  FUNC_1(VAR_6);
 } else if (VAR_7 == VAR_1) {
  FUNC_3(VAR_6, VAR_2 | VAR_4, 1);


  FUNC_0(VAR_6, 0);


  VAR_9->wl_under_ips = 0;
 }
}
