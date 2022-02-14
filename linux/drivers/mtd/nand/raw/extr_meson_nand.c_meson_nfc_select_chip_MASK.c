
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct meson_nfc_nand_chip {int nsels; scalar_t__ clk_rate; int bus_timing; int tbers_max; int tadl; int twb; scalar_t__* sels; } ;
struct TYPE_4__ {int tbers_max; int tadl; int twb; } ;
struct TYPE_3__ {int chip_select; int rb_select; } ;
struct meson_nfc {scalar_t__ clk_rate; int bus_timing; scalar_t__ reg_base; int dev; int device_clk; TYPE_2__ timing; TYPE_1__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 struct meson_nfc* FUNC_3 (struct nand_chip*) ;
 struct meson_nfc_nand_chip* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_5, int VAR_6)
{
 struct meson_nfc_nand_chip *VAR_7 = FUNC_4(VAR_5);
 struct meson_nfc *VAR_8 = FUNC_3(VAR_5);
 int VAR_9, VAR_10;

 if (VAR_6 < 0 || FUNC_0(VAR_6 >= VAR_7->nsels))
  return;

 VAR_8->param.chip_select = VAR_7->sels[VAR_6] ? VAR_1 : VAR_0;
 VAR_8->param.rb_select = VAR_8->param.chip_select;
 VAR_8->timing.twb = VAR_7->twb;
 VAR_8->timing.tadl = VAR_7->tadl;
 VAR_8->timing.tbers_max = VAR_7->tbers_max;

 if (VAR_8->clk_rate != VAR_7->clk_rate) {
  VAR_9 = FUNC_1(VAR_8->device_clk, VAR_7->clk_rate);
  if (VAR_9) {
   FUNC_2(VAR_8->dev, "failed to set clock rate\n");
   return;
  }
  VAR_8->clk_rate = VAR_7->clk_rate;
 }
 if (VAR_8->bus_timing != VAR_7->bus_timing) {
  VAR_10 = (VAR_2 - 1) | (VAR_7->bus_timing << 5);
  FUNC_5(VAR_10, VAR_8->reg_base + VAR_3);
  FUNC_5((1 << 31), VAR_8->reg_base + VAR_4);
  VAR_8->bus_timing = VAR_7->bus_timing;
 }
}
