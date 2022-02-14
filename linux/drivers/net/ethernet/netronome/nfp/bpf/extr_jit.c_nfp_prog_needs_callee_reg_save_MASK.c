
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {unsigned int subprog_cnt; TYPE_1__* subprog; } ;
struct TYPE_2__ {scalar_t__ needs_reg_push; } ;



__attribute__((used)) static bool FUNC_0(struct nfp_prog *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 1; VAR_1 < VAR_0->subprog_cnt; VAR_1++)
  if (VAR_0->subprog[VAR_1].needs_reg_push)
   return 1;

 return 0;
}
