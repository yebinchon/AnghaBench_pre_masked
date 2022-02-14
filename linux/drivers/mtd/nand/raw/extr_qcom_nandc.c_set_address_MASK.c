
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nand_chip {int options; } ;
struct qcom_nand_host {struct nand_chip chip; } ;
struct qcom_nand_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct qcom_nand_controller*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qcom_nand_host *VAR_3, u16 VAR_4, int VAR_5)
{
 struct nand_chip *VAR_6 = &VAR_3->chip;
 struct qcom_nand_controller *VAR_7 = FUNC_0(VAR_6);

 if (VAR_6->options & VAR_2)
  VAR_4 >>= 1;

 FUNC_1(VAR_7, VAR_0, VAR_5 << 16 | VAR_4);
 FUNC_1(VAR_7, VAR_1, VAR_5 >> 16 & 0xff);
}
