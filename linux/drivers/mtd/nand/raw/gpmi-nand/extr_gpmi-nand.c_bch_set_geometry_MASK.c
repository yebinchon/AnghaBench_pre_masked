
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resources {scalar_t__ bch_regs; } ;
struct gpmi_nand_data {int dev; struct resources resources; } ;


 int FUNC_0 (struct gpmi_nand_data*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct gpmi_nand_data*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct gpmi_nand_data *VAR_1)
{
 struct resources *VAR_2 = &VAR_1->resources;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_1->dev);
 if (VAR_3 < 0)
  return VAR_3;






 VAR_3 = FUNC_2(VAR_2->bch_regs, FUNC_0(VAR_1));
 if (VAR_3)
  goto err_out;


 FUNC_6(0, VAR_2->bch_regs + VAR_0);

 VAR_3 = 0;
err_out:
 FUNC_4(VAR_1->dev);
 FUNC_5(VAR_1->dev);

 return VAR_3;
}
