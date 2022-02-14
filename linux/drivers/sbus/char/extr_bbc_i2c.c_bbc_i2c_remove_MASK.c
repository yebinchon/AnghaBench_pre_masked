
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * irqs; } ;
struct platform_device {int * resource; TYPE_1__ archdata; int dev; } ;
struct bbc_i2c_bus {scalar_t__ i2c_control_regs; scalar_t__ i2c_bussel_reg; } ;


 int FUNC_0 (struct bbc_i2c_bus*) ;
 struct bbc_i2c_bus* FUNC_1 (int *) ;
 int FUNC_2 (int ,struct bbc_i2c_bus*) ;
 int FUNC_3 (struct bbc_i2c_bus*) ;
 int FUNC_4 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct bbc_i2c_bus *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1);

 FUNC_2(VAR_0->archdata.irqs[0], VAR_1);

 if (VAR_1->i2c_bussel_reg)
  FUNC_4(&VAR_0->resource[0], VAR_1->i2c_bussel_reg, 1);
 if (VAR_1->i2c_control_regs)
  FUNC_4(&VAR_0->resource[1], VAR_1->i2c_control_regs, 2);

 FUNC_3(VAR_1);

 return 0;
}
