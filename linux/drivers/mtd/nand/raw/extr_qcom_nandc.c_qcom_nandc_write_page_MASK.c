
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct qcom_nand_host {int use_ecc; int ecc_bytes_hw; int spare_bytes; int cw_data; int bbm_size; } ;
struct qcom_nand_controller {int dev; } ;
struct nand_ecc_ctrl {int steps; int size; int bytes; } ;
struct nand_chip {int * oob_poi; struct nand_ecc_ctrl ecc; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_9 (struct qcom_nand_controller*) ;
 struct qcom_nand_host* FUNC_10 (struct nand_chip*) ;
 int FUNC_11 (struct qcom_nand_host*,int,int) ;
 int FUNC_12 (struct qcom_nand_controller*,scalar_t__,int *,int,int ) ;

__attribute__((used)) static int FUNC_13(struct nand_chip *VAR_2, const uint8_t *VAR_3,
     int VAR_4, int VAR_5)
{
 struct qcom_nand_host *VAR_6 = FUNC_10(VAR_2);
 struct qcom_nand_controller *VAR_7 = FUNC_6(VAR_2);
 struct nand_ecc_ctrl *VAR_8 = &VAR_2->ecc;
 u8 *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 FUNC_7(VAR_2, VAR_5, 0, ((void*)0), 0);

 FUNC_1(VAR_7);
 FUNC_0(VAR_7);

 VAR_9 = (u8 *)VAR_3;
 VAR_10 = VAR_2->oob_poi;

 VAR_6->use_ecc = 1;
 FUNC_11(VAR_6, VAR_8->steps, 0);
 FUNC_3(VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_8->steps; VAR_11++) {
  int VAR_13, VAR_14;

  if (VAR_11 == (VAR_8->steps - 1)) {
   VAR_13 = VAR_8->size - ((VAR_8->steps - 1) << 2);
   VAR_14 = (VAR_8->steps << 2) + VAR_6->ecc_bytes_hw +
       VAR_6->spare_bytes;
  } else {
   VAR_13 = VAR_6->cw_data;
   VAR_14 = VAR_8->bytes;
  }


  FUNC_12(VAR_7, VAR_0, VAR_9, VAR_13,
          VAR_11 == (VAR_8->steps - 1) ? VAR_1 : 0);
  if (VAR_11 == (VAR_8->steps - 1)) {
   VAR_10 += VAR_6->bbm_size;

   FUNC_12(VAR_7, VAR_0 + VAR_13,
           VAR_10, VAR_14, 0);
  }

  FUNC_2(VAR_7);

  VAR_9 += VAR_13;
  VAR_10 += VAR_14;
 }

 VAR_12 = FUNC_9(VAR_7);
 if (VAR_12)
  FUNC_4(VAR_7->dev, "failure to write page\n");

 FUNC_5(VAR_7);

 if (!VAR_12)
  VAR_12 = FUNC_8(VAR_2);

 return VAR_12;
}
