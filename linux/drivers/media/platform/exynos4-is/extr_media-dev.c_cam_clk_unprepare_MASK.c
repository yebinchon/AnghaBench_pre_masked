
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct cam_clk {TYPE_1__* fmd; } ;
struct TYPE_2__ {int * pmf; } ;


 int FUNC_0 (int *) ;
 struct cam_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct cam_clk *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->fmd->pmf == ((void*)0))
  return;

 FUNC_0(VAR_1->fmd->pmf);
}
