
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
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int const*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct sunxi_nfc*) ;
 int FUNC_3 (struct sunxi_nfc*,int ,int,int ) ;
 struct sunxi_nand_chip* FUNC_4 (struct nand_chip*) ;
 struct sunxi_nfc* FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct nand_chip *VAR_8, const uint8_t *VAR_9,
    int VAR_10)
{
 struct sunxi_nand_chip *VAR_11 = FUNC_4(VAR_8);
 struct sunxi_nfc *VAR_12 = FUNC_5(VAR_11->nand.controller);
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 u32 VAR_16;

 while (VAR_10 > VAR_15) {
  bool VAR_17 = 0;

  VAR_14 = FUNC_1(VAR_10 - VAR_15, VAR_7);

  VAR_13 = FUNC_2(VAR_12);
  if (VAR_13)
   break;

  FUNC_6(VAR_14, VAR_12->regs + VAR_6);
  FUNC_0(VAR_12->regs + VAR_4, VAR_9 + VAR_15, VAR_14);
  VAR_16 = VAR_3 | VAR_2 |
        VAR_0;
  FUNC_6(VAR_16, VAR_12->regs + VAR_5);


  if (VAR_14 < 64)
   VAR_17 = 1;

  VAR_13 = FUNC_3(VAR_12, VAR_1, VAR_17, 0);
  if (VAR_13)
   break;

  VAR_15 += VAR_14;
 }
}
