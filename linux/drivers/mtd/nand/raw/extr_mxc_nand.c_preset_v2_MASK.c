
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct nand_chip {TYPE_2__ ecc; } ;
struct mxc_nand_host {int eccsize; TYPE_1__* devtype_data; } ;
struct mtd_info {int writesize; int erasesize; int oobsize; } ;
struct TYPE_3__ {int irqpending_quirk; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mtd_info*) ;
 struct nand_chip* FUNC_3 (struct mtd_info*) ;
 struct mxc_nand_host* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct mtd_info *VAR_17)
{
 struct nand_chip *VAR_18 = FUNC_3(VAR_17);
 struct mxc_nand_host *VAR_19 = FUNC_4(VAR_18);
 uint16_t VAR_20 = 0;

 VAR_20 |= VAR_16;

 if (!VAR_19->devtype_data->irqpending_quirk)
  VAR_20 |= VAR_4;

 if (VAR_17->writesize) {
  uint16_t VAR_21 = VAR_17->erasesize / VAR_17->writesize;

  if (VAR_18->ecc.mode == VAR_0)
   VAR_20 |= VAR_3;

  VAR_19->eccsize = FUNC_2(VAR_17);
  if (VAR_19->eccsize == 4)
   VAR_20 |= VAR_15;

  VAR_20 |= FUNC_0(FUNC_1(VAR_21) - 6);
 } else {
  VAR_19->eccsize = 1;
 }

 FUNC_5(VAR_20, VAR_2);



 FUNC_5(VAR_17->oobsize / 2, VAR_6);


 FUNC_5(0x2, VAR_1);


 FUNC_5(0x0, VAR_11);
 FUNC_5(0x0, VAR_12);
 FUNC_5(0x0, VAR_13);
 FUNC_5(0x0, VAR_14);
 FUNC_5(0xffff, VAR_7);
 FUNC_5(0xffff, VAR_8);
 FUNC_5(0xffff, VAR_9);
 FUNC_5(0xffff, VAR_10);


 FUNC_5(0x4, VAR_5);
}
