
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_controller {int dev; } ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct qcom_nand_controller* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 struct qcom_nand_controller *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 <= 0)
  return;

 FUNC_0(VAR_2->dev, "invalid chip select\n");
}
