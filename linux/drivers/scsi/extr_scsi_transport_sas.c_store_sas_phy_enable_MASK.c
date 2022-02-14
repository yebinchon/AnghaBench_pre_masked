
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,size_t,int) ;

__attribute__((used)) static ssize_t
FUNC_1(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 if (VAR_4 < 1)
  return -VAR_0;

 switch (VAR_3[0]) {
 case '0':
  FUNC_0(VAR_1, VAR_4, 0);
  break;
 case '1':
  FUNC_0(VAR_1, VAR_4, 1);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4;
}
