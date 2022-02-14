
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_slim_rproc {int rproc; scalar_t__* clks; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct st_slim_rproc*) ;

void FUNC_4(struct st_slim_rproc *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 FUNC_3(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0 && VAR_1->clks[VAR_2]; VAR_2++)
  FUNC_0(VAR_1->clks[VAR_2]);

 FUNC_1(VAR_1->rproc);
 FUNC_2(VAR_1->rproc);
}
