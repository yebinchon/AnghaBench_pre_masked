
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sunxi_nfc {scalar_t__ regs; } ;
struct nand_chip {int options; int controller; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nand_chip*,int,int) ;
 struct sunxi_nfc* FUNC_3 (int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_3, int VAR_4,
     bool VAR_5)
{
 struct sunxi_nfc *VAR_6 = FUNC_3(VAR_3->controller);
 u32 VAR_7 = FUNC_1(VAR_6->regs + VAR_2);
 u16 VAR_8;

 if (!(VAR_3->options & VAR_0))
  return;

 VAR_7 = FUNC_1(VAR_6->regs + VAR_2);
 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5);
 VAR_7 = FUNC_1(VAR_6->regs + VAR_2) & ~VAR_1;
 FUNC_4(VAR_7 | FUNC_0(VAR_8), VAR_6->regs + VAR_2);
}
