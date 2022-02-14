
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct w1_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (struct w1_slave*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct w1_slave *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;


 if (VAR_4 < 3 || VAR_4 > 4 || !VAR_3)
  return -VAR_0;
 if (VAR_4 == 4 && VAR_3[3] != '\n')
  return -VAR_0;
 if (VAR_3[1] != '0' || VAR_3[2] != '0')
  return -VAR_0;


 switch (VAR_3[0]) {
 case '1':
  VAR_6 = FUNC_1(VAR_5, 0);
  break;
 case '4':
  VAR_6 = FUNC_1(VAR_5, 1);
  break;
 case '9':
  VAR_6 = FUNC_1(VAR_5, 2);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6 < 0)
  return VAR_6;


 return VAR_4;
}
