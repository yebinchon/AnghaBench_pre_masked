
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stm32_fmc2_nfc {scalar_t__ io_base; int dev; } ;
struct nand_chip {int controller; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct stm32_fmc2_nfc*,int) ;
 struct stm32_fmc2_nfc* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_4, const u8 *VAR_5,
        u8 *VAR_6)
{
 struct stm32_fmc2_nfc *VAR_7 = FUNC_5(VAR_4->controller);
 u32 VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_7->io_base + VAR_1,
      VAR_8, VAR_8 & VAR_2, 10,
      VAR_3);
 if (VAR_10) {
  FUNC_0(VAR_7->dev, "ham timeout\n");
  return VAR_10;
 }

 VAR_9 = FUNC_1(VAR_7->io_base + VAR_0);

 FUNC_3(VAR_9, VAR_6);


 FUNC_4(VAR_7, 0);

 return 0;
}
