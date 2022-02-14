
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * irqs; } ;
struct platform_device {int dev; int * resource; TYPE_1__ archdata; } ;
struct bbc_i2c_bus {scalar_t__ i2c_control_regs; scalar_t__ i2c_bussel_reg; } ;


 int VAR_0 ;
 struct bbc_i2c_bus* FUNC_0 (struct platform_device*,int) ;
 int FUNC_1 (struct bbc_i2c_bus*) ;
 int FUNC_2 (int *,struct bbc_i2c_bus*) ;
 int FUNC_3 (int ,struct bbc_i2c_bus*) ;
 int FUNC_4 (struct bbc_i2c_bus*) ;
 int FUNC_5 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct bbc_i2c_bus *VAR_2;
 int VAR_3, VAR_4 = 0;

 VAR_2 = FUNC_0(VAR_1, VAR_4);
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_1->archdata.irqs[0], VAR_2);
  if (VAR_2->i2c_bussel_reg)
   FUNC_5(&VAR_1->resource[0], VAR_2->i2c_bussel_reg, 1);
  if (VAR_2->i2c_control_regs)
   FUNC_5(&VAR_1->resource[1], VAR_2->i2c_control_regs, 2);
  FUNC_4(VAR_2);
 } else {
  FUNC_2(&VAR_1->dev, VAR_2);
 }

 return VAR_3;
}
