
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct marvell_nand_chip {int dummy; } ;
struct TYPE_2__ {int ndcb0_csel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*,int,char*) ;
 struct marvell_nand_chip* FUNC_2 (struct nand_chip*) ;
 TYPE_1__* FUNC_3 (struct marvell_nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0)
{
 struct marvell_nand_chip *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = FUNC_0(FUNC_3(VAR_1)->ndcb0_csel);

 return FUNC_1(VAR_0, VAR_2, "CMDD");
}
