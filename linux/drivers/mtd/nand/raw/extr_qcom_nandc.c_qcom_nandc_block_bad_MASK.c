
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_host {int use_ecc; int cw_size; } ;
struct qcom_nand_controller {int* data_buffer; int dev; } ;
struct nand_ecc_ctrl {int steps; } ;
struct nand_chip {int page_shift; int pagemask; int options; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int writesize; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qcom_nand_host*,int) ;
 int FUNC_1 (struct qcom_nand_controller*) ;
 int FUNC_2 (struct qcom_nand_host*,int) ;
 int FUNC_3 (int ,char*) ;
 struct qcom_nand_controller* FUNC_4 (struct nand_chip*) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;
 struct qcom_nand_host* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_1, loff_t VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_5(VAR_1);
 struct qcom_nand_host *VAR_4 = FUNC_6(VAR_1);
 struct qcom_nand_controller *VAR_5 = FUNC_4(VAR_1);
 struct nand_ecc_ctrl *VAR_6 = &VAR_1->ecc;
 int VAR_7, VAR_8, VAR_9, VAR_10 = 0;

 VAR_7 = (int)(VAR_2 >> VAR_1->page_shift) & VAR_1->pagemask;







 VAR_4->use_ecc = 0;

 FUNC_1(VAR_5);
 VAR_8 = FUNC_2(VAR_4, VAR_7);
 if (VAR_8)
  goto err;

 if (FUNC_0(VAR_4, 1)) {
  FUNC_3(VAR_5->dev, "error when trying to read BBM\n");
  goto err;
 }

 VAR_9 = VAR_3->writesize - VAR_4->cw_size * (VAR_6->steps - 1);

 VAR_10 = VAR_5->data_buffer[VAR_9] != 0xff;

 if (VAR_1->options & VAR_0)
  VAR_10 = VAR_10 || (VAR_5->data_buffer[VAR_9 + 1] != 0xff);
err:
 return VAR_10;
}
