
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6;

 if (VAR_4 > 31)
  return -VAR_0;

 if (FUNC_1(VAR_3, 10, &VAR_6))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4;
}
