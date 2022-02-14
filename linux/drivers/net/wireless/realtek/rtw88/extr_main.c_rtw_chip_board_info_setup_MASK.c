
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_rfe_def {int txpwr_lmt_tbl; int phy_pg_tbl; } ;
struct rtw_hal {int dummy; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 int VAR_0 ;
 struct rtw_rfe_def* FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*,int ) ;
 int FUNC_4 (struct rtw_hal*) ;
 int FUNC_5 (struct rtw_hal*) ;

__attribute__((used)) static int FUNC_6(struct rtw_dev *VAR_1)
{
 struct rtw_hal *VAR_2 = &VAR_1->hal;
 const struct rtw_rfe_def *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3)
  return -VAR_0;

 FUNC_3(VAR_1, 0);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1, VAR_3->phy_pg_tbl);
 FUNC_1(VAR_1, VAR_3->txpwr_lmt_tbl);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 return 0;
}
