
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {struct device* claim; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (char*,char*,char*) ;
 struct nd_namespace_common* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nd_namespace_common *VAR_3 = FUNC_7(VAR_0);
 struct device *VAR_4;
 char *VAR_5;
 ssize_t VAR_6;

 FUNC_3(VAR_0);
 VAR_4 = VAR_3->claim;
 if (VAR_4 && FUNC_0(VAR_4))
  VAR_5 = "safe";
 else if (VAR_4 && FUNC_2(VAR_4))
  VAR_5 = "memory";
 else if (VAR_4 && FUNC_1(VAR_4))
  VAR_5 = "dax";
 else if (!VAR_4 && FUNC_5(VAR_0))
  VAR_5 = "memory";
 else
  VAR_5 = "raw";
 VAR_6 = FUNC_6(VAR_2, "%s\n", VAR_5);
 FUNC_4(VAR_0);

 return VAR_6;
}
