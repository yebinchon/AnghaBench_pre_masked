
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct TYPE_5__ {scalar_t__ sec; int (* bm_swap ) (struct mtd_info*,int *,int) ;} ;
struct mtk_nfc_nand_chip {int spare_per_sector; TYPE_2__ bad_mark; } ;
struct TYPE_6__ {int sectors; int op; int mode; } ;
struct mtk_nfc {int ecc; int dev; scalar_t__ regs; int done; TYPE_3__ ecc_cfg; } ;
struct mtd_info {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *,size_t,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,size_t,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct nand_chip*,int,int) ;
 int FUNC_15 (struct mtd_info*,int *,int,int) ;
 struct mtk_nfc* FUNC_16 (struct nand_chip*) ;
 int FUNC_17 (struct nand_chip*,int,int,int *,int ) ;
 int FUNC_18 (struct mtk_nfc*,int ) ;
 int FUNC_19 (struct mtk_nfc*,int ) ;
 int FUNC_20 (struct mtk_nfc*,int,int ) ;
 int FUNC_21 (struct mtk_nfc*,int,int ) ;
 int FUNC_22 (scalar_t__,int,int,int,int ) ;
 int FUNC_23 (struct mtd_info*,int *,int) ;
 struct mtk_nfc_nand_chip* FUNC_24 (struct nand_chip*) ;
 int FUNC_25 (int *,int ) ;

__attribute__((used)) static int FUNC_26(struct mtd_info *VAR_22, struct nand_chip *VAR_23,
    u32 VAR_24, u32 VAR_25,
    u8 *VAR_26, int VAR_27, int VAR_28)
{
 struct mtk_nfc *VAR_29 = FUNC_16(VAR_23);
 struct mtk_nfc_nand_chip *VAR_30 = FUNC_24(VAR_23);
 u32 VAR_31 = VAR_30->spare_per_sector;
 u32 VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 dma_addr_t VAR_37;
 int VAR_38 = 0;
 size_t VAR_39;
 u8 *VAR_40;
 int VAR_41;

 VAR_34 = VAR_24 / VAR_23->ecc.size;
 VAR_35 = FUNC_1(VAR_24 + VAR_25, VAR_23->ecc.size);

 VAR_33 = VAR_35 - VAR_34;
 VAR_32 = VAR_34 * (VAR_23->ecc.size + VAR_31);

 VAR_39 = VAR_33 * VAR_23->ecc.size + (VAR_28 ? VAR_33 * VAR_31 : 0);
 VAR_40 = VAR_26 + VAR_34 * VAR_23->ecc.size;

 FUNC_17(VAR_23, VAR_27, VAR_32, ((void*)0), 0);

 VAR_37 = FUNC_5(VAR_29->dev, VAR_40, VAR_39, VAR_7);
 VAR_41 = FUNC_6(VAR_29->dev, VAR_37);
 if (VAR_41) {
  FUNC_3(VAR_29->dev, "dma mapping error\n");

  return -VAR_10;
 }

 VAR_36 = FUNC_19(VAR_29, VAR_16);
 VAR_36 |= VAR_4 | VAR_2 | VAR_0;
 if (!VAR_28) {
  VAR_36 |= VAR_1 | VAR_3;
  FUNC_21(VAR_29, VAR_36, VAR_16);

  VAR_29->ecc_cfg.mode = VAR_9;
  VAR_29->ecc_cfg.sectors = VAR_33;
  VAR_29->ecc_cfg.op = VAR_8;
  VAR_41 = FUNC_12(VAR_29->ecc, &VAR_29->ecc_cfg);
  if (VAR_41) {
   FUNC_3(VAR_29->dev, "ecc enable\n");

   VAR_36 &= ~(VAR_2 | VAR_0 | VAR_4 |
    VAR_1 | VAR_3);
   FUNC_21(VAR_29, VAR_36, VAR_16);
   FUNC_7(VAR_29->dev, VAR_37, VAR_39, VAR_7);

   return VAR_41;
  }
 } else {
  FUNC_21(VAR_29, VAR_36, VAR_16);
 }

 FUNC_20(VAR_29, VAR_33 << VAR_6, VAR_17);
 FUNC_21(VAR_29, VAR_13, VAR_18);
 FUNC_20(VAR_29, FUNC_9(VAR_37), VAR_19);

 FUNC_8(&VAR_29->done);
 VAR_36 = FUNC_18(VAR_29, VAR_17) | VAR_5;
 FUNC_20(VAR_29, VAR_36, VAR_17);
 FUNC_21(VAR_29, VAR_21, VAR_20);

 VAR_41 = FUNC_25(&VAR_29->done, FUNC_10(500));
 if (!VAR_41)
  FUNC_4(VAR_29->dev, "read ahb/dma done timeout\n");

 VAR_41 = FUNC_22(VAR_29->regs + VAR_15, VAR_36,
           FUNC_0(VAR_36) >= VAR_33, 10,
           VAR_14);
 if (VAR_41 < 0) {
  FUNC_3(VAR_29->dev, "subpage done timeout\n");
  VAR_38 = -VAR_11;
 } else if (!VAR_28) {
  VAR_41 = FUNC_13(VAR_29->ecc, VAR_8);
  VAR_38 = VAR_41 < 0 ? -VAR_12 :
   FUNC_15(VAR_22, VAR_40, VAR_34, VAR_33);
  FUNC_14(VAR_23, VAR_34, VAR_33);
 }

 FUNC_7(VAR_29->dev, VAR_37, VAR_39, VAR_7);

 if (VAR_28)
  goto done;

 FUNC_11(VAR_29->ecc);

 if (FUNC_2(VAR_30->bad_mark.sec, VAR_34, VAR_35) == VAR_30->bad_mark.sec)
  VAR_30->bad_mark.bm_swap(VAR_22, VAR_26, VAR_28);
done:
 FUNC_20(VAR_29, 0, VAR_17);

 return VAR_38;
}
