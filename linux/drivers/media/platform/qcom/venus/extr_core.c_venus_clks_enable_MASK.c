
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_resources {unsigned int clks_num; } ;
struct venus_core {int * clks; struct venus_resources* res; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct venus_core *VAR_0)
{
 const struct venus_resources *VAR_1 = VAR_0->res;
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->clks_num; VAR_2++) {
  VAR_3 = FUNC_1(VAR_0->clks[VAR_2]);
  if (VAR_3)
   goto err;
 }

 return 0;
err:
 while (VAR_2--)
  FUNC_0(VAR_0->clks[VAR_2]);

 return VAR_3;
}
