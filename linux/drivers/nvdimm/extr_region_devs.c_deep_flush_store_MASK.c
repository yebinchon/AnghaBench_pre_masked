
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct nd_region*,int *) ;
 int FUNC_1 (char const*,int*) ;
 struct nd_region* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 bool VAR_5;
 int VAR_6 = FUNC_1(VAR_3, &VAR_5);
 struct nd_region *VAR_7 = FUNC_2(VAR_1);

 if (VAR_6)
  return VAR_6;
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_7, ((void*)0));
 if (VAR_6)
  return VAR_6;

 return VAR_4;
}
