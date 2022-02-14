
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int dummy; } ;
struct gfs2_rgrp_list {int rl_rgrps; int rl_space; struct gfs2_rgrpd** rl_rgd; int rl_ghs; } ;
struct TYPE_3__ {struct gfs2_rgrpd* rgd; } ;
struct TYPE_4__ {TYPE_1__ rs_rbm; } ;
struct gfs2_inode {TYPE_2__ i_res; int i_inode; } ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct gfs2_sbd*,char*,unsigned long long) ;
 scalar_t__ FUNC_2 (struct gfs2_sbd*,int) ;
 struct gfs2_rgrpd* FUNC_3 (struct gfs2_sbd*,scalar_t__,int) ;
 struct gfs2_rgrpd** FUNC_4 (unsigned int,int,int) ;
 int FUNC_5 (struct gfs2_rgrpd**) ;
 int FUNC_6 (struct gfs2_rgrpd**,struct gfs2_rgrpd**,int) ;
 scalar_t__ FUNC_7 (struct gfs2_rgrpd*,scalar_t__) ;
 int FUNC_8 (struct gfs2_rgrpd*,struct gfs2_rgrpd*) ;

void FUNC_9(struct gfs2_inode *VAR_2, struct gfs2_rgrp_list *VAR_3,
      u64 VAR_4)
{
 struct gfs2_sbd *VAR_5 = FUNC_0(&VAR_2->i_inode);
 struct gfs2_rgrpd *VAR_6;
 struct gfs2_rgrpd **VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 if (FUNC_2(VAR_5, !VAR_3->rl_ghs))
  return;





 if (VAR_3->rl_rgrps) {
  VAR_6 = VAR_3->rl_rgd[VAR_3->rl_rgrps - 1];
  if (FUNC_7(VAR_6, VAR_4))
   return;
  VAR_6 = FUNC_3(VAR_5, VAR_4, 1);
 } else {
  VAR_6 = VAR_2->i_res.rs_rbm.rgd;
  if (!VAR_6 || !FUNC_7(VAR_6, VAR_4))
   VAR_6 = FUNC_3(VAR_5, VAR_4, 1);
 }

 if (!VAR_6) {
  FUNC_1(VAR_5, "rlist_add: no rgrp for block %llu\n",
         (unsigned long long)VAR_4);
  return;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3->rl_rgrps; VAR_9++) {
  if (VAR_3->rl_rgd[VAR_9] == VAR_6) {
   FUNC_8(VAR_3->rl_rgd[VAR_9],
        VAR_3->rl_rgd[VAR_3->rl_rgrps - 1]);
   return;
  }
 }

 if (VAR_3->rl_rgrps == VAR_3->rl_space) {
  VAR_8 = VAR_3->rl_space + 10;

  VAR_7 = FUNC_4(VAR_8, sizeof(struct gfs2_rgrpd *),
         VAR_0 | VAR_1);

  if (VAR_3->rl_rgd) {
   FUNC_6(VAR_7, VAR_3->rl_rgd,
          VAR_3->rl_space * sizeof(struct gfs2_rgrpd *));
   FUNC_5(VAR_3->rl_rgd);
  }

  VAR_3->rl_space = VAR_8;
  VAR_3->rl_rgd = VAR_7;
 }

 VAR_3->rl_rgd[VAR_3->rl_rgrps++] = VAR_6;
}
