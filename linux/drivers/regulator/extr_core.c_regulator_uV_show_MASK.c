
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct regulator_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct regulator_dev *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 FUNC_2(VAR_3);
 VAR_4 = FUNC_1(VAR_3);
 FUNC_3(VAR_3);

 if (VAR_4 < 0)
  return VAR_4;
 return FUNC_4(VAR_2, "%d\n", VAR_4);
}
