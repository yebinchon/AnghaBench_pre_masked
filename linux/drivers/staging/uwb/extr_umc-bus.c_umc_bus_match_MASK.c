
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umc_driver {scalar_t__ cap_id; int (* match ) (struct umc_driver*,struct umc_dev*) ;} ;
struct umc_dev {scalar_t__ cap_id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct umc_driver*,struct umc_dev*) ;
 struct umc_dev* FUNC_1 (struct device*) ;
 struct umc_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct umc_dev *VAR_2 = FUNC_1(VAR_0);
 struct umc_driver *VAR_3 = FUNC_2(VAR_1);

 if (VAR_2->cap_id == VAR_3->cap_id) {
  if (VAR_3->match)
   return VAR_3->match(VAR_3, VAR_2);
  else
   return 1;
 }
 return 0;
}
