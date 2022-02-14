
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_resources {unsigned int clks_num; int * clks; } ;
struct venus_core {int * clks; struct device* dev; struct venus_resources* res; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int ) ;

__attribute__((used)) static int FUNC_3(struct venus_core *VAR_0)
{
 const struct venus_resources *VAR_1 = VAR_0->res;
 struct device *VAR_2 = VAR_0->dev;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->clks_num; VAR_3++) {
  VAR_0->clks[VAR_3] = FUNC_2(VAR_2, VAR_1->clks[VAR_3]);
  if (FUNC_0(VAR_0->clks[VAR_3]))
   return FUNC_1(VAR_0->clks[VAR_3]);
 }

 return 0;
}
