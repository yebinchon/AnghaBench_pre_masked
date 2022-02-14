
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct cam_clk {TYPE_1__* fmd; } ;
struct TYPE_2__ {int * pmf; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cam_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct cam_clk *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (VAR_2->fmd->pmf == ((void*)0))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2->fmd->pmf);
 return VAR_3 < 0 ? VAR_3 : 0;
}
