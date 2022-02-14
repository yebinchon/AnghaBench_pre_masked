
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct qcom_nand_host {int use_ecc; int last_command; struct nand_chip chip; } ;
struct qcom_nand_controller {scalar_t__ buf_start; scalar_t__ buf_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qcom_nand_controller*) ;
 int FUNC_1 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_3(struct qcom_nand_host *VAR_4, int VAR_5)
{
 struct nand_chip *VAR_6 = &VAR_4->chip;
 struct qcom_nand_controller *VAR_7 = FUNC_2(VAR_6);

 VAR_7->buf_count = 0;
 VAR_7->buf_start = 0;
 VAR_4->use_ecc = 0;
 VAR_4->last_command = VAR_5;

 FUNC_1(VAR_7);

 if (VAR_5 == VAR_3 || VAR_5 == VAR_2 ||
     VAR_5 == VAR_1 || VAR_5 == VAR_0)
  FUNC_0(VAR_7);
}
