
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sunxi_nfc {scalar_t__ regs; } ;
struct nand_chip {int options; int controller; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nand_chip*,int,int *) ;
 int FUNC_3 (int ,int *) ;
 struct sunxi_nfc* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_1, u8 *VAR_2,
      int VAR_3, bool VAR_4, int VAR_5)
{
 struct sunxi_nfc *VAR_6 = FUNC_4(VAR_1->controller);

 FUNC_3(FUNC_1(VAR_6->regs + FUNC_0(VAR_3)),
       VAR_2);


 if (VAR_4 && (VAR_1->options & VAR_0))
  FUNC_2(VAR_1, VAR_5, VAR_2);
}
