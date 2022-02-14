
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ ar_rgrplvb; } ;
struct gfs2_sbd {int sd_rindex_uptodate; int sd_rindex; TYPE_1__ sd_args; } ;
struct gfs2_rgrpd {int rd_flags; scalar_t__ rd_extfail_pt; int rd_gl; } ;
struct TYPE_6__ {int i_mode; } ;
struct TYPE_5__ {struct gfs2_rgrpd* rgd; } ;
struct gfs2_blkreserv {TYPE_2__ rs_rbm; } ;
struct gfs2_inode {int i_rgd_gh; int i_no_addr; TYPE_3__ i_inode; int i_goal; struct gfs2_blkreserv i_res; } ;
struct gfs2_alloc_parms {scalar_t__ target; int aflags; scalar_t__ min_target; scalar_t__ allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct gfs2_sbd* FUNC_1 (TYPE_3__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct gfs2_inode*) ;
 int FUNC_4 (struct gfs2_rgrpd*) ;
 scalar_t__ FUNC_5 (struct gfs2_sbd*,scalar_t__) ;
 struct gfs2_rgrpd* FUNC_6 (struct gfs2_sbd*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int *) ;
 int FUNC_10 (struct gfs2_sbd*,int *,int) ;
 scalar_t__ FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_rgrpd*) ;
 scalar_t__ FUNC_13 (struct gfs2_rgrpd*,int) ;
 scalar_t__ FUNC_14 (struct gfs2_blkreserv*,int) ;
 int FUNC_15 (struct gfs2_inode*) ;
 scalar_t__ FUNC_16 (struct gfs2_blkreserv*) ;
 int FUNC_17 (struct gfs2_blkreserv*) ;
 scalar_t__ FUNC_18 (struct gfs2_rgrpd**,struct gfs2_rgrpd*) ;
 int FUNC_19 (struct gfs2_rgrpd*,struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_20 (struct gfs2_rgrpd*,struct gfs2_blkreserv*) ;
 scalar_t__ FUNC_21 (struct gfs2_rgrpd*,int ) ;
 int FUNC_22 (struct gfs2_rgrpd*,int *,int ) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (struct gfs2_rgrpd*) ;

int FUNC_25(struct gfs2_inode *VAR_12, struct gfs2_alloc_parms *VAR_13)
{
 struct gfs2_sbd *VAR_14 = FUNC_1(&VAR_12->i_inode);
 struct gfs2_rgrpd *VAR_15 = ((void*)0);
 struct gfs2_blkreserv *VAR_16 = &VAR_12->i_res;
 int VAR_17 = 0, VAR_18, VAR_19 = 0;
 u64 VAR_20 = VAR_11;
 int VAR_21 = 0;
 u32 VAR_22, VAR_23 = 0;

 if (VAR_14->sd_args.ar_rgrplvb)
  VAR_19 |= VAR_9;
 if (FUNC_5(VAR_14, VAR_13->target))
  return -VAR_1;
 if (FUNC_16(VAR_16)) {
  VAR_15 = VAR_16->rs_rbm.rgd;
 } else if (VAR_16->rs_rbm.rgd &&
     FUNC_21(VAR_16->rs_rbm.rgd, VAR_12->i_goal)) {
  VAR_15 = VAR_16->rs_rbm.rgd;
 } else {
  FUNC_3(VAR_12);
  VAR_16->rs_rbm.rgd = VAR_15 = FUNC_6(VAR_14, VAR_12->i_goal, 1);
 }
 if (FUNC_2(VAR_12->i_inode.i_mode) && (VAR_13->aflags & VAR_3))
  VAR_23 = FUNC_11(VAR_12);
 if (VAR_16->rs_rbm.rgd == ((void*)0))
  return -VAR_0;

 while (VAR_21 < 3) {
  VAR_18 = 1;

  if (!FUNC_8(VAR_16->rs_rbm.rgd->rd_gl)) {
   VAR_18 = 0;
   if (VAR_23 && VAR_23--)
    goto next_rgrp;
   if (!FUNC_16(VAR_16)) {
    if (VAR_21 == 0 &&
        !FUNC_4(VAR_16->rs_rbm.rgd))
     goto next_rgrp;
    if ((VAR_21 < 2) &&
        FUNC_14(VAR_16, 1000) &&
        FUNC_13(VAR_16->rs_rbm.rgd, VAR_21))
     goto next_rgrp;
   }
   VAR_17 = FUNC_9(VAR_16->rs_rbm.rgd->rd_gl,
         VAR_10, VAR_19,
         &VAR_12->i_rgd_gh);
   if (FUNC_23(VAR_17))
    return VAR_17;
   if (!FUNC_16(VAR_16) && (VAR_21 < 2) &&
       FUNC_13(VAR_16->rs_rbm.rgd, VAR_21))
    goto skip_rgrp;
   if (VAR_14->sd_args.ar_rgrplvb) {
    VAR_17 = FUNC_24(VAR_16->rs_rbm.rgd);
    if (FUNC_23(VAR_17)) {
     FUNC_7(&VAR_12->i_rgd_gh);
     return VAR_17;
    }
   }
  }


  if ((VAR_16->rs_rbm.rgd->rd_flags & (VAR_8 |
       VAR_7)) ||
      (VAR_21 == 0 && VAR_13->target > VAR_16->rs_rbm.rgd->rd_extfail_pt))
   goto skip_rgrp;

  if (VAR_14->sd_args.ar_rgrplvb)
   FUNC_12(VAR_16->rs_rbm.rgd);


  if (!FUNC_16(VAR_16))
   FUNC_19(VAR_16->rs_rbm.rgd, VAR_12, VAR_13);


  if (!FUNC_16(VAR_16) && (VAR_21 < 1))
   goto check_rgrp;


  VAR_22 = FUNC_20(VAR_16->rs_rbm.rgd, VAR_16);
  if (VAR_22 >= VAR_13->target ||
      (VAR_21 == 2 && VAR_13->min_target &&
       VAR_22 >= VAR_13->min_target)) {
   VAR_13->allowed = VAR_22;
   return 0;
  }
check_rgrp:

  if (VAR_16->rs_rbm.rgd->rd_flags & VAR_6)
   FUNC_22(VAR_16->rs_rbm.rgd, &VAR_20,
     VAR_12->i_no_addr);
skip_rgrp:

  if (FUNC_16(VAR_16))
   FUNC_17(VAR_16);


  if (!VAR_18)
   FUNC_7(&VAR_12->i_rgd_gh);
next_rgrp:

  if (FUNC_18(&VAR_16->rs_rbm.rgd, VAR_15))
   continue;
  if (VAR_23)
   continue;





  VAR_21++;

  if (VAR_12 == FUNC_0(VAR_14->sd_rindex) && !VAR_14->sd_rindex_uptodate) {
   VAR_17 = FUNC_15(VAR_12);
   if (VAR_17)
    return VAR_17;
  }

  if (VAR_21 == 2)
   FUNC_10(VAR_14, ((void*)0), VAR_5 |
           VAR_4);
 }

 return -VAR_2;
}
