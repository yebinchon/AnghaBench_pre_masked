
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct qcom_nand_host {int cfg0_raw; int cfg1_raw; int clrflashstatus; int clrreadstatus; struct nand_chip chip; } ;
struct qcom_nand_controller {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct qcom_nand_controller*,int ,int) ;
 int FUNC_2 (struct qcom_nand_controller*,int ,int,int ) ;
 int FUNC_3 (struct qcom_nand_controller*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct qcom_nand_host *VAR_13, int VAR_14)
{
 struct nand_chip *VAR_15 = &VAR_13->chip;
 struct qcom_nand_controller *VAR_16 = FUNC_0(VAR_15);

 FUNC_1(VAR_16, VAR_8,
        VAR_11 | VAR_12 | VAR_1);
 FUNC_1(VAR_16, VAR_2, VAR_14);
 FUNC_1(VAR_16, VAR_3, 0);
 FUNC_1(VAR_16, VAR_5,
        VAR_13->cfg0_raw & ~(7 << VAR_0));
 FUNC_1(VAR_16, VAR_6, VAR_13->cfg1_raw);
 FUNC_1(VAR_16, VAR_7, 1);
 FUNC_1(VAR_16, VAR_9, VAR_13->clrflashstatus);
 FUNC_1(VAR_16, VAR_10, VAR_13->clrreadstatus);

 FUNC_3(VAR_16, VAR_8, 3, VAR_4);
 FUNC_3(VAR_16, VAR_5, 2, VAR_4);
 FUNC_3(VAR_16, VAR_7, 1, VAR_4);

 FUNC_2(VAR_16, VAR_9, 1, VAR_4);

 FUNC_3(VAR_16, VAR_9, 1, 0);
 FUNC_3(VAR_16, VAR_10, 1, VAR_4);

 return 0;
}
