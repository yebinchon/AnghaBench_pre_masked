
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_fmc2_nfc {scalar_t__ io_base; } ;
struct TYPE_2__ {scalar_t__ strength; } ;
struct nand_chip {int options; TYPE_1__ ecc; int controller; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 struct stm32_fmc2_nfc* FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_10)
{
 struct stm32_fmc2_nfc *VAR_11 = FUNC_3(VAR_10->controller);
 u32 VAR_12 = FUNC_2(VAR_11->io_base + VAR_2);


 VAR_12 &= ~VAR_4;
 VAR_12 &= ~VAR_3;
 if (VAR_10->ecc.strength == VAR_1) {
  VAR_12 |= VAR_4;
  VAR_12 |= VAR_3;
 } else if (VAR_10->ecc.strength == VAR_0) {
  VAR_12 |= VAR_4;
 }


 VAR_12 &= ~VAR_8;
 if (VAR_10->options & VAR_9)
  VAR_12 |= FUNC_1(VAR_7);


 VAR_12 &= ~VAR_6;
 VAR_12 |= FUNC_0(VAR_5);

 FUNC_4(VAR_12, VAR_11->io_base + VAR_2);
}
