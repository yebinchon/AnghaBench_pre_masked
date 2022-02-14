
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_resources {unsigned int clks_num; } ;
struct venus_core {int * clks; struct venus_resources* res; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct venus_core *VAR_0)
{
 const struct venus_resources *VAR_1 = VAR_0->res;
 unsigned int VAR_2 = VAR_1->clks_num;

 while (VAR_2--)
  FUNC_0(VAR_0->clks[VAR_2]);
}
