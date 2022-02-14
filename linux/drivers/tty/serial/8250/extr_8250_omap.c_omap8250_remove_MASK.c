
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap8250_priv {int pm_qos_request; int line; } ;


 int FUNC_0 (int *,int) ;
 struct omap8250_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct omap8250_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(&VAR_0->dev);
 FUNC_5(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);
 FUNC_6(VAR_1->line);
 FUNC_2(&VAR_1->pm_qos_request);
 FUNC_0(&VAR_0->dev, 0);
 return 0;
}
