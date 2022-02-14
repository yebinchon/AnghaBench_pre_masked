
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct chardev_data {int misc; } ;


 struct chardev_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct chardev_data *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->misc);

 return 0;
}
