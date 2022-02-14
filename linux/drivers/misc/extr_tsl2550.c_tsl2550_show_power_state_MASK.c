
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2550_data {int power_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct tsl2550_data* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct tsl2550_data *VAR_3 = FUNC_0(FUNC_2(VAR_0));

 return FUNC_1(VAR_2, "%u\n", VAR_3->power_state);
}
