
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1,
           unsigned int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_3 == 0)
  return FUNC_2(VAR_1, VAR_2);

 FUNC_0(&VAR_1->dev,
  "LED voltage change not allowed when led is enabled\n");

 return -VAR_0;
}
