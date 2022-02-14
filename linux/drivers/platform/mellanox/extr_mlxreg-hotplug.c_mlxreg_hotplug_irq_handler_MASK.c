
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxreg_hotplug_priv_data {int dwork_irq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct mlxreg_hotplug_priv_data *VAR_3;

 VAR_3 = (struct mlxreg_hotplug_priv_data *)VAR_2;


 FUNC_0(&VAR_3->dwork_irq, 0);

 return VAR_0;
}
