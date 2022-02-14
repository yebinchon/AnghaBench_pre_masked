
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {struct w1_f19_data* family_data; } ;
struct w1_f19_data {int stretch; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct w1_slave* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct w1_slave *VAR_3 = FUNC_0(VAR_0);
 struct w1_f19_data *VAR_4 = VAR_3->family_data;


 return FUNC_1(VAR_2, "%d\n", VAR_4->stretch);
}
