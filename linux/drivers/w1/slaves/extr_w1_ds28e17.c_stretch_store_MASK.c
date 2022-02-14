
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {struct w1_f19_data* family_data; } ;
struct w1_f19_data {char stretch; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct w1_slave* FUNC_0 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct w1_slave *VAR_5 = FUNC_0(VAR_1);
 struct w1_f19_data *VAR_6 = VAR_5->family_data;


 if (VAR_4 < 1 || VAR_4 > 2 || !VAR_3)
  return -VAR_0;
 if (VAR_4 == 2 && VAR_3[1] != '\n')
  return -VAR_0;
 if (VAR_3[0] < '1' || VAR_3[0] > '9')
  return -VAR_0;


 VAR_6->stretch = VAR_3[0] & 0x0F;


 return VAR_4;
}
