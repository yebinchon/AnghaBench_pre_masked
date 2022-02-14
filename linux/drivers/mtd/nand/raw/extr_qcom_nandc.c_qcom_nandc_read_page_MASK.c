
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct qcom_nand_host {int dummy; } ;
struct qcom_nand_controller {int dummy; } ;
struct nand_chip {int * oob_poi; } ;


 int FUNC_0 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_3 (struct qcom_nand_host*,int *,int *,int) ;
 struct qcom_nand_host* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0, uint8_t *VAR_1,
    int VAR_2, int VAR_3)
{
 struct qcom_nand_host *VAR_4 = FUNC_4(VAR_0);
 struct qcom_nand_controller *VAR_5 = FUNC_1(VAR_0);
 u8 *VAR_6, *VAR_7 = ((void*)0);

 FUNC_2(VAR_0, VAR_3, 0, ((void*)0), 0);
 VAR_6 = VAR_1;
 VAR_7 = VAR_2 ? VAR_0->oob_poi : ((void*)0);

 FUNC_0(VAR_5);

 return FUNC_3(VAR_4, VAR_6, VAR_7, VAR_3);
}
