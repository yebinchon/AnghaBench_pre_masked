
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_nfc {scalar_t__ regs; } ;
struct nand_chip {int controller; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct sunxi_nfc* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_2)
{
 struct sunxi_nfc *VAR_3 = FUNC_1(VAR_2->controller);

 FUNC_2(FUNC_0(VAR_3->regs + VAR_1) & ~VAR_0,
        VAR_3->regs + VAR_1);
}
