
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct bcm47xxnflash {int cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct bcm47xxnflash* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_2)
{
 struct bcm47xxnflash *VAR_3 = FUNC_1(VAR_2);

 return !!(FUNC_0(VAR_3->cc, VAR_0) & VAR_1);
}
