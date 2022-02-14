
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int strength; int size; int steps; } ;
struct nand_chip {int phys_erase_shift; int page_shift; int options; TYPE_1__ ecc; } ;
struct mtd_info {int writesize; int oobsize; } ;
struct denali_controller {scalar_t__ reg; int active_bank; } ;
struct denali_chip_sel {int hwhr2_and_we_2_re; int tcwaw_and_addr_2_data; int re_2_we; int acc_clks; int rdwr_en_lo_cnt; int rdwr_en_hi_cnt; int cs_setup_cnt; int re_2_re; int bank; } ;
struct TYPE_4__ {struct denali_chip_sel* sels; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int,scalar_t__) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 TYPE_2__* FUNC_3 (struct nand_chip*) ;
 struct denali_controller* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_23, int VAR_24)
{
 struct denali_controller *VAR_25 = FUNC_4(VAR_23);
 struct denali_chip_sel *VAR_26 = &FUNC_3(VAR_23)->sels[VAR_24];
 struct mtd_info *VAR_27 = FUNC_2(VAR_23);

 VAR_25->active_bank = VAR_26->bank;

 FUNC_1(1 << (VAR_23->phys_erase_shift - VAR_23->page_shift),
    VAR_25->reg + VAR_14);
 FUNC_1(VAR_23->options & VAR_11 ? 1 : 0,
    VAR_25->reg + VAR_7);
 FUNC_1(VAR_27->writesize, VAR_25->reg + VAR_5);
 FUNC_1(VAR_27->oobsize, VAR_25->reg + VAR_6);
 FUNC_1(VAR_23->options & VAR_13 ?
    0 : VAR_22,
    VAR_25->reg + VAR_21);
 FUNC_1(FUNC_0(VAR_9, 1) |
    FUNC_0(VAR_10, VAR_23->ecc.strength),
    VAR_25->reg + VAR_8);
 FUNC_1(VAR_23->ecc.size, VAR_25->reg + VAR_1);
 FUNC_1(VAR_23->ecc.size, VAR_25->reg + VAR_2);
 FUNC_1(VAR_23->ecc.steps, VAR_25->reg + VAR_3);

 if (VAR_23->options & VAR_12)
  return;


 FUNC_1(VAR_26->hwhr2_and_we_2_re, VAR_25->reg + VAR_20);
 FUNC_1(VAR_26->tcwaw_and_addr_2_data,
    VAR_25->reg + VAR_19);
 FUNC_1(VAR_26->re_2_we, VAR_25->reg + VAR_18);
 FUNC_1(VAR_26->acc_clks, VAR_25->reg + VAR_0);
 FUNC_1(VAR_26->rdwr_en_lo_cnt, VAR_25->reg + VAR_16);
 FUNC_1(VAR_26->rdwr_en_hi_cnt, VAR_25->reg + VAR_15);
 FUNC_1(VAR_26->cs_setup_cnt, VAR_25->reg + VAR_4);
 FUNC_1(VAR_26->re_2_re, VAR_25->reg + VAR_17);
}
