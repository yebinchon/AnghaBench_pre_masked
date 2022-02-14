
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct TYPE_4__ {int IO_ADDR_W; int IO_ADDR_R; } ;
struct TYPE_3__ {TYPE_2__ legacy; } ;
struct davinci_nand_info {TYPE_1__ chip; int current_cs; scalar_t__ mask_chipsel; int vaddr; } ;


 int FUNC_0 (struct nand_chip*) ;
 struct davinci_nand_info* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 struct davinci_nand_info *VAR_2 = FUNC_1(FUNC_0(VAR_0));

 VAR_2->current_cs = VAR_2->vaddr;


 if (VAR_1 > 0)
  VAR_2->current_cs += VAR_2->mask_chipsel;

 VAR_2->chip.legacy.IO_ADDR_W = VAR_2->current_cs;
 VAR_2->chip.legacy.IO_ADDR_R = VAR_2->chip.legacy.IO_ADDR_W;
}
