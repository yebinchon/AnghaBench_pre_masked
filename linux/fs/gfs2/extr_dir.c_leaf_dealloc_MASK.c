
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct gfs2_sbd {int sd_jbsize; } ;
struct gfs2_rgrpd {scalar_t__ rd_length; } ;
struct gfs2_rgrp_list {unsigned int rl_rgrps; TYPE_1__* rl_ghs; } ;
struct gfs2_leaf {int lf_next; } ;
struct TYPE_6__ {int i_mode; } ;
struct gfs2_inode {TYPE_3__ i_inode; int i_gl; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_5__ {int gh_gl; } ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_sbd* FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_2 (unsigned int,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct gfs2_inode*,scalar_t__,struct buffer_head**) ;
 int FUNC_6 (TYPE_3__*,int) ;
 struct gfs2_rgrpd* FUNC_7 (struct gfs2_sbd*,scalar_t__,int) ;
 int FUNC_8 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_9 (struct gfs2_inode*,char*,int,unsigned int) ;
 int FUNC_10 (struct gfs2_inode*,struct gfs2_rgrpd*,scalar_t__,int) ;
 struct gfs2_rgrpd* FUNC_11 (int ) ;
 int FUNC_12 (unsigned int,TYPE_1__*) ;
 int FUNC_13 (unsigned int,TYPE_1__*) ;
 int FUNC_14 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_15 (struct gfs2_inode*,int ,int ) ;
 int FUNC_16 (struct gfs2_inode*) ;
 int FUNC_17 (struct gfs2_sbd*) ;
 int FUNC_18 (struct gfs2_inode*,struct gfs2_rgrp_list*,scalar_t__) ;
 int FUNC_19 (struct gfs2_rgrp_list*) ;
 int FUNC_20 (struct gfs2_rgrp_list*) ;
 int FUNC_21 (int ,struct buffer_head*) ;
 int FUNC_22 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_23 (struct gfs2_sbd*) ;
 int FUNC_24 (char*) ;
 char* FUNC_25 (unsigned int,int) ;
 int FUNC_26 (struct gfs2_rgrp_list*,int ,int) ;

__attribute__((used)) static int FUNC_27(struct gfs2_inode *VAR_12, u32 VAR_13, u32 VAR_14,
   u64 VAR_15, struct buffer_head *VAR_16,
   int VAR_17)
{
 struct gfs2_sbd *VAR_18 = FUNC_1(&VAR_12->i_inode);
 struct gfs2_leaf *VAR_19;
 struct gfs2_rgrp_list VAR_20;
 struct buffer_head *VAR_21, *VAR_22;
 u64 VAR_23, VAR_24;
 unsigned int VAR_25 = 0, VAR_26 = 0;
 char *VAR_27;
 unsigned int VAR_28, VAR_29 = VAR_14 * sizeof(u64);
 int VAR_30;

 VAR_30 = FUNC_17(VAR_18);
 if (VAR_30)
  return VAR_30;

 FUNC_26(&VAR_20, 0, sizeof(struct gfs2_rgrp_list));

 VAR_27 = FUNC_25(VAR_29, VAR_2 | VAR_10);
 if (VAR_27 == ((void*)0))
  VAR_27 = FUNC_2(VAR_29, VAR_2 | VAR_10 | VAR_11,
          VAR_5);
 if (!VAR_27)
  return -VAR_1;

 VAR_30 = FUNC_15(VAR_12, VAR_4, VAR_3);
 if (VAR_30)
  goto out;


 VAR_21 = VAR_16;

 for (VAR_23 = VAR_15; VAR_23; VAR_23 = VAR_24) {
  if (VAR_23 != VAR_15) {
   VAR_30 = FUNC_5(VAR_12, VAR_23, &VAR_21);
   if (VAR_30)
    goto out_rlist;
  }
  VAR_19 = (struct gfs2_leaf *)VAR_21->b_data;
  VAR_24 = FUNC_3(VAR_19->lf_next);
  if (VAR_23 != VAR_15)
   FUNC_4(VAR_21);

  FUNC_18(VAR_12, &VAR_20, VAR_23);
  VAR_26++;
 }

 FUNC_19(&VAR_20);

 for (VAR_28 = 0; VAR_28 < VAR_20.rl_rgrps; VAR_28++) {
  struct gfs2_rgrpd *VAR_31 = FUNC_11(VAR_20.rl_ghs[VAR_28].gh_gl);

  VAR_25 += VAR_31->rd_length;
 }

 VAR_30 = FUNC_13(VAR_20.rl_rgrps, VAR_20.rl_ghs);
 if (VAR_30)
  goto out_rlist;

 VAR_30 = FUNC_22(VAR_18,
   VAR_25 + (FUNC_0(VAR_29, VAR_18->sd_jbsize) + 1) +
   VAR_6 + VAR_8 + VAR_7, VAR_26);
 if (VAR_30)
  goto out_rg_gunlock;

 VAR_21 = VAR_16;

 for (VAR_23 = VAR_15; VAR_23; VAR_23 = VAR_24) {
  struct gfs2_rgrpd *VAR_32;

  if (VAR_23 != VAR_15) {
   VAR_30 = FUNC_5(VAR_12, VAR_23, &VAR_21);
   if (VAR_30)
    goto out_end_trans;
  }
  VAR_19 = (struct gfs2_leaf *)VAR_21->b_data;
  VAR_24 = FUNC_3(VAR_19->lf_next);
  if (VAR_23 != VAR_15)
   FUNC_4(VAR_21);

  VAR_32 = FUNC_7(VAR_18, VAR_23, 1);
  FUNC_10(VAR_12, VAR_32, VAR_23, 1);
  FUNC_6(&VAR_12->i_inode, -1);
 }

 VAR_30 = FUNC_9(VAR_12, VAR_27, VAR_13 * sizeof(u64), VAR_29);
 if (VAR_30 != VAR_29) {
  if (VAR_30 >= 0)
   VAR_30 = -VAR_0;
  goto out_end_trans;
 }

 VAR_30 = FUNC_14(VAR_12, &VAR_22);
 if (VAR_30)
  goto out_end_trans;

 FUNC_21(VAR_12->i_gl, VAR_22);


 if (VAR_17)
  VAR_12->i_inode.i_mode = VAR_9;
 FUNC_8(VAR_12, VAR_22->b_data);
 FUNC_4(VAR_22);

out_end_trans:
 FUNC_23(VAR_18);
out_rg_gunlock:
 FUNC_12(VAR_20.rl_rgrps, VAR_20.rl_ghs);
out_rlist:
 FUNC_20(&VAR_20);
 FUNC_16(VAR_12);
out:
 FUNC_24(VAR_27);
 return VAR_30;
}
