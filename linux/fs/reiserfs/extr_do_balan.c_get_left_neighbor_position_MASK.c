
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int ** FL; int tb_path; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int,char*,int,int *,int,int *) ;

int FUNC_4(struct tree_balance *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->tb_path, VAR_1 + 1);

 FUNC_3(FUNC_2(VAR_0->tb_path, VAR_1) == ((void*)0) || VAR_0->FL[VAR_1] == ((void*)0),
        "vs-12325: FL[%d](%p) or F[%d](%p) does not exist",
        VAR_1, VAR_0->FL[VAR_1], VAR_1, FUNC_2(VAR_0->tb_path, VAR_1));

 if (VAR_2 == 0)
  return FUNC_0(VAR_0->FL[VAR_1]);
 else
  return VAR_2 - 1;
}
