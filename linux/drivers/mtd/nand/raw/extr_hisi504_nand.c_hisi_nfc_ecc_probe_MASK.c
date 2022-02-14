
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int strength; int write_page; int read_oob; int read_page; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; } ;
struct hinfc_host {struct nand_chip chip; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct hinfc_host*,int ) ;
 int FUNC_2 (struct hinfc_host*,unsigned int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct mtd_info*,int *) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct hinfc_host *VAR_11)
{
 unsigned int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 struct device *VAR_16 = VAR_11->dev;
 struct nand_chip *VAR_17 = &VAR_11->chip;
 struct mtd_info *VAR_18 = FUNC_4(VAR_17);

 VAR_13 = VAR_17->ecc.size;
 VAR_14 = VAR_17->ecc.strength;
 if (VAR_13 != 1024) {
  FUNC_0(VAR_16, "error ecc size: %d\n", VAR_13);
  return -VAR_0;
 }

 if ((VAR_13 == 1024) && ((VAR_14 != 8) && (VAR_14 != 16) &&
    (VAR_14 != 24) && (VAR_14 != 40))) {
  FUNC_0(VAR_16, "ecc size and strength do not match\n");
  return -VAR_0;
 }

 VAR_17->ecc.size = VAR_13;
 VAR_17->ecc.strength = VAR_14;

 VAR_17->ecc.read_page = VAR_8;
 VAR_17->ecc.read_oob = VAR_7;
 VAR_17->ecc.write_page = VAR_9;

 switch (VAR_17->ecc.strength) {
 case 16:
  VAR_15 = 6;
  if (VAR_18->writesize == 2048)
   FUNC_3(VAR_18, &VAR_10);


  break;


 default:
  FUNC_0(VAR_16, "not support strength: %d\n", VAR_17->ecc.strength);
  return -VAR_0;
 }

 VAR_12 = FUNC_1(VAR_11, VAR_1);

 VAR_12 |= ((VAR_15 & VAR_2)
      << VAR_3);
 FUNC_2(VAR_11, VAR_12, VAR_1);


 VAR_12 = FUNC_1(VAR_11, VAR_4) & 0xfff;
 FUNC_2(VAR_11, VAR_12 | VAR_6 | VAR_5,
      VAR_4);

 return 0;
}
