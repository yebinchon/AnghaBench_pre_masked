
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_host {int cw_size; int use_ecc; } ;
struct qcom_nand_controller {int dev; int data_buffer; } ;
struct nand_ecc_ctrl {int steps; } ;
struct nand_chip {int page_shift; int pagemask; struct nand_ecc_ctrl ecc; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qcom_nand_controller*) ;
 int FUNC_1 (struct qcom_nand_controller*) ;
 int FUNC_2 (struct qcom_nand_controller*) ;
 int FUNC_3 (struct qcom_nand_controller*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (struct nand_chip*) ;
 int FUNC_9 (struct qcom_nand_host*,int,int) ;
 int FUNC_10 (struct qcom_nand_controller*) ;
 struct qcom_nand_host* FUNC_11 (struct nand_chip*) ;
 int FUNC_12 (struct qcom_nand_host*,int,int) ;
 int FUNC_13 (struct qcom_nand_controller*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_14(struct nand_chip *VAR_2, loff_t VAR_3)
{
 struct qcom_nand_host *VAR_4 = FUNC_11(VAR_2);
 struct qcom_nand_controller *VAR_5 = FUNC_6(VAR_2);
 struct nand_ecc_ctrl *VAR_6 = &VAR_2->ecc;
 int VAR_7, VAR_8;

 FUNC_1(VAR_5);
 FUNC_0(VAR_5);






 FUNC_7(VAR_5->data_buffer, 0x00, VAR_4->cw_size);

 VAR_7 = (int)(VAR_3 >> VAR_2->page_shift) & VAR_2->pagemask;


 VAR_4->use_ecc = 0;
 FUNC_9(VAR_4, VAR_4->cw_size * (VAR_6->steps - 1), VAR_7);
 FUNC_12(VAR_4, 1, 0);

 FUNC_3(VAR_5);
 FUNC_13(VAR_5, VAR_1,
         VAR_5->data_buffer, VAR_4->cw_size, 0);
 FUNC_2(VAR_5);

 VAR_8 = FUNC_10(VAR_5);

 FUNC_5(VAR_5);

 if (VAR_8) {
  FUNC_4(VAR_5->dev, "failure to update BBM\n");
  return -VAR_0;
 }

 return FUNC_8(VAR_2);
}
