
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_rfe_def {int txpwr_lmt_tbl; int phy_pg_tbl; } ;
struct TYPE_2__ {int rfe_option; } ;
struct rtw_dev {TYPE_1__ efuse; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,char*,int ) ;
 struct rtw_rfe_def* FUNC_1 (struct rtw_dev*) ;

__attribute__((used)) static inline int FUNC_2(struct rtw_dev *VAR_1)
{
 const struct rtw_rfe_def *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2 || !VAR_2->phy_pg_tbl || !VAR_2->txpwr_lmt_tbl) {
  FUNC_0(VAR_1, "rfe %d isn't supported\n",
   VAR_1->efuse.rfe_option);
  return -VAR_0;
 }

 return 0;
}
