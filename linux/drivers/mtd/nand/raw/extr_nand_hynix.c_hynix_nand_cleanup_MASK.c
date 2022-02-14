
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct hynix_nand {struct hynix_nand* read_retry; } ;


 int FUNC_0 (struct hynix_nand*) ;
 struct hynix_nand* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int *) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0)
{
 struct hynix_nand *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return;

 FUNC_0(VAR_1->read_retry);
 FUNC_0(VAR_1);
 FUNC_2(VAR_0, ((void*)0));
}
