
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gpmi_nand_data {int nand; } ;


 int FUNC_0 (struct gpmi_nand_data*) ;
 int FUNC_1 (int *) ;
 struct gpmi_nand_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gpmi_nand_data*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct gpmi_nand_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);

 FUNC_1(&VAR_1->nand);
 FUNC_0(VAR_1);
 FUNC_5(VAR_1);
 return 0;
}
