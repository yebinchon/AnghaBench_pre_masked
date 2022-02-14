
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* coex_set_gnt_fix ) (struct rtw_dev*) ;} ;


 int FUNC_0 (struct rtw_dev*) ;

__attribute__((used)) static inline void FUNC_1(struct rtw_dev *VAR_0)
{
 struct rtw_chip_info *VAR_1 = VAR_0->chip;

 VAR_1->ops->coex_set_gnt_fix(VAR_0);
}
