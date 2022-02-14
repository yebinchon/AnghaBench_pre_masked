
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ algo; } ;
struct nand_chip {TYPE_1__ ecc; int controller; } ;
struct marvell_nfc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct marvell_nfc* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_4)
{
 struct marvell_nfc *VAR_5 = FUNC_1(VAR_4->controller);
 u32 VAR_6 = FUNC_0(VAR_5->regs + VAR_1);

 if (VAR_6 & VAR_2) {
  FUNC_2(VAR_6 & ~VAR_2, VAR_5->regs + VAR_1);
  if (VAR_4->ecc.algo == VAR_0)
   FUNC_2(0, VAR_5->regs + VAR_3);
 }
}
