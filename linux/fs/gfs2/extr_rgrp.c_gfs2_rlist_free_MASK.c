
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_rgrp_list {unsigned int rl_rgrps; int * rl_ghs; int * rl_rgd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct gfs2_rgrp_list *VAR_0)
{
 unsigned int VAR_1;

 FUNC_1(VAR_0->rl_rgd);

 if (VAR_0->rl_ghs) {
  for (VAR_1 = 0; VAR_1 < VAR_0->rl_rgrps; VAR_1++)
   FUNC_0(&VAR_0->rl_ghs[VAR_1]);
  FUNC_1(VAR_0->rl_ghs);
  VAR_0->rl_ghs = ((void*)0);
 }
}
