
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct sunxi_nfc {scalar_t__ regs; } ;
struct TYPE_2__ {int controller; } ;
struct sunxi_nand_chip {TYPE_1__ nand; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct sunxi_nfc*) ;
 int FUNC_3 (struct sunxi_nfc*,int ,int,int ) ;
 struct sunxi_nand_chip* FUNC_4 (struct nand_chip*) ;
 struct sunxi_nfc* FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct nand_chip *VAR_7, uint8_t *VAR_8, int VAR_9)
{
 struct sunxi_nand_chip *VAR_10 = FUNC_4(VAR_7);
 struct sunxi_nfc *VAR_11 = FUNC_5(VAR_10->nand.controller);
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 u32 VAR_15;

 while (VAR_9 > VAR_14) {
  bool VAR_16 = 0;

  VAR_13 = FUNC_1(VAR_9 - VAR_14, VAR_6);

  VAR_12 = FUNC_2(VAR_11);
  if (VAR_12)
   break;

  FUNC_6(VAR_13, VAR_11->regs + VAR_5);
  VAR_15 = VAR_2 | VAR_1;
  FUNC_6(VAR_15, VAR_11->regs + VAR_4);


  if (VAR_13 < 64)
   VAR_16 = 1;

  VAR_12 = FUNC_3(VAR_11, VAR_0, VAR_16, 0);
  if (VAR_12)
   break;

  if (VAR_8)
   FUNC_0(VAR_8 + VAR_14, VAR_11->regs + VAR_3,
          VAR_13);
  VAR_14 += VAR_13;
 }
}
