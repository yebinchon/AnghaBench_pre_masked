
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct lpc32xx_nand_host {int dummy_buf; } ;


 int FUNC_0 (struct nand_chip*,int ,int,int) ;
 struct lpc32xx_nand_host* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 struct lpc32xx_nand_host *VAR_2 = FUNC_1(VAR_0);


 FUNC_0(VAR_0, VAR_2->dummy_buf, 1, VAR_1);

 return 0;
}
