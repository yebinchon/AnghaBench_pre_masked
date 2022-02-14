
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vf610_nfc {int dev; int ecc_mode; } ;
struct TYPE_2__ {scalar_t__ mode; int size; int strength; int bytes; int write_oob; int read_oob; int write_page_raw; int read_page_raw; int write_page; int read_page; } ;
struct nand_chip {int bbt_options; TYPE_1__ ecc; } ;
struct mtd_info {int writesize; int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct vf610_nfc* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mtd_info*,int *) ;
 int VAR_8 ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct vf610_nfc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_15)
{
 struct mtd_info *VAR_16 = FUNC_3(VAR_15);
 struct vf610_nfc *VAR_17 = FUNC_0(VAR_15);

 FUNC_4(VAR_17);


 if (VAR_15->bbt_options & VAR_4)
  VAR_15->bbt_options |= VAR_3;


 if (VAR_16->writesize + VAR_16->oobsize > VAR_7 + VAR_6 - 8) {
  FUNC_1(VAR_17->dev, "Unsupported flash page size\n");
  return -VAR_2;
 }

 if (VAR_15->ecc.mode != VAR_5)
  return 0;

 if (VAR_16->writesize != VAR_7 && VAR_16->oobsize < 64) {
  FUNC_1(VAR_17->dev, "Unsupported flash with hwecc\n");
  return -VAR_2;
 }

 if (VAR_15->ecc.size != VAR_16->writesize) {
  FUNC_1(VAR_17->dev, "Step size needs to be page size\n");
  return -VAR_2;
 }


 if (VAR_16->oobsize > 64)
  VAR_16->oobsize = 64;


 FUNC_2(VAR_16, &VAR_8);
 if (VAR_15->ecc.strength == 32) {
  VAR_17->ecc_mode = VAR_1;
  VAR_15->ecc.bytes = 60;
 } else if (VAR_15->ecc.strength == 24) {
  VAR_17->ecc_mode = VAR_0;
  VAR_15->ecc.bytes = 45;
 } else {
  FUNC_1(VAR_17->dev, "Unsupported ECC strength\n");
  return -VAR_2;
 }

 VAR_15->ecc.read_page = VAR_10;
 VAR_15->ecc.write_page = VAR_13;
 VAR_15->ecc.read_page_raw = VAR_11;
 VAR_15->ecc.write_page_raw = VAR_14;
 VAR_15->ecc.read_oob = VAR_9;
 VAR_15->ecc.write_oob = VAR_12;

 VAR_15->ecc.size = VAR_7;

 return 0;
}
