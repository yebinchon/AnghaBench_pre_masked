
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_nfc {scalar_t__ clk_rate; scalar_t__ regs; int mod_clk; } ;
struct sunxi_nand_chip_sel {scalar_t__ rb; int cs; } ;
struct TYPE_2__ {int controller; } ;
struct sunxi_nand_chip {unsigned int nsels; scalar_t__ clk_rate; int timing_ctl; int timing_cfg; struct sunxi_nand_chip_sel* sels; TYPE_1__ nand; } ;
struct nand_chip {int page_shift; } ;
struct mtd_info {int writesize; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,scalar_t__) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (scalar_t__) ;
 struct sunxi_nand_chip* FUNC_6 (struct nand_chip*) ;
 struct sunxi_nfc* FUNC_7 (int ) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct nand_chip *VAR_8, unsigned int VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_4(VAR_8);
 struct sunxi_nand_chip *VAR_11 = FUNC_6(VAR_8);
 struct sunxi_nfc *VAR_12 = FUNC_7(VAR_11->nand.controller);
 struct sunxi_nand_chip_sel *VAR_13;
 u32 VAR_14;

 if (VAR_9 > 0 && VAR_9 >= VAR_11->nsels)
  return;

 VAR_14 = FUNC_5(VAR_12->regs + VAR_4) &
       ~(VAR_2 | VAR_0 | VAR_3 | VAR_1);

 VAR_13 = &VAR_11->sels[VAR_9];
 VAR_14 |= FUNC_0(VAR_13->cs) | VAR_1 | FUNC_1(VAR_8->page_shift);
 if (VAR_13->rb >= 0)
  VAR_14 |= FUNC_2(VAR_13->rb);

 FUNC_8(VAR_10->writesize, VAR_12->regs + VAR_5);

 if (VAR_12->clk_rate != VAR_11->clk_rate) {
  FUNC_3(VAR_12->mod_clk, VAR_11->clk_rate);
  VAR_12->clk_rate = VAR_11->clk_rate;
 }

 FUNC_8(VAR_11->timing_ctl, VAR_12->regs + VAR_7);
 FUNC_8(VAR_11->timing_cfg, VAR_12->regs + VAR_6);
 FUNC_8(VAR_14, VAR_12->regs + VAR_4);
}
