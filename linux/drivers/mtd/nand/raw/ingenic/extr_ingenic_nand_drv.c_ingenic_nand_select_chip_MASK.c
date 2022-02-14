
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct ingenic_nfc {size_t selected; int dev; struct ingenic_nand_cs* cs; } ;
struct ingenic_nand_cs {int bank; } ;
struct TYPE_2__ {int controller; } ;
struct ingenic_nand {TYPE_1__ chip; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct nand_chip*) ;
 struct ingenic_nand* FUNC_2 (int ) ;
 struct ingenic_nfc* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_0, int VAR_1)
{
 struct ingenic_nand *VAR_2 = FUNC_2(FUNC_1(VAR_0));
 struct ingenic_nfc *VAR_3 = FUNC_3(VAR_2->chip.controller);
 struct ingenic_nand_cs *VAR_4;


 if (VAR_1 == -1 && VAR_3->selected >= 0) {
  VAR_4 = &VAR_3->cs[VAR_3->selected];
  FUNC_0(VAR_3->dev, VAR_4->bank, 0);
 }

 VAR_3->selected = VAR_1;
}
