
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int chip_delay; int dev_ready; int cmd_ctrl; int select_chip; } ;
struct nand_chip {TYPE_2__ legacy; } ;
struct TYPE_11__ {int mode; } ;
struct TYPE_9__ {void* get_features; void* set_features; int write_buf; int read_buf; int read_byte; int cmdfunc; } ;
struct TYPE_12__ {int page_shift; int base; TYPE_3__ ecc; int bbt_options; TYPE_1__ legacy; } ;
struct bcm47xxnflash {TYPE_5__* cc; TYPE_4__ nand_chip; } ;
struct TYPE_13__ {int status; } ;


 int VAR_0 ;
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
 int FUNC_0 (int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 void* VAR_15 ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,unsigned long) ;

int FUNC_10(struct bcm47xxnflash *VAR_16)
{
 struct nand_chip *VAR_17 = (struct nand_chip *)&VAR_16->nand_chip;
 int VAR_18;
 u32 VAR_19;
 u16 VAR_20;
 u8 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 unsigned long VAR_26;
 u8 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 u32 VAR_32;

 VAR_17->legacy.select_chip = VAR_13;
 VAR_17->legacy.cmd_ctrl = VAR_8;
 VAR_17->legacy.dev_ready = VAR_10;
 VAR_16->nand_chip.legacy.cmdfunc = VAR_9;
 VAR_16->nand_chip.legacy.read_byte = VAR_12;
 VAR_16->nand_chip.legacy.read_buf = VAR_11;
 VAR_16->nand_chip.legacy.write_buf = VAR_14;
 VAR_16->nand_chip.legacy.set_features = VAR_15;
 VAR_16->nand_chip.legacy.get_features = VAR_15;

 VAR_17->legacy.chip_delay = 50;
 VAR_16->nand_chip.bbt_options = VAR_6;
 VAR_16->nand_chip.ecc.mode = VAR_7;


 FUNC_2(VAR_16->cc, VAR_0,
        VAR_1);


 if (VAR_16->cc->status & VAR_2) {

  VAR_19 = 400000000 / 4;
 } else {
  VAR_19 = FUNC_4(VAR_16->cc, 4);
  VAR_19 = (VAR_19 & 0xFFF) >> 3;

  VAR_19 = (VAR_19 * 25000000 / 2) / 4;
 }
 VAR_20 = VAR_19 / 1000000;
 VAR_21 = FUNC_0(15, VAR_20);
 VAR_22 = FUNC_0(20, VAR_20);
 VAR_23 = FUNC_0(10, VAR_20);
 VAR_24 = FUNC_0(10, VAR_20);
 VAR_25 = FUNC_0(100, VAR_20);
 FUNC_3(VAR_16->cc, VAR_4,
   (VAR_25 << 24 | VAR_24 << 18 | VAR_23 << 12 | VAR_22 << 6 | VAR_21));


 VAR_18 = FUNC_7(&VAR_16->nand_chip, 1);
 if (VAR_18) {
  FUNC_9("Could not scan NAND flash: %d\n", VAR_18);
  goto exit;
 }


 VAR_26 = FUNC_8(&VAR_16->nand_chip.base) >> 20;
 VAR_27 = FUNC_5(VAR_26);
 if (!VAR_27 || VAR_27 != FUNC_6(VAR_26)) {
  FUNC_9("Invalid flash size: 0x%lX\n", VAR_26);
  VAR_18 = -VAR_5;
  goto exit;
 }
 VAR_27 += 19;

 VAR_28 = VAR_16->nand_chip.page_shift + 1;
 VAR_29 = (VAR_28 + 7) / 8;

 VAR_30 = VAR_27 - VAR_28 + 1;
 VAR_31 = (VAR_30 + 7) / 8;

 VAR_32 = ((VAR_31 - 1) << 6) | ((VAR_29 - 1) << 4) | 2;
 FUNC_3(VAR_16->cc, VAR_3, VAR_32);

exit:
 if (VAR_18)
  FUNC_1(VAR_16->cc, VAR_0,
          ~VAR_1);
 return VAR_18;
}
