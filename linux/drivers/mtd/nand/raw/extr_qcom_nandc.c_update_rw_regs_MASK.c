
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int dummy; } ;
struct qcom_nand_host {unsigned int cfg0; int cfg1; int ecc_bch_cfg; unsigned int cfg0_raw; int cfg1_raw; int ecc_buf_cfg; int clrflashstatus; int clrreadstatus; int cw_size; int cw_data; scalar_t__ use_ecc; struct nand_chip chip; } ;
struct qcom_nand_controller {int dummy; } ;


 unsigned int VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct qcom_nand_controller*,int ,int ,int ,int) ;
 int FUNC_2 (struct qcom_nand_controller*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct qcom_nand_host *VAR_15, int VAR_16, bool VAR_17)
{
 struct nand_chip *VAR_18 = &VAR_15->chip;
 struct qcom_nand_controller *VAR_19 = FUNC_0(VAR_18);
 u32 VAR_20, VAR_21, VAR_22, VAR_23;

 if (VAR_17) {
  if (VAR_15->use_ecc)
   VAR_20 = VAR_12 | VAR_14 | VAR_2;
  else
   VAR_20 = VAR_11 | VAR_14 | VAR_2;
 } else {
  VAR_20 = VAR_13 | VAR_14 | VAR_2;
 }

 if (VAR_15->use_ecc) {
  VAR_21 = (VAR_15->cfg0 & ~(7U << VAR_0)) |
    (VAR_16 - 1) << VAR_0;

  VAR_22 = VAR_15->cfg1;
  VAR_23 = VAR_15->ecc_bch_cfg;
 } else {
  VAR_21 = (VAR_15->cfg0_raw & ~(7U << VAR_0)) |
    (VAR_16 - 1) << VAR_0;

  VAR_22 = VAR_15->cfg1_raw;
  VAR_23 = 1 << VAR_1;
 }

 FUNC_2(VAR_19, VAR_8, VAR_20);
 FUNC_2(VAR_19, VAR_3, VAR_21);
 FUNC_2(VAR_19, VAR_4, VAR_22);
 FUNC_2(VAR_19, VAR_5, VAR_23);
 FUNC_2(VAR_19, VAR_6, VAR_15->ecc_buf_cfg);
 FUNC_2(VAR_19, VAR_9, VAR_15->clrflashstatus);
 FUNC_2(VAR_19, VAR_10, VAR_15->clrreadstatus);
 FUNC_2(VAR_19, VAR_7, 1);

 if (VAR_17)
  FUNC_1(VAR_19, 0, 0, VAR_15->use_ecc ?
       VAR_15->cw_data : VAR_15->cw_size, 1);
}
