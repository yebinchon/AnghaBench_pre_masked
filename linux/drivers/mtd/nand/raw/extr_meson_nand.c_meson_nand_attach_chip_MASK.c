
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int read_oob; int read_oob_raw; int read_page; int read_page_raw; void* write_oob; void* write_oob_raw; int write_page; int write_page_raw; int mode; } ;
struct nand_chip {int bbt_options; int options; TYPE_2__ ecc; } ;
struct mtd_info {int writesize; scalar_t__ oobsize; scalar_t__ name; } ;
struct meson_nfc_nand_chip {int * sels; } ;
struct meson_nfc {int dev; TYPE_1__* data; } ;
struct TYPE_3__ {int ecc_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int ,int ) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct mtd_info*,int *) ;
 int FUNC_6 (struct nand_chip*,int ,scalar_t__) ;
 struct meson_nfc* FUNC_7 (struct nand_chip*) ;
 struct mtd_info* FUNC_8 (struct nand_chip*) ;
 void* VAR_15 ;
 struct meson_nfc_nand_chip* FUNC_9 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_16)
{
 struct meson_nfc *VAR_17 = FUNC_7(VAR_16);
 struct meson_nfc_nand_chip *VAR_18 = FUNC_9(VAR_16);
 struct mtd_info *VAR_19 = FUNC_8(VAR_16);
 int VAR_20 = VAR_19->writesize / 1024;
 int VAR_21;

 if (!VAR_19->name) {
  VAR_19->name = FUNC_2(VAR_17->dev, VAR_2,
        "%s:nand%d",
        FUNC_1(VAR_17->dev),
        VAR_18->sels[0]);
  if (!VAR_19->name)
   return -VAR_1;
 }

 if (VAR_16->bbt_options & VAR_4)
  VAR_16->bbt_options |= VAR_3;

 VAR_16->options |= VAR_7;

 VAR_21 = FUNC_6(VAR_16, VAR_17->data->ecc_caps,
       VAR_19->oobsize - 2 * VAR_20);
 if (VAR_21) {
  FUNC_0(VAR_17->dev, "failed to ECC init\n");
  return -VAR_0;
 }

 FUNC_5(VAR_19, &VAR_14);

 VAR_21 = FUNC_4(VAR_16);
 if (VAR_21)
  return -VAR_0;

 VAR_16->ecc.mode = VAR_6;
 VAR_16->ecc.write_page_raw = VAR_13;
 VAR_16->ecc.write_page = VAR_12;
 VAR_16->ecc.write_oob_raw = VAR_15;
 VAR_16->ecc.write_oob = VAR_15;

 VAR_16->ecc.read_page_raw = VAR_11;
 VAR_16->ecc.read_page = VAR_10;
 VAR_16->ecc.read_oob_raw = VAR_9;
 VAR_16->ecc.read_oob = VAR_8;

 if (VAR_16->options & VAR_5) {
  FUNC_0(VAR_17->dev, "16bits bus width not supported");
  return -VAR_0;
 }
 VAR_21 = FUNC_3(VAR_16);
 if (VAR_21)
  return -VAR_1;

 return VAR_21;
}
