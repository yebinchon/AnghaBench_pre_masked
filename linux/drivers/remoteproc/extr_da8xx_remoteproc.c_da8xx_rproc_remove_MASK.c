
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct da8xx_rproc {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct rproc* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct rproc*) ;
 int FUNC_4 (struct rproc*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct rproc *VAR_1 = FUNC_2(VAR_0);
 struct da8xx_rproc *VAR_2 = (struct da8xx_rproc *)VAR_1->priv;
 struct device *VAR_3 = &VAR_0->dev;






 FUNC_0(VAR_2->irq);

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 if (VAR_3->of_node)
  FUNC_1(VAR_3);

 return 0;
}
