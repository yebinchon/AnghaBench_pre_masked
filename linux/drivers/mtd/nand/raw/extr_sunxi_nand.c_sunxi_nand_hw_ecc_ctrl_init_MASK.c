
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sunxi_nfc {scalar_t__ dmac; int dev; } ;
struct sunxi_nand_hw_ecc {int mode; } ;
struct nand_ecc_ctrl {int options; int size; int strength; int bytes; int write_oob_raw; int read_oob_raw; int write_subpage; int write_page; int read_subpage; int read_page; struct sunxi_nand_hw_ecc* priv; int write_oob; int read_oob; } ;
struct nand_chip {int options; int controller; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sunxi_nand_hw_ecc*) ;
 struct sunxi_nand_hw_ecc* FUNC_6 (int,int ) ;
 int FUNC_7 (struct mtd_info*,int *) ;
 int VAR_6 ;
 struct mtd_info* FUNC_8 (struct nand_chip*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct sunxi_nfc* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct nand_chip *VAR_18,
           struct nand_ecc_ctrl *VAR_19,
           struct device_node *VAR_20)
{
 static const u8 VAR_21[] = { 16, 24, 28, 32, 40, 48, 56, 60, 64 };
 struct sunxi_nfc *VAR_22 = FUNC_9(VAR_18->controller);
 struct mtd_info *VAR_23 = FUNC_8(VAR_18);
 struct sunxi_nand_hw_ecc *VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;

 if (VAR_19->options & VAR_4) {
  int VAR_28;

  VAR_19->size = 1024;
  VAR_25 = VAR_23->writesize / VAR_19->size;


  VAR_28 = (VAR_23->oobsize - 2) / VAR_25;


  VAR_28 -= 4;


  if (VAR_28 % 2)
   VAR_28--;

  VAR_19->strength = VAR_28 * 8 / FUNC_4(8 * VAR_19->size);

  for (VAR_27 = 0; VAR_27 < FUNC_1(VAR_21); VAR_27++) {
   if (VAR_21[VAR_27] > VAR_19->strength)
    break;
  }

  if (!VAR_27)
   VAR_19->strength = 0;
  else
   VAR_19->strength = VAR_21[VAR_27 - 1];
 }

 if (VAR_19->size != 512 && VAR_19->size != 1024)
  return -VAR_0;

 VAR_24 = FUNC_6(sizeof(*VAR_24), VAR_3);
 if (!VAR_24)
  return -VAR_1;


 if (VAR_19->size == 512 && VAR_23->writesize > 512) {
  VAR_19->size = 1024;
  VAR_19->strength *= 2;
 }


 for (VAR_27 = 0; VAR_27 < FUNC_1(VAR_21); VAR_27++) {
  if (VAR_19->strength <= VAR_21[VAR_27]) {




   VAR_19->strength = VAR_21[VAR_27];
   break;
  }
 }

 if (VAR_27 >= FUNC_1(VAR_21)) {
  FUNC_3(VAR_22->dev, "unsupported strength\n");
  VAR_26 = -VAR_2;
  goto err;
 }

 VAR_24->mode = VAR_27;


 VAR_19->bytes = FUNC_2(VAR_19->strength * FUNC_4(8 * 1024), 8);


 VAR_19->bytes = FUNC_0(VAR_19->bytes, 2);

 VAR_25 = VAR_23->writesize / VAR_19->size;

 if (VAR_23->oobsize < ((VAR_19->bytes + 4) * VAR_25)) {
  VAR_26 = -VAR_0;
  goto err;
 }

 VAR_19->read_oob = VAR_9;
 VAR_19->write_oob = VAR_14;
 FUNC_7(VAR_23, &VAR_8);
 VAR_19->priv = VAR_24;

 if (VAR_22->dmac) {
  VAR_19->read_page = VAR_11;
  VAR_19->read_subpage = VAR_13;
  VAR_19->write_page = VAR_16;
  VAR_18->options |= VAR_5;
 } else {
  VAR_19->read_page = VAR_10;
  VAR_19->read_subpage = VAR_12;
  VAR_19->write_page = VAR_15;
 }


 VAR_19->write_subpage = VAR_17;
 VAR_19->read_oob_raw = VAR_6;
 VAR_19->write_oob_raw = VAR_7;

 return 0;

err:
 FUNC_5(VAR_24);

 return VAR_26;
}
