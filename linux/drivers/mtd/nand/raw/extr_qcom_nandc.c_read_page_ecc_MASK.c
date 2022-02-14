
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nand_ecc_ctrl {int steps; int size; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct qcom_nand_host {int ecc_bytes_hw; int spare_bytes; int cw_data; int bbm_size; struct nand_chip chip; } ;
struct qcom_nand_controller {int dev; TYPE_1__* props; } ;
struct TYPE_2__ {scalar_t__ is_bam; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qcom_nand_controller*,int) ;
 int FUNC_1 (struct qcom_nand_controller*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct qcom_nand_controller*) ;
 struct qcom_nand_controller* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct qcom_nand_controller*,int,int,int,int) ;
 int FUNC_6 (struct qcom_nand_host*,int *,int *,int) ;
 int FUNC_7 (struct qcom_nand_controller*,scalar_t__,int *,int,int ) ;
 int FUNC_8 (struct qcom_nand_controller*) ;

__attribute__((used)) static int FUNC_9(struct qcom_nand_host *VAR_1, u8 *VAR_2,
    u8 *VAR_3, int VAR_4)
{
 struct nand_chip *VAR_5 = &VAR_1->chip;
 struct qcom_nand_controller *VAR_6 = FUNC_4(VAR_5);
 struct nand_ecc_ctrl *VAR_7 = &VAR_5->ecc;
 u8 *VAR_8 = VAR_2, *VAR_9 = VAR_3;
 int VAR_10, VAR_11;

 FUNC_1(VAR_6);


 for (VAR_10 = 0; VAR_10 < VAR_7->steps; VAR_10++) {
  int VAR_12, VAR_13;

  if (VAR_10 == (VAR_7->steps - 1)) {
   VAR_12 = VAR_7->size - ((VAR_7->steps - 1) << 2);
   VAR_13 = (VAR_7->steps << 2) + VAR_1->ecc_bytes_hw +
       VAR_1->spare_bytes;
  } else {
   VAR_12 = VAR_1->cw_data;
   VAR_13 = VAR_1->ecc_bytes_hw + VAR_1->spare_bytes;
  }

  if (VAR_6->props->is_bam) {
   if (VAR_2 && VAR_3) {
    FUNC_5(VAR_6, 0, 0, VAR_12, 0);
    FUNC_5(VAR_6, 1, VAR_12,
         VAR_13, 1);
   } else if (VAR_2) {
    FUNC_5(VAR_6, 0, 0, VAR_12, 1);
   } else {
    FUNC_5(VAR_6, 0, VAR_12,
         VAR_13, 1);
   }
  }

  FUNC_0(VAR_6, 1);

  if (VAR_2)
   FUNC_7(VAR_6, VAR_0, VAR_2,
          VAR_12, 0);
  if (VAR_3) {
   int VAR_14;

   for (VAR_14 = 0; VAR_14 < VAR_1->bbm_size; VAR_14++)
    *VAR_3++ = 0xff;

   FUNC_7(VAR_6, VAR_0 + VAR_12,
          VAR_3, VAR_13, 0);
  }

  if (VAR_2)
   VAR_2 += VAR_12;
  if (VAR_3)
   VAR_3 += VAR_13;
 }

 VAR_11 = FUNC_8(VAR_6);
 FUNC_3(VAR_6);

 if (VAR_11) {
  FUNC_2(VAR_6->dev, "failure to read page/oob\n");
  return VAR_11;
 }

 return FUNC_6(VAR_1, VAR_8, VAR_9, VAR_4);
}
