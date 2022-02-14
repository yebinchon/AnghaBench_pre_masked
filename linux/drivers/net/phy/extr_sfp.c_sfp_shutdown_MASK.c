
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int timeout; int poll; int * gpio_irq; int dev; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct sfp*) ;
 struct sfp* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_1)
{
 struct sfp *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_2->gpio_irq[VAR_3])
   continue;

  FUNC_1(VAR_2->dev, VAR_2->gpio_irq[VAR_3], VAR_2);
 }

 FUNC_0(&VAR_2->poll);
 FUNC_0(&VAR_2->timeout);
}
