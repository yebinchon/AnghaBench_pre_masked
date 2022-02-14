
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*,void*,int) ;
 int FUNC_1 (struct nand_chip*,void*,int) ;
 int FUNC_2 (struct nand_chip*,int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_1, void *VAR_2, void *VAR_3,
      int VAR_4)
{
 int VAR_5;

 if (!VAR_2 && !VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_1, VAR_4, 0, ((void*)0), 0);
 if (VAR_5)
  return VAR_5;

 if (VAR_2) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, 0);
  if (VAR_5)
   return VAR_5;
 }

 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_1, VAR_3, 0);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
