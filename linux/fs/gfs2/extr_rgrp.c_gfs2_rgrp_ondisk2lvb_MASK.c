
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_rgrp_lvb {unsigned long __pad; int rl_igeneration; int rl_dinodes; int rl_free; int rl_flags; int rl_magic; } ;
struct gfs2_rgrp {int rg_igeneration; int rg_dinodes; int rg_free; int rg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct gfs2_rgrp_lvb *VAR_1, const void *VAR_2)
{
 const struct gfs2_rgrp *VAR_3 = VAR_2;

 VAR_1->rl_magic = FUNC_0(VAR_0);
 VAR_1->rl_flags = VAR_3->rg_flags;
 VAR_1->rl_free = VAR_3->rg_free;
 VAR_1->rl_dinodes = VAR_3->rg_dinodes;
 VAR_1->rl_igeneration = VAR_3->rg_igeneration;
 VAR_1->__pad = 0UL;
}
