
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_fmc2_nfc {int complete; scalar_t__ io_base; } ;
struct TYPE_2__ {scalar_t__ strength; } ;
struct nand_chip {TYPE_1__ ecc; int controller; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stm32_fmc2_nfc*) ;
 int FUNC_3 (struct stm32_fmc2_nfc*,int) ;
 int FUNC_4 (struct stm32_fmc2_nfc*,int) ;
 struct stm32_fmc2_nfc* FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct nand_chip *VAR_4, int VAR_5)
{
 struct stm32_fmc2_nfc *VAR_6 = FUNC_5(VAR_4->controller);

 FUNC_4(VAR_6, 0);

 if (VAR_4->ecc.strength != VAR_0) {
  u32 VAR_7 = FUNC_0(VAR_6->io_base + VAR_1);

  if (VAR_5 == VAR_3)
   VAR_7 |= VAR_2;
  else
   VAR_7 &= ~VAR_2;
  FUNC_6(VAR_7, VAR_6->io_base + VAR_1);

  FUNC_1(&VAR_6->complete);
  FUNC_2(VAR_6);
  FUNC_3(VAR_6, VAR_5);
 }

 FUNC_4(VAR_6, 1);
}
