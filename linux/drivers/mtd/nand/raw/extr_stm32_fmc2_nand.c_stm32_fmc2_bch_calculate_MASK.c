
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct stm32_fmc2_nfc {scalar_t__ io_base; int dev; int complete; } ;
struct TYPE_2__ {scalar_t__ strength; } ;
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
 int FUNC_3 (struct stm32_fmc2_nfc*) ;
 int FUNC_4 (struct stm32_fmc2_nfc*,int) ;
 struct stm32_fmc2_nfc* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_7, const u8 *VAR_8,
        u8 *VAR_9)
{
 struct stm32_fmc2_nfc *VAR_10 = FUNC_5(VAR_7->controller);
 u32 VAR_11;


 if (!FUNC_6(&VAR_10->complete,
      FUNC_1(VAR_6))) {
  FUNC_0(VAR_10->dev, "bch timeout\n");
  FUNC_3(VAR_10);
  return -VAR_0;
 }


 VAR_11 = FUNC_2(VAR_10->io_base + VAR_1);
 VAR_9[0] = VAR_11;
 VAR_9[1] = VAR_11 >> 8;
 VAR_9[2] = VAR_11 >> 16;
 VAR_9[3] = VAR_11 >> 24;

 VAR_11 = FUNC_2(VAR_10->io_base + VAR_2);
 VAR_9[4] = VAR_11;
 VAR_9[5] = VAR_11 >> 8;
 VAR_9[6] = VAR_11 >> 16;

 if (VAR_7->ecc.strength == VAR_5) {
  VAR_9[7] = VAR_11 >> 24;

  VAR_11 = FUNC_2(VAR_10->io_base + VAR_3);
  VAR_9[8] = VAR_11;
  VAR_9[9] = VAR_11 >> 8;
  VAR_9[10] = VAR_11 >> 16;
  VAR_9[11] = VAR_11 >> 24;

  VAR_11 = FUNC_2(VAR_10->io_base + VAR_4);
  VAR_9[12] = VAR_11;
 }


 FUNC_4(VAR_10, 0);

 return 0;
}
