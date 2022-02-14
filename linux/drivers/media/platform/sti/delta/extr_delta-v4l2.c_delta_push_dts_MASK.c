
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct delta_dts {int list; int val; } ;
struct delta_ctx {int dts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct delta_dts* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct delta_ctx *VAR_1, u64 VAR_2)
{
 struct delta_dts *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 FUNC_0(&VAR_3->list);





 VAR_3->val = VAR_2;
 FUNC_2(&VAR_3->list, &VAR_1->dts);
}
