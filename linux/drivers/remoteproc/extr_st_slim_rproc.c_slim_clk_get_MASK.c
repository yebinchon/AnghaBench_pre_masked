
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_slim_rproc {int ** clks; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct st_slim_rproc *VAR_2, struct device *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_2->clks[VAR_4] = FUNC_3(VAR_3->of_node, VAR_4);
  if (FUNC_0(VAR_2->clks[VAR_4])) {
   VAR_5 = FUNC_1(VAR_2->clks[VAR_4]);
   if (VAR_5 == -VAR_0)
    goto err_put_clks;
   VAR_2->clks[VAR_4] = ((void*)0);
   break;
  }
 }

 return 0;

err_put_clks:
 while (--VAR_4 >= 0)
  FUNC_2(VAR_2->clks[VAR_4]);

 return VAR_5;
}
