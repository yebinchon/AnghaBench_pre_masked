
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_host {int use_ecc; } ;
struct qcom_nand_controller {int buf_count; int dev; } ;
struct nand_ecc_ctrl {int steps; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct qcom_nand_host*,int) ;
 int FUNC_3 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct qcom_nand_host*) ;
 int FUNC_6 (struct qcom_nand_host*,unsigned int) ;
 int FUNC_7 (struct qcom_nand_host*,unsigned int) ;
 int FUNC_8 (struct qcom_nand_host*,int) ;
 int FUNC_9 (struct qcom_nand_host*) ;
 int FUNC_10 (struct qcom_nand_host*,int ,int) ;
 int FUNC_11 (struct qcom_nand_controller*) ;
 struct qcom_nand_host* FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (struct qcom_nand_host*,int ,int) ;

__attribute__((used)) static void FUNC_14(struct nand_chip *VAR_0, unsigned int VAR_1,
          int VAR_2, int VAR_3)
{
 struct qcom_nand_host *VAR_4 = FUNC_12(VAR_0);
 struct nand_ecc_ctrl *VAR_5 = &VAR_0->ecc;
 struct qcom_nand_controller *VAR_6 = FUNC_4(VAR_0);
 bool VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_7(VAR_4, VAR_1);

 switch (VAR_1) {
 case 130:
  VAR_8 = FUNC_9(VAR_4);
  VAR_7 = 1;
  break;

 case 131:
  VAR_6->buf_count = 4;
  VAR_8 = FUNC_8(VAR_4, VAR_2);
  VAR_7 = 1;
  break;

 case 133:
  VAR_8 = FUNC_5(VAR_4);
  VAR_7 = 1;
  break;

 case 136:
  VAR_8 = FUNC_2(VAR_4, VAR_3);
  VAR_7 = 1;
  break;

 case 132:

  FUNC_0(VAR_2 != 0);

  VAR_4->use_ecc = 1;
  FUNC_10(VAR_4, 0, VAR_3);
  FUNC_13(VAR_4, VAR_5->steps, 1);
  break;

 case 129:
  FUNC_0(VAR_2 != 0);
  FUNC_10(VAR_4, 0, VAR_3);
  break;

 case 134:
 case 128:
 case 135:
 default:
  break;
 }

 if (VAR_8) {
  FUNC_1(VAR_6->dev, "failure executing command %d\n",
   VAR_1);
  FUNC_3(VAR_6);
  return;
 }

 if (VAR_7) {
  VAR_8 = FUNC_11(VAR_6);
  if (VAR_8)
   FUNC_1(VAR_6->dev,
    "failure submitting descs for command %d\n",
    VAR_1);
 }

 FUNC_3(VAR_6);

 FUNC_6(VAR_4, VAR_1);
}
