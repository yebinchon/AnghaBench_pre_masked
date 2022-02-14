
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_nfc {scalar_t__ regs; } ;
struct nand_chip {int options; int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct sunxi_nfc* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_3)
{
 struct sunxi_nfc *VAR_4 = FUNC_1(VAR_3->controller);

 if (!(VAR_3->options & VAR_0))
  return;

 FUNC_2(FUNC_0(VAR_4->regs + VAR_2) | VAR_1,
        VAR_4->regs + VAR_2);
}
