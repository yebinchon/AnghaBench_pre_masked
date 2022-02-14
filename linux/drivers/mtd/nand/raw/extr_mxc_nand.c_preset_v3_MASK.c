
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct nand_chip {int options; TYPE_1__ ecc; int pagemask; } ;
struct mxc_nand_host {int eccsize; TYPE_2__* devtype_data; } ;
struct mtd_info {int oobsize; int writesize; int erasesize; } ;
struct TYPE_4__ {int ppb_shift; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ) ;
 int VAR_17 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mtd_info*) ;
 struct nand_chip* FUNC_11 (struct mtd_info*) ;
 struct mxc_nand_host* FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct mtd_info *VAR_25)
{
 struct nand_chip *VAR_26 = FUNC_11(VAR_25);
 struct mxc_nand_host *VAR_27 = FUNC_12(VAR_26);
 uint32_t VAR_28, VAR_29;
 int VAR_30, VAR_31;

 FUNC_13(FUNC_0(0), VAR_3);
 FUNC_13(VAR_20, VAR_19);


 FUNC_13(VAR_22 | VAR_23,
   VAR_21);


 for (VAR_30 = 0; VAR_30 < VAR_2; VAR_30++)
  FUNC_13(0xffff << 16, VAR_24 + (VAR_30 << 2));

 FUNC_13(0, VAR_19);

 VAR_28 = VAR_10 |
  VAR_5 |
  FUNC_3(VAR_25->oobsize >> 1) |
  FUNC_4(0x70) |
  VAR_8 |
  VAR_9;

 VAR_31 = FUNC_9(VAR_26->pagemask) >> 3;

 if (VAR_25->writesize == 2048) {
  VAR_28 |= VAR_11;
  VAR_28 |= FUNC_1(VAR_31);
 } else if (VAR_25->writesize == 4096) {
  VAR_28 |= VAR_12;
  VAR_28 |= FUNC_1(VAR_31);
 } else {
  VAR_28 |= VAR_13;
  VAR_28 |= FUNC_1(VAR_31 - 1);
 }

 if (VAR_25->writesize) {
  if (VAR_26->ecc.mode == VAR_1)
   VAR_28 |= VAR_6;

  VAR_28 |= FUNC_2(
    FUNC_8(VAR_25->erasesize / VAR_25->writesize) - 6,
    VAR_27->devtype_data->ppb_shift);
  VAR_27->eccsize = FUNC_10(VAR_25);
  if (VAR_27->eccsize == 8)
   VAR_28 |= VAR_7;
 }

 FUNC_13(VAR_28, VAR_4);

 VAR_29 = FUNC_6(0) |
   VAR_16 |
   VAR_17 |
   FUNC_7(6) |
   FUNC_5(0);

 if (!(VAR_26->options & VAR_0))
  VAR_29 |= VAR_15;

 FUNC_13(VAR_29, VAR_14);

 FUNC_13(0, VAR_18);
}
