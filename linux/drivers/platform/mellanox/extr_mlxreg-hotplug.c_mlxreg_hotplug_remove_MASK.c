
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mlxreg_hotplug_priv_data {int irq; } ;


 struct mlxreg_hotplug_priv_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,struct mlxreg_hotplug_priv_data*) ;
 int FUNC_2 (struct mlxreg_hotplug_priv_data*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mlxreg_hotplug_priv_data *VAR_1 = FUNC_0(&VAR_0->dev);


 FUNC_2(VAR_1);
 FUNC_1(&VAR_0->dev, VAR_1->irq, VAR_1);

 return 0;
}
