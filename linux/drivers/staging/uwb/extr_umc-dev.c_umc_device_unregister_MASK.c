
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umc_dev {int resource; int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct device* FUNC_1 (int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct umc_dev *VAR_0)
{
 struct device *VAR_1;
 if (!VAR_0)
  return;
 VAR_1 = FUNC_1(&VAR_0->dev);
 FUNC_0(&VAR_0->dev);
 FUNC_3(&VAR_0->resource);
 FUNC_2(VAR_1);
}
