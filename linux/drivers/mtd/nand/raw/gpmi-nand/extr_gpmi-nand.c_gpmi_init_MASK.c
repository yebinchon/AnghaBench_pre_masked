
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resources {scalar_t__ gpmi_regs; scalar_t__ bch_regs; } ;
struct gpmi_nand_data {struct resources resources; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gpmi_nand_data*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpmi_nand_data *VAR_7)
{
 struct resources *VAR_8 = &VAR_7->resources;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_8->gpmi_regs, 0);
 if (VAR_9)
  goto err_out;





 VAR_9 = FUNC_1(VAR_8->bch_regs, FUNC_0(VAR_7));
 if (VAR_9)
  goto err_out;


 FUNC_2(VAR_4, VAR_8->gpmi_regs + VAR_5);


 FUNC_2(VAR_0,
    VAR_8->gpmi_regs + VAR_6);


 FUNC_2(VAR_3, VAR_8->gpmi_regs + VAR_6);


 FUNC_2(VAR_1, VAR_8->gpmi_regs + VAR_6);





 FUNC_2(VAR_2, VAR_8->gpmi_regs + VAR_6);

 return 0;
err_out:
 return VAR_9;
}
