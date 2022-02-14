
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_coex {scalar_t__ stop_dm; } ;
struct rtw_dev {struct rtw_coex coex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rtw_dev*,int ) ;
 int FUNC_1 (struct rtw_dev*,int ) ;

void FUNC_2(struct rtw_dev *VAR_5, u8 VAR_6)
{
 struct rtw_coex *VAR_7 = &VAR_5->coex;

 if (VAR_7->stop_dm)
  return;

 if (VAR_6 == VAR_4)
  FUNC_0(VAR_5, VAR_1);
 else if (VAR_6 == VAR_3)
  FUNC_0(VAR_5, VAR_0);
 else
  FUNC_1(VAR_5, VAR_2);
}
