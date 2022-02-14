
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_rfe_def {int dummy; } ;
struct rtw_efuse {scalar_t__ rfe_option; } ;
struct rtw_dev {struct rtw_efuse efuse; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {scalar_t__ rfe_defs_size; struct rtw_rfe_def* rfe_defs; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtw_dev*,int ,char*,size_t) ;

__attribute__((used)) static inline const struct rtw_rfe_def *FUNC_1(struct rtw_dev *VAR_1)
{
 struct rtw_chip_info *VAR_2 = VAR_1->chip;
 struct rtw_efuse *VAR_3 = &VAR_1->efuse;
 const struct rtw_rfe_def *VAR_4 = ((void*)0);

 if (VAR_2->rfe_defs_size == 0)
  return ((void*)0);

 if (VAR_3->rfe_option < VAR_2->rfe_defs_size)
  VAR_4 = &VAR_2->rfe_defs[VAR_3->rfe_option];

 FUNC_0(VAR_1, VAR_0, "use rfe_def[%d]\n", VAR_3->rfe_option);
 return VAR_4;
}
