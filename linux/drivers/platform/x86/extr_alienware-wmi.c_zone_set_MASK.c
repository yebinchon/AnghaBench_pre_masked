
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_zone {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct platform_zone*) ;
 struct platform_zone* FUNC_1 (struct device_attribute*) ;
 int FUNC_2 (char const*,struct platform_zone*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct platform_zone *VAR_4;
 int VAR_5;
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 == ((void*)0)) {
  FUNC_3("alienware-wmi: invalid target zone\n");
  return 1;
 }
 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_0(VAR_4);
 return VAR_5 ? VAR_5 : VAR_3;
}
