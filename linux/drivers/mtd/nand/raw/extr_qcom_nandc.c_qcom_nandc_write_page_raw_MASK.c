
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct qcom_nand_host {int use_ecc; int cw_size; int bbm_size; int ecc_bytes_hw; int spare_bytes; int cw_data; } ;
struct qcom_nand_controller {int dev; } ;
struct nand_ecc_ctrl {int steps; int size; } ;
struct nand_chip {int * oob_poi; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int writesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qcom_nand_controller*) ;
 int FUNC_1 (struct qcom_nand_controller*) ;
 int FUNC_2 (struct qcom_nand_controller*) ;
 int FUNC_3 (struct qcom_nand_controller*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_8 (struct nand_chip*) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 int FUNC_10 (struct qcom_nand_controller*) ;
 struct qcom_nand_host* FUNC_11 (struct nand_chip*) ;
 int FUNC_12 (struct qcom_nand_host*,int,int) ;
 int FUNC_13 (struct qcom_nand_controller*,int,int *,int,int ) ;

__attribute__((used)) static int FUNC_14(struct nand_chip *VAR_2,
         const uint8_t *VAR_3, int VAR_4,
         int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_9(VAR_2);
 struct qcom_nand_host *VAR_7 = FUNC_11(VAR_2);
 struct qcom_nand_controller *VAR_8 = FUNC_6(VAR_2);
 struct nand_ecc_ctrl *VAR_9 = &VAR_2->ecc;
 u8 *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 FUNC_7(VAR_2, VAR_5, 0, ((void*)0), 0);
 FUNC_1(VAR_8);
 FUNC_0(VAR_8);

 VAR_10 = (u8 *)VAR_3;
 VAR_11 = VAR_2->oob_poi;

 VAR_7->use_ecc = 0;
 FUNC_12(VAR_7, VAR_9->steps, 0);
 FUNC_3(VAR_8);

 for (VAR_12 = 0; VAR_12 < VAR_9->steps; VAR_12++) {
  int VAR_14, VAR_15, VAR_16, VAR_17;
  int VAR_18 = VAR_0;

  VAR_14 = VAR_6->writesize - VAR_7->cw_size * (VAR_9->steps - 1);
  VAR_16 = VAR_7->bbm_size;

  if (VAR_12 == (VAR_9->steps - 1)) {
   VAR_15 = VAR_9->size - VAR_14 -
         ((VAR_9->steps - 1) << 2);
   VAR_17 = (VAR_9->steps << 2) + VAR_7->ecc_bytes_hw +
        VAR_7->spare_bytes;
  } else {
   VAR_15 = VAR_7->cw_data - VAR_14;
   VAR_17 = VAR_7->ecc_bytes_hw + VAR_7->spare_bytes;
  }

  FUNC_13(VAR_8, VAR_18, VAR_10, VAR_14,
          VAR_1);
  VAR_18 += VAR_14;
  VAR_10 += VAR_14;

  FUNC_13(VAR_8, VAR_18, VAR_11, VAR_16,
          VAR_1);
  VAR_18 += VAR_16;
  VAR_11 += VAR_16;

  FUNC_13(VAR_8, VAR_18, VAR_10, VAR_15,
          VAR_1);
  VAR_18 += VAR_15;
  VAR_10 += VAR_15;

  FUNC_13(VAR_8, VAR_18, VAR_11, VAR_17, 0);
  VAR_11 += VAR_17;

  FUNC_2(VAR_8);
 }

 VAR_13 = FUNC_10(VAR_8);
 if (VAR_13)
  FUNC_4(VAR_8->dev, "failure to write raw page\n");

 FUNC_5(VAR_8);

 if (!VAR_13)
  VAR_13 = FUNC_8(VAR_2);

 return VAR_13;
}
