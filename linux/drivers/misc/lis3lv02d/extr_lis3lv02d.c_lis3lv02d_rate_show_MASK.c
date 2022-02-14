
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct lis3lv02d* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lis3lv02d*) ;
 int FUNC_2 (struct lis3lv02d*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct lis3lv02d *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_3);
 return FUNC_3(VAR_2, "%d\n", FUNC_1(VAR_3));
}
