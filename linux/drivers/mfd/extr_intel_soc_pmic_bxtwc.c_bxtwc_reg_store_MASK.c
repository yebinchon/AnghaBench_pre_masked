
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (char const*,int ,int *) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 if (FUNC_1(VAR_4, 0, &VAR_1)) {
  FUNC_0(VAR_2, "Invalid register address\n");
  return -VAR_0;
 }
 return (ssize_t)VAR_5;
}
