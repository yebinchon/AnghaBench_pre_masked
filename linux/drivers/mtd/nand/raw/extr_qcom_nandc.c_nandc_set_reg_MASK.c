
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_nand_controller {struct nandc_regs* regs; } ;
struct nandc_regs {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (struct nandc_regs*,int) ;

__attribute__((used)) static void FUNC_2(struct qcom_nand_controller *VAR_0, int VAR_1,
     u32 VAR_2)
{
 struct nandc_regs *VAR_3 = VAR_0->regs;
 __le32 *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);

 if (VAR_4)
  *VAR_4 = FUNC_0(VAR_2);
}
