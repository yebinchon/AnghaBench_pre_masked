
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_host {int use_ecc; } ;
struct qcom_nand_controller {int dummy; } ;
struct nand_ecc_ctrl {int steps; } ;
struct nand_chip {int oob_poi; struct nand_ecc_ctrl ecc; } ;


 int FUNC_0 (struct qcom_nand_controller*) ;
 int FUNC_1 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct qcom_nand_host*,int *,int ,int) ;
 int FUNC_4 (struct qcom_nand_host*,int ,int) ;
 struct qcom_nand_host* FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct qcom_nand_host*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_0, int VAR_1)
{
 struct qcom_nand_host *VAR_2 = FUNC_5(VAR_0);
 struct qcom_nand_controller *VAR_3 = FUNC_2(VAR_0);
 struct nand_ecc_ctrl *VAR_4 = &VAR_0->ecc;

 FUNC_1(VAR_3);
 FUNC_0(VAR_3);

 VAR_2->use_ecc = 1;
 FUNC_4(VAR_2, 0, VAR_1);
 FUNC_6(VAR_2, VAR_4->steps, 1);

 return FUNC_3(VAR_2, ((void*)0), VAR_0->oob_poi, VAR_1);
}
