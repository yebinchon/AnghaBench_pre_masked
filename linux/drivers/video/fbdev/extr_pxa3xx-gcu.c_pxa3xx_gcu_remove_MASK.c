
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_gcu_priv {int shared_phys; int shared; int misc_dev; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 struct pxa3xx_gcu_priv* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct device*,struct pxa3xx_gcu_priv*) ;
 int FUNC_4 (struct pxa3xx_gcu_priv*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct pxa3xx_gcu_priv *VAR_2 = FUNC_2(VAR_1);
 struct device *VAR_3 = &VAR_1->dev;

 FUNC_4(VAR_2);
 FUNC_1(&VAR_2->misc_dev);
 FUNC_0(VAR_3, VAR_0, VAR_2->shared, VAR_2->shared_phys);
 FUNC_3(VAR_3, VAR_2);

 return 0;
}
