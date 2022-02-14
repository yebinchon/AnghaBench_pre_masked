
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uctrl_driver {int regs; int irq; } ;
struct platform_device {int * resource; int dev; } ;


 struct uctrl_driver* FUNC_0 (int *) ;
 int FUNC_1 (int ,struct uctrl_driver*) ;
 int FUNC_2 (struct uctrl_driver*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct uctrl_driver *VAR_2 = FUNC_0(&VAR_1->dev);

 if (VAR_2) {
  FUNC_3(&VAR_0);
  FUNC_1(VAR_2->irq, VAR_2);
  FUNC_4(&VAR_1->resource[0], VAR_2->regs, FUNC_5(&VAR_1->resource[0]));
  FUNC_2(VAR_2);
 }
 return 0;
}
