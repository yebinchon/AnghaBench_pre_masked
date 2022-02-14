
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_laptop {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct asus_laptop*,int ) ;
 struct asus_laptop* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct asus_laptop *VAR_4 = FUNC_1(VAR_1);

 return FUNC_2(VAR_3, "%d\n", FUNC_0(VAR_4, VAR_0));
}
