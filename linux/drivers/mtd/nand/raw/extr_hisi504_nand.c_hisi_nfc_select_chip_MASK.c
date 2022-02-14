
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct hinfc_host {int chipselect; } ;


 struct hinfc_host* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_0, int VAR_1)
{
 struct hinfc_host *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 < 0)
  return;

 VAR_2->chipselect = VAR_1;
}
