
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;


 struct regulator_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regulator_dev*,char*) ;
 scalar_t__ FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct regulator_dev *VAR_2 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_2))
  FUNC_1(VAR_2, "unable to resolve supply\n");

 return 0;
}
