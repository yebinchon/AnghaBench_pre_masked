
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nand_sdr_timings {int tPROG_max; } ;
struct TYPE_3__ {int steps; } ;
struct nand_chip {int options; TYPE_1__ ecc; int cur_cs; int data_interface; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct meson_nfc_nand_chip {int info_buf; int data_buf; } ;
struct TYPE_4__ {int chip_select; } ;
struct meson_nfc {scalar_t__ reg_base; TYPE_2__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*,int,int ,int ) ;
 int FUNC_2 (struct meson_nfc*,int) ;
 int FUNC_3 (struct nand_chip*,int,int,int ) ;
 int FUNC_4 (struct nand_chip*,int ,int,int ,int,int ) ;
 int FUNC_5 (struct meson_nfc*,int ) ;
 int FUNC_6 (struct nand_chip*,int,int ) ;
 int FUNC_7 (struct nand_chip*,int ) ;
 struct meson_nfc* FUNC_8 (struct nand_chip*) ;
 struct nand_sdr_timings* FUNC_9 (int *) ;
 struct mtd_info* FUNC_10 (struct nand_chip*) ;
 struct meson_nfc_nand_chip* FUNC_11 (struct nand_chip*) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct nand_chip *VAR_9,
        int VAR_10, int VAR_11)
{
 struct mtd_info *VAR_12 = FUNC_10(VAR_9);
 const struct nand_sdr_timings *VAR_13 =
  FUNC_9(&VAR_9->data_interface);
 struct meson_nfc_nand_chip *VAR_14 = FUNC_11(VAR_9);
 struct meson_nfc *VAR_15 = FUNC_8(VAR_9);
 int VAR_16, VAR_17;
 u32 VAR_18;
 int VAR_19;

 FUNC_7(VAR_9, VAR_9->cur_cs);

 VAR_16 = VAR_12->writesize + VAR_12->oobsize;
 VAR_17 = VAR_9->ecc.steps * VAR_8;

 VAR_19 = FUNC_6(VAR_9, VAR_10, VAR_0);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_4(VAR_9, VAR_14->data_buf,
      VAR_16, VAR_14->info_buf,
      VAR_17, VAR_1);
 if (VAR_19)
  return VAR_19;

 if (VAR_9->options & VAR_3) {
  FUNC_2(VAR_15, VAR_10);
  FUNC_1(VAR_9, VAR_11, VAR_0,
         VAR_6);
 } else {
  FUNC_1(VAR_9, VAR_11, VAR_0,
         VAR_5);
 }

 VAR_18 = VAR_15->param.chip_select | VAR_4 | VAR_2;
 FUNC_12(VAR_18, VAR_15->reg_base + VAR_7);
 FUNC_5(VAR_15, FUNC_0(VAR_13->tPROG_max));

 FUNC_3(VAR_9, VAR_16, VAR_17, VAR_1);

 return VAR_19;
}
