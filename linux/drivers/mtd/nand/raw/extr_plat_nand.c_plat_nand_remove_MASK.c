
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* remove ) (struct platform_device*) ;} ;
struct platform_nand_data {TYPE_1__ ctrl; } ;
struct platform_device {int dev; } ;
struct plat_nand_data {int chip; } ;


 struct platform_nand_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct plat_nand_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct plat_nand_data *VAR_1 = FUNC_2(VAR_0);
 struct platform_nand_data *VAR_2 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->chip);
 if (VAR_2->ctrl.remove)
  VAR_2->ctrl.remove(VAR_0);

 return 0;
}
