
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmi_nand_data {int dev; } ;


 int FUNC_0 (struct gpmi_nand_data*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gpmi_nand_data*) ;
 int FUNC_3 (struct gpmi_nand_data*) ;

__attribute__((used)) static int FUNC_4(struct gpmi_nand_data *VAR_0)
{
 int VAR_1;


 FUNC_3(VAR_0);


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_1(VAR_0->dev, "Error setting BCH geometry : %d\n", VAR_1);
  return VAR_1;
 }


 return FUNC_2(VAR_0);
}
