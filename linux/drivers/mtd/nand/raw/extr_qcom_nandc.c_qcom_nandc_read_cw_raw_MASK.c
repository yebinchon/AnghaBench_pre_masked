
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qcom_nand_host {int use_ecc; int cw_size; int bbm_size; int ecc_bytes_hw; int spare_bytes; int cw_data; } ;
struct qcom_nand_controller {int dev; TYPE_1__* props; } ;
struct nand_ecc_ctrl {int steps; int size; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int writesize; } ;
struct TYPE_2__ {scalar_t__ is_bam; } ;


 int VAR_0 ;
 int FUNC_0 (struct qcom_nand_host*,int) ;
 int FUNC_1 (struct qcom_nand_controller*) ;
 int FUNC_2 (struct qcom_nand_controller*,int) ;
 int FUNC_3 (struct qcom_nand_controller*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_8 (struct qcom_nand_controller*,int,int,int,int) ;
 int FUNC_9 (struct qcom_nand_controller*,int,int *,int,int ) ;
 int FUNC_10 (struct qcom_nand_host*,int,int) ;
 int FUNC_11 (struct qcom_nand_controller*) ;
 struct qcom_nand_host* FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (struct qcom_nand_host*,int,int) ;

__attribute__((used)) static int
FUNC_14(struct mtd_info *VAR_1, struct nand_chip *VAR_2,
         u8 *VAR_3, u8 *VAR_4, int VAR_5, int VAR_6)
{
 struct qcom_nand_host *VAR_7 = FUNC_12(VAR_2);
 struct qcom_nand_controller *VAR_8 = FUNC_6(VAR_2);
 struct nand_ecc_ctrl *VAR_9 = &VAR_2->ecc;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15 = VAR_0, VAR_16 = 0;

 FUNC_7(VAR_2, VAR_5, 0, ((void*)0), 0);
 VAR_7->use_ecc = 0;

 FUNC_1(VAR_8);
 FUNC_10(VAR_7, VAR_7->cw_size * VAR_6, VAR_5);
 FUNC_13(VAR_7, 1, 1);
 FUNC_3(VAR_8);

 VAR_10 = VAR_1->writesize - VAR_7->cw_size * (VAR_9->steps - 1);
 VAR_12 = VAR_7->bbm_size;

 if (VAR_6 == (VAR_9->steps - 1)) {
  VAR_11 = VAR_9->size - VAR_10 -
        ((VAR_9->steps - 1) * 4);
  VAR_13 = (VAR_9->steps * 4) + VAR_7->ecc_bytes_hw +
       VAR_7->spare_bytes;
 } else {
  VAR_11 = VAR_7->cw_data - VAR_10;
  VAR_13 = VAR_7->ecc_bytes_hw + VAR_7->spare_bytes;
 }

 if (VAR_8->props->is_bam) {
  FUNC_8(VAR_8, 0, VAR_16, VAR_10, 0);
  VAR_16 += VAR_10;

  FUNC_8(VAR_8, 1, VAR_16, VAR_12, 0);
  VAR_16 += VAR_12;

  FUNC_8(VAR_8, 2, VAR_16, VAR_11, 0);
  VAR_16 += VAR_11;

  FUNC_8(VAR_8, 3, VAR_16, VAR_13, 1);
 }

 FUNC_2(VAR_8, 0);

 FUNC_9(VAR_8, VAR_15, VAR_3, VAR_10, 0);
 VAR_15 += VAR_10;

 FUNC_9(VAR_8, VAR_15, VAR_4, VAR_12, 0);
 VAR_15 += VAR_12;

 FUNC_9(VAR_8, VAR_15, VAR_3 + VAR_10, VAR_11, 0);
 VAR_15 += VAR_11;

 FUNC_9(VAR_8, VAR_15, VAR_4 + VAR_12, VAR_13, 0);

 VAR_14 = FUNC_11(VAR_8);
 FUNC_5(VAR_8);
 if (VAR_14) {
  FUNC_4(VAR_8->dev, "failure to read raw cw %d\n", VAR_6);
  return VAR_14;
 }

 return FUNC_0(VAR_7, 1);
}
