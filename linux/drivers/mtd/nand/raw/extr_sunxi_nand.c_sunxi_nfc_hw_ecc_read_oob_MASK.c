
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* read_page ) (struct nand_chip*,int *,int,int) ;} ;
struct nand_chip {TYPE_1__ ecc; } ;


 int * FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int *,int,int) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 u8 *VAR_2 = FUNC_0(VAR_0);

 return VAR_0->ecc.read_page(VAR_0, VAR_2, 1, VAR_1);
}
