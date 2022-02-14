
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {int steps; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct qcom_nand_host {int cw_data; int cw_size; scalar_t__ use_ecc; struct nand_chip chip; } ;
struct qcom_nand_controller {int dev; int data_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct qcom_nand_controller*) ;
 int FUNC_1 (struct qcom_nand_controller*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct qcom_nand_controller*,int ,int ,int,int ) ;
 int FUNC_7 (struct qcom_nand_host*,int,int) ;
 int FUNC_8 (struct qcom_nand_controller*) ;
 int FUNC_9 (struct qcom_nand_host*,int,int) ;

__attribute__((used)) static int FUNC_10(struct qcom_nand_host *VAR_1, int VAR_2)
{
 struct nand_chip *VAR_3 = &VAR_1->chip;
 struct qcom_nand_controller *VAR_4 = FUNC_4(VAR_3);
 struct nand_ecc_ctrl *VAR_5 = &VAR_3->ecc;
 int VAR_6;
 int VAR_7;

 FUNC_0(VAR_4);

 VAR_6 = VAR_1->use_ecc ? VAR_1->cw_data : VAR_1->cw_size;


 FUNC_5(VAR_4->data_buffer, 0xff, VAR_6);

 FUNC_7(VAR_1, VAR_1->cw_size * (VAR_5->steps - 1), VAR_2);
 FUNC_9(VAR_1, 1, 1);

 FUNC_1(VAR_4, VAR_1->use_ecc);

 FUNC_6(VAR_4, VAR_0, VAR_4->data_buffer, VAR_6, 0);

 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7)
  FUNC_2(VAR_4->dev, "failed to copy last codeword\n");

 FUNC_3(VAR_4);

 return VAR_7;
}
