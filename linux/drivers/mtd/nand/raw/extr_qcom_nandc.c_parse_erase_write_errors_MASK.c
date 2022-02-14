
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_ecc_ctrl {int steps; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct qcom_nand_host {int status; struct nand_chip chip; } ;
struct qcom_nand_controller {int * reg_read_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qcom_nand_controller*,int) ;

__attribute__((used)) static void FUNC_3(struct qcom_nand_host *VAR_6, int VAR_7)
{
 struct nand_chip *VAR_8 = &VAR_6->chip;
 struct qcom_nand_controller *VAR_9 = FUNC_0(VAR_8);
 struct nand_ecc_ctrl *VAR_10 = &VAR_8->ecc;
 int VAR_11;
 int VAR_12;

 VAR_11 = VAR_7 == VAR_3 ? VAR_10->steps : 1;
 FUNC_2(VAR_9, 1);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  u32 VAR_13 = FUNC_1(VAR_9->reg_read_buf[VAR_12]);

  if (VAR_13 & VAR_1)
   VAR_6->status &= ~VAR_5;

  if (VAR_13 & VAR_2 || (VAR_12 == (VAR_11 - 1) &&
       (VAR_13 &
        VAR_0)))
   VAR_6->status |= VAR_4;
 }
}
