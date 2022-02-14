
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socrates_nand_host {int io_base; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct socrates_nand_host* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_1)
{
 struct socrates_nand_host *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2->io_base) & VAR_0)
  return 0;
 return 1;
}
