
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qcom_nand_host {int use_ecc; int cw_size; int cw_data; } ;
struct qcom_nand_controller {int dev; scalar_t__ data_buffer; } ;
struct nand_ecc_ctrl {int size; int steps; } ;
struct nand_chip {int * oob_poi; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int oobavail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qcom_nand_controller*) ;
 int FUNC_1 (struct qcom_nand_controller*) ;
 int FUNC_2 (struct qcom_nand_controller*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (struct mtd_info*,scalar_t__,int *,int ,int) ;
 int FUNC_8 (struct nand_chip*) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct qcom_nand_host*,int,int) ;
 int FUNC_11 (struct qcom_nand_controller*) ;
 struct qcom_nand_host* FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (struct qcom_nand_host*,int,int) ;
 int FUNC_14 (struct qcom_nand_controller*,int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_15(struct nand_chip *VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_9(VAR_2);
 struct qcom_nand_host *VAR_5 = FUNC_12(VAR_2);
 struct qcom_nand_controller *VAR_6 = FUNC_5(VAR_2);
 struct nand_ecc_ctrl *VAR_7 = &VAR_2->ecc;
 u8 *VAR_8 = VAR_2->oob_poi;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_5->use_ecc = 1;
 FUNC_0(VAR_6);


 VAR_9 = VAR_7->size - ((VAR_7->steps - 1) << 2);
 VAR_10 = VAR_4->oobavail;

 FUNC_6(VAR_6->data_buffer, 0xff, VAR_5->cw_data);

 FUNC_7(VAR_4, VAR_6->data_buffer + VAR_9, VAR_8,
        0, VAR_4->oobavail);

 FUNC_10(VAR_5, VAR_5->cw_size * (VAR_7->steps - 1), VAR_3);
 FUNC_13(VAR_5, 1, 0);

 FUNC_2(VAR_6);
 FUNC_14(VAR_6, VAR_1,
         VAR_6->data_buffer, VAR_9 + VAR_10, 0);
 FUNC_1(VAR_6);

 VAR_11 = FUNC_11(VAR_6);

 FUNC_4(VAR_6);

 if (VAR_11) {
  FUNC_3(VAR_6->dev, "failure to write oob\n");
  return -VAR_0;
 }

 return FUNC_8(VAR_2);
}
