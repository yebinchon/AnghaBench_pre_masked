
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct qcom_nand_host {struct nand_chip chip; } ;
struct qcom_nand_controller {int buf_count; int reg_read_buf; int data_buffer; } ;





 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct qcom_nand_controller*,int) ;
 int FUNC_3 (struct qcom_nand_host*,int) ;

__attribute__((used)) static void FUNC_4(struct qcom_nand_host *VAR_0, int VAR_1)
{
 struct nand_chip *VAR_2 = &VAR_0->chip;
 struct qcom_nand_controller *VAR_3 = FUNC_0(VAR_2);

 switch (VAR_1) {
 case 128:
  FUNC_2(VAR_3, 1);
  FUNC_1(VAR_3->data_buffer, VAR_3->reg_read_buf,
         VAR_3->buf_count);
  break;
 case 129:
 case 130:
  FUNC_3(VAR_0, VAR_1);
  break;
 default:
  break;
 }
}
