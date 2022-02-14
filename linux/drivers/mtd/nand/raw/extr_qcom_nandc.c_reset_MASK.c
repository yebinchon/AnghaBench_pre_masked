
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct qcom_nand_host {struct nand_chip chip; } ;
struct qcom_nand_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct qcom_nand_controller*,int ,int) ;
 int FUNC_2 (struct qcom_nand_controller*,int ,int,int ) ;
 int FUNC_3 (struct qcom_nand_controller*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct qcom_nand_host *VAR_5)
{
 struct nand_chip *VAR_6 = &VAR_5->chip;
 struct qcom_nand_controller *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(VAR_7, VAR_2, VAR_4);
 FUNC_1(VAR_7, VAR_1, 1);

 FUNC_3(VAR_7, VAR_2, 1, VAR_0);
 FUNC_3(VAR_7, VAR_1, 1, VAR_0);

 FUNC_2(VAR_7, VAR_3, 1, VAR_0);

 return 0;
}
