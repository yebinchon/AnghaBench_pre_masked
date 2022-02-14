
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct atmel_smc_nand_controller {int base; } ;
struct atmel_nand_controller_caps {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct platform_device*,struct atmel_nand_controller_caps const*) ;
 int FUNC_2 (struct atmel_smc_nand_controller*) ;
 struct atmel_smc_nand_controller* FUNC_3 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2,
    const struct atmel_nand_controller_caps *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 struct atmel_smc_nand_controller *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_4, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(&VAR_5->base, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(&VAR_5->base);
}
