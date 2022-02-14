
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int oob_poi; } ;


 int FUNC_0 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, VAR_1, 0, ((void*)0), 0);
 FUNC_2(VAR_0, ((void*)0), VAR_0->oob_poi);
 return FUNC_1(VAR_0);
}
