
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_nfc {scalar_t__ regs; } ;
struct sunxi_nand_hw_ecc {int mode; } ;
struct TYPE_2__ {int size; struct sunxi_nand_hw_ecc* priv; } ;
struct nand_chip {TYPE_1__ ecc; int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 struct sunxi_nfc* FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_7)
{
 struct sunxi_nfc *VAR_8 = FUNC_2(VAR_7->controller);
 struct sunxi_nand_hw_ecc *VAR_9 = VAR_7->ecc.priv;
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_8->regs + VAR_6);
 VAR_10 &= ~(VAR_4 | VAR_5 |
       VAR_1);
 VAR_10 |= VAR_2 | FUNC_0(VAR_9->mode) | VAR_3 |
     VAR_5;

 if (VAR_7->ecc.size == 512)
  VAR_10 |= VAR_0;

 FUNC_3(VAR_10, VAR_8->regs + VAR_6);
}
