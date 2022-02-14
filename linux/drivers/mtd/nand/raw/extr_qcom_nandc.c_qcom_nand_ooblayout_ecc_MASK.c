
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_host {scalar_t__ spare_bytes; scalar_t__ ecc_bytes_hw; scalar_t__ bbm_size; } ;
struct nand_ecc_ctrl {int bytes; int steps; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_oob_region {scalar_t__ length; scalar_t__ offset; } ;
struct mtd_info {scalar_t__ oobsize; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct qcom_nand_host* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, int VAR_2,
       struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct qcom_nand_host *VAR_5 = FUNC_1(VAR_4);
 struct nand_ecc_ctrl *VAR_6 = &VAR_4->ecc;

 if (VAR_2 > 1)
  return -VAR_0;

 if (!VAR_2) {
  VAR_3->length = (VAR_6->bytes * (VAR_6->steps - 1)) +
        VAR_5->bbm_size;
  VAR_3->offset = 0;
 } else {
  VAR_3->length = VAR_5->ecc_bytes_hw + VAR_5->spare_bytes;
  VAR_3->offset = VAR_1->oobsize - VAR_3->length;
 }

 return 0;
}
