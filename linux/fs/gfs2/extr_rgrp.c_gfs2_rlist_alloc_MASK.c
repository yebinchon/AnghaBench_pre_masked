
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_rgrp_list {unsigned int rl_rgrps; int * rl_ghs; TYPE_1__** rl_rgd; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_2__ {int rd_gl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int * FUNC_1 (unsigned int,int,int) ;

void FUNC_2(struct gfs2_rgrp_list *VAR_3)
{
 unsigned int VAR_4;

 VAR_3->rl_ghs = FUNC_1(VAR_3->rl_rgrps,
          sizeof(struct gfs2_holder),
          VAR_0 | VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3->rl_rgrps; VAR_4++)
  FUNC_0(VAR_3->rl_rgd[VAR_4]->rd_gl,
    VAR_1, 0,
    &VAR_3->rl_ghs[VAR_4]);
}
