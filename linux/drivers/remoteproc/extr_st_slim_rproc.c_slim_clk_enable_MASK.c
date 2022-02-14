
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_slim_rproc {scalar_t__* clks; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct st_slim_rproc *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0 && VAR_1->clks[VAR_2]; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1->clks[VAR_2]);
  if (VAR_3)
   goto err_disable_clks;
 }

 return 0;

err_disable_clks:
 while (--VAR_2 >= 0)
  FUNC_0(VAR_1->clks[VAR_2]);

 return VAR_3;
}
