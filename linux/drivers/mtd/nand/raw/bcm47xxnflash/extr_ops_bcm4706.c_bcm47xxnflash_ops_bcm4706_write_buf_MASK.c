
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct bcm47xxnflash {int curr_command; } ;



 int FUNC_0 (int ,int const*,int) ;
 struct bcm47xxnflash* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_0,
      const uint8_t *VAR_1, int VAR_2)
{
 struct bcm47xxnflash *VAR_3 = FUNC_1(VAR_0);

 switch (VAR_3->curr_command) {
 case 128:
  FUNC_0(FUNC_2(VAR_0), VAR_1,
      VAR_2);
  return;
 }

 FUNC_3("Invalid command for buf write: 0x%X\n", VAR_3->curr_command);
}
