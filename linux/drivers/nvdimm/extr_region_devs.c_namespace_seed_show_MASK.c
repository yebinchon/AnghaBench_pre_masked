
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {scalar_t__ ns_seed; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,...) ;
 struct nd_region* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nd_region *VAR_3 = FUNC_4(VAR_0);
 ssize_t VAR_4;

 FUNC_1(VAR_0);
 if (VAR_3->ns_seed)
  VAR_4 = FUNC_3(VAR_2, "%s\n", FUNC_0(VAR_3->ns_seed));
 else
  VAR_4 = FUNC_3(VAR_2, "\n");
 FUNC_2(VAR_0);
 return VAR_4;
}
