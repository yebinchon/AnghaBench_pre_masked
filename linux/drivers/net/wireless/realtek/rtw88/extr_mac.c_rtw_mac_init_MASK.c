
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_dev {struct rtw_chip_info* chip; } ;
struct rtw_chip_info {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* mac_init ) (struct rtw_dev*) ;} ;


 int FUNC_0 (struct rtw_dev*) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*) ;

int FUNC_3(struct rtw_dev *VAR_0)
{
 struct rtw_chip_info *VAR_1 = VAR_0->chip;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = VAR_1->ops->mac_init(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 return 0;
}
