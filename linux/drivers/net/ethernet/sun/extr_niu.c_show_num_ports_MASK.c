
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct niu_parent {int num_ports; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct niu_parent* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1, char *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_2(VAR_0);
 struct niu_parent *VAR_4 = FUNC_0(&VAR_3->dev);

 return FUNC_1(VAR_2, "%d\n", VAR_4->num_ports);
}
