
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nand_chip {int page_shift; int oob_poi; } ;


 int FUNC_0 (int ,struct nand_chip*,int,int *,int ) ;
 int FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, int VAR_1)
{
 return FUNC_0(FUNC_1(VAR_0), VAR_0,
         (u64)VAR_1 << VAR_0->page_shift, ((void*)0),
         VAR_0->oob_poi);
}
