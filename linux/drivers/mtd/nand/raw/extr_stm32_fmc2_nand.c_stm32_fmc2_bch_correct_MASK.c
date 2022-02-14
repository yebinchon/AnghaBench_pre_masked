
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stm32_fmc2_nfc {scalar_t__ io_base; int dev; int complete; } ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; int controller; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (struct stm32_fmc2_nfc*) ;
 int FUNC_5 (struct stm32_fmc2_nfc*,int) ;
 struct stm32_fmc2_nfc* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_7, u8 *VAR_8,
      u8 *VAR_9, u8 *VAR_10)
{
 struct stm32_fmc2_nfc *VAR_11 = FUNC_6(VAR_7->controller);
 u32 VAR_12[5];


 if (!FUNC_7(&VAR_11->complete,
      FUNC_1(VAR_6))) {
  FUNC_0(VAR_11->dev, "bch timeout\n");
  FUNC_4(VAR_11);
  return -VAR_0;
 }

 VAR_12[0] = FUNC_2(VAR_11->io_base + VAR_1);
 VAR_12[1] = FUNC_2(VAR_11->io_base + VAR_2);
 VAR_12[2] = FUNC_2(VAR_11->io_base + VAR_3);
 VAR_12[3] = FUNC_2(VAR_11->io_base + VAR_4);
 VAR_12[4] = FUNC_2(VAR_11->io_base + VAR_5);


 FUNC_5(VAR_11, 0);

 return FUNC_3(VAR_7->ecc.size, VAR_8, VAR_12);
}
