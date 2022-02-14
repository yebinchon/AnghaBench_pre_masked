
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct ingenic_nfc {size_t selected; TYPE_2__* soc_info; int dev; struct ingenic_nand_cs* cs; } ;
struct ingenic_nand_cs {scalar_t__ base; int bank; } ;
struct TYPE_3__ {int controller; } ;
struct ingenic_nand {TYPE_1__ chip; } ;
struct TYPE_4__ {scalar_t__ cmd_offset; scalar_t__ addr_offset; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (struct nand_chip*) ;
 struct ingenic_nand* FUNC_3 (int ) ;
 struct ingenic_nfc* FUNC_4 (int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_4, int VAR_5,
      unsigned int VAR_6)
{
 struct ingenic_nand *VAR_7 = FUNC_3(FUNC_2(VAR_4));
 struct ingenic_nfc *VAR_8 = FUNC_4(VAR_7->chip.controller);
 struct ingenic_nand_cs *VAR_9;

 if (FUNC_0(VAR_8->selected < 0))
  return;

 VAR_9 = &VAR_8->cs[VAR_8->selected];

 FUNC_1(VAR_8->dev, VAR_9->bank, VAR_6 & VAR_3);

 if (VAR_5 == VAR_2)
  return;

 if (VAR_6 & VAR_0)
  FUNC_5(VAR_5, VAR_9->base + VAR_8->soc_info->addr_offset);
 else if (VAR_6 & VAR_1)
  FUNC_5(VAR_5, VAR_9->base + VAR_8->soc_info->cmd_offset);
}
