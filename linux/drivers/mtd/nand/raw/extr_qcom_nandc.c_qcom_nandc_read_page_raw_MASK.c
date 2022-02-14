
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct qcom_nand_host {int cw_data; } ;
struct nand_ecc_ctrl {int steps; int bytes; } ;
struct nand_chip {int * oob_poi; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int dummy; } ;


 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct mtd_info*,struct nand_chip*,int *,int *,int,int) ;
 struct qcom_nand_host* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_0, uint8_t *VAR_1,
        int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_0(VAR_0);
 struct qcom_nand_host *VAR_5 = FUNC_2(VAR_0);
 struct nand_ecc_ctrl *VAR_6 = &VAR_0->ecc;
 int VAR_7, VAR_8;
 u8 *VAR_9 = VAR_1, *VAR_10 = VAR_0->oob_poi;

 for (VAR_7 = 0; VAR_7 < VAR_6->steps; VAR_7++) {
  VAR_8 = FUNC_1(VAR_4, VAR_0, VAR_9, VAR_10,
          VAR_3, VAR_7);
  if (VAR_8)
   return VAR_8;

  VAR_9 += VAR_5->cw_data;
  VAR_10 += VAR_6->bytes;
 }

 return 0;
}
