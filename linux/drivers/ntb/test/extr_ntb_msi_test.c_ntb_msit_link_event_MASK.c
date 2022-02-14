
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_msit_ctx {int setup_work; int ntb; } ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct ntb_msit_ctx *VAR_1 = VAR_0;

 if (!FUNC_0(VAR_1->ntb, ((void*)0), ((void*)0)))
  return;

 FUNC_1(&VAR_1->setup_work);
}
