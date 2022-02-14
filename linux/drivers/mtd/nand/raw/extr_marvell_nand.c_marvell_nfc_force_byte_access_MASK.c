
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int options; int controller; } ;
struct marvell_nfc {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct marvell_nfc* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_4,
       bool VAR_5)
{
 struct marvell_nfc *VAR_6 = FUNC_1(VAR_4->controller);
 u32 VAR_7;







 if (!(VAR_4->options & VAR_0))
  return;

 VAR_7 = FUNC_0(VAR_6->regs + VAR_1);

 if (VAR_5)
  VAR_7 &= ~(VAR_3 | VAR_2);
 else
  VAR_7 |= VAR_3 | VAR_2;

 FUNC_2(VAR_7, VAR_6->regs + VAR_1);
}
