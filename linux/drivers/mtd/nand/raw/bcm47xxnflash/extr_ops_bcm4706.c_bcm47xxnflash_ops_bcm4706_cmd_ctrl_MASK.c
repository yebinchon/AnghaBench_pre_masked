
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int dummy; } ;
struct bcm47xxnflash {int cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 struct bcm47xxnflash* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_5,
            int VAR_6, unsigned int VAR_7)
{
 struct bcm47xxnflash *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9 = 0;

 if (VAR_6 == VAR_0)
  return;

 if (VAR_6 & VAR_2)
  VAR_9 = VAR_6 | VAR_3;


 if (VAR_6 != VAR_1)
  VAR_9 |= VAR_4;

 FUNC_0(VAR_8->cc, VAR_9);
}
