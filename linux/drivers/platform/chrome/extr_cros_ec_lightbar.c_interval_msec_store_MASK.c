
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned long*) ;
 unsigned long VAR_2 ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7;

 if (FUNC_0(VAR_5, 0, &VAR_7))
  return -VAR_0;

 VAR_2 = VAR_7 * VAR_1 / 1000;

 return VAR_6;
}
