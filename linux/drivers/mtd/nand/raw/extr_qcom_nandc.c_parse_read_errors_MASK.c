
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct read_stats {int erased_cw; int buffer; int flash; } ;
struct nand_ecc_ctrl {int steps; int size; scalar_t__ bytes; } ;
struct nand_chip {struct nand_ecc_ctrl ecc; } ;
struct qcom_nand_host {int cw_data; scalar_t__ bch_enabled; struct nand_chip chip; } ;
struct qcom_nand_controller {scalar_t__ reg_read_buf; } ;
struct TYPE_2__ {unsigned int corrected; } ;
struct mtd_info {TYPE_1__ ecc_stats; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qcom_nand_host*,int *,int *,unsigned int,int,unsigned int) ;
 int FUNC_2 (int *,int) ;
 struct qcom_nand_controller* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct qcom_nand_controller*,int) ;

__attribute__((used)) static int FUNC_8(struct qcom_nand_host *VAR_6, u8 *VAR_7,
        u8 *VAR_8, int VAR_9)
{
 struct nand_chip *VAR_10 = &VAR_6->chip;
 struct qcom_nand_controller *VAR_11 = FUNC_3(VAR_10);
 struct mtd_info *VAR_12 = FUNC_6(VAR_10);
 struct nand_ecc_ctrl *VAR_13 = &VAR_10->ecc;
 unsigned int VAR_14 = 0, VAR_15 = 0;
 struct read_stats *VAR_16;
 bool VAR_17 = 0, VAR_18;
 int VAR_19;
 u8 *VAR_20 = VAR_7, *VAR_21 = VAR_8;

 VAR_16 = (struct read_stats *)VAR_11->reg_read_buf;
 FUNC_7(VAR_11, 1);

 for (VAR_19 = 0; VAR_19 < VAR_13->steps; VAR_19++, VAR_16++) {
  u32 VAR_22, VAR_23, VAR_24;
  int VAR_25, VAR_26;

  if (VAR_19 == (VAR_13->steps - 1)) {
   VAR_25 = VAR_13->size - ((VAR_13->steps - 1) << 2);
   VAR_26 = VAR_13->steps << 2;
  } else {
   VAR_25 = VAR_6->cw_data;
   VAR_26 = 0;
  }

  VAR_22 = FUNC_4(VAR_16->flash);
  VAR_23 = FUNC_4(VAR_16->buffer);
  VAR_24 = FUNC_4(VAR_16->erased_cw);
  if ((VAR_22 & VAR_5) && (VAR_23 & VAR_1)) {




   if (VAR_6->bch_enabled) {
    VAR_18 = (VAR_24 & VAR_3) == VAR_3 ?
      1 : 0;






   } else if (VAR_7) {
    VAR_18 = FUNC_2(VAR_7,
              VAR_25);
   } else {
    VAR_18 = 0;
   }

   if (!VAR_18)
    VAR_15 |= FUNC_0(VAR_19);






  } else if (VAR_22 & (VAR_5 | VAR_4)) {
   VAR_17 = 1;




  } else {
   unsigned int VAR_27;

   VAR_27 = VAR_23 & VAR_0;
   VAR_12->ecc_stats.corrected += VAR_27;
   VAR_14 = FUNC_5(VAR_14, VAR_27);
  }

  if (VAR_7)
   VAR_7 += VAR_25;
  if (VAR_8)
   VAR_8 += VAR_26 + VAR_13->bytes;
 }

 if (VAR_17)
  return -VAR_2;

 if (!VAR_15)
  return VAR_14;

 return FUNC_1(VAR_6, VAR_20, VAR_21,
         VAR_15, VAR_9,
         VAR_14);
}
