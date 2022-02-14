
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int dummy; } ;
struct qcom_nand_host {struct nand_chip chip; } ;
struct qcom_nand_controller {int * reg_read_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct qcom_nand_host *VAR_3, int VAR_4)
{
 struct nand_chip *VAR_5 = &VAR_3->chip;
 struct qcom_nand_controller *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  u32 VAR_8 = FUNC_1(VAR_6->reg_read_buf[VAR_7]);

  if (VAR_8 & (VAR_2 | VAR_1))
   return -VAR_0;
 }

 return 0;
}
