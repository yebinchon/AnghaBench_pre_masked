
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int controller; } ;
struct marvell_nfc {struct nand_chip* selected_chip; scalar_t__ regs; } ;
struct marvell_nand_chip {int ndcr; unsigned int selected_die; int ndtr0; int ndtr1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct marvell_nfc*,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct marvell_nand_chip* FUNC_2 (struct nand_chip*) ;
 struct marvell_nfc* FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_6,
          unsigned int VAR_7)
{
 struct marvell_nand_chip *VAR_8 = FUNC_2(VAR_6);
 struct marvell_nfc *VAR_9 = FUNC_3(VAR_6->controller);
 u32 VAR_10;





 VAR_10 = FUNC_1(VAR_9->regs + VAR_0) &
         VAR_2 & ~VAR_3;
 FUNC_4(VAR_10 | VAR_8->ndcr, VAR_9->regs + VAR_0);


 FUNC_0(VAR_9, VAR_1);

 if (VAR_6 == VAR_9->selected_chip && VAR_7 == VAR_8->selected_die)
  return;

 FUNC_4(VAR_8->ndtr0, VAR_9->regs + VAR_4);
 FUNC_4(VAR_8->ndtr1, VAR_9->regs + VAR_5);

 VAR_9->selected_chip = VAR_6;
 VAR_8->selected_die = VAR_7;
}
