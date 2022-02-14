
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmi_nand_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpmi_nand_data*,int ) ;
 int FUNC_1 (struct gpmi_nand_data*) ;
 int FUNC_2 (struct gpmi_nand_data*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct gpmi_nand_data*) ;
 int FUNC_4 (struct gpmi_nand_data*) ;

__attribute__((used)) static int FUNC_5(struct gpmi_nand_data *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (VAR_4)
  goto exit_regs;

 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_4)
  goto exit_regs;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  goto exit_regs;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto exit_regs;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  goto exit_clock;
 return 0;

exit_clock:
 FUNC_4(VAR_3);
exit_regs:
 return VAR_4;
}
