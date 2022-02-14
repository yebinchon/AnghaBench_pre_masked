
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {TYPE_2__* desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_bypass ) (struct regulator_dev*,int*) ;} ;


 struct regulator_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char const*) ;
 int FUNC_2 (struct regulator_dev*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct regulator_dev *VAR_3 = FUNC_0(VAR_0);
 const char *VAR_4;
 bool VAR_5;
 int VAR_6;

 VAR_6 = VAR_3->desc->ops->get_bypass(VAR_3, &VAR_5);

 if (VAR_6 != 0)
  VAR_4 = "unknown";
 else if (VAR_5)
  VAR_4 = "enabled";
 else
  VAR_4 = "disabled";

 return FUNC_1(VAR_2, "%s\n", VAR_4);
}
