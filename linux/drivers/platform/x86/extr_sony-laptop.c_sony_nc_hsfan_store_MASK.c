
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_1 (int,unsigned long,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
  struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7;

 if (VAR_5 > 31)
  return -VAR_0;

 if (FUNC_0(VAR_4, 10, &VAR_7) || VAR_7 > 1)
  return -VAR_0;

 if (FUNC_1(0x0149, VAR_7 << 0x10 | 0x0200, &VAR_6))
  return -VAR_1;

 return VAR_5;
}
