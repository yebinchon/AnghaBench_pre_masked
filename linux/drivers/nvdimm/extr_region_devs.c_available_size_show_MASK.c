
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 unsigned long long FUNC_2 (struct nd_region*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (char*,char*,unsigned long long) ;
 struct nd_region* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct nd_region *VAR_3 = FUNC_6(VAR_0);
 unsigned long long VAR_4 = 0;







 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
 FUNC_7(VAR_0);
 VAR_4 = FUNC_2(VAR_3);
 FUNC_4(VAR_0);
 FUNC_1(VAR_0);

 return FUNC_5(VAR_2, "%llu\n", VAR_4);
}
