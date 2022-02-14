
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
 unsigned long VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_3, 21, &VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5);
 return (VAR_6) ? VAR_6 : VAR_4;
}
