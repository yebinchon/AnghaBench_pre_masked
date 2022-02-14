
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rbm {TYPE_3__* rgd; } ;
struct TYPE_12__ {int i_gid; int i_uid; } ;
struct TYPE_8__ {TYPE_3__* rgd; } ;
struct TYPE_11__ {TYPE_1__ rs_rbm; } ;
struct gfs2_inode {TYPE_7__ i_inode; scalar_t__ i_goal; int i_gl; TYPE_4__ i_res; scalar_t__ i_no_addr; } ;
struct gfs2_dinode {int di_goal_data; int di_goal_meta; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int s64 ;
struct TYPE_10__ {scalar_t__ rd_data0; unsigned int rd_free; unsigned int rd_free_clone; TYPE_2__* rd_bits; int rd_gl; int rd_igeneration; int rd_dinodes; scalar_t__ rd_last_alloc; int rd_extfail_pt; } ;
struct TYPE_9__ {struct buffer_head* bi_bh; int bi_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct gfs2_sbd* FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct gfs2_sbd*,char*,unsigned int,...) ;
 int FUNC_4 (struct gfs2_inode*,struct gfs2_rbm*,unsigned int) ;
 int FUNC_5 (struct gfs2_rbm*,int,unsigned int*) ;
 int FUNC_6 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_7 (struct gfs2_inode*,unsigned int,int ,int ) ;
 int FUNC_8 (struct gfs2_rbm*,int ,int *,struct gfs2_inode*,int) ;
 scalar_t__ FUNC_9 (struct gfs2_rbm*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (struct gfs2_rbm*,struct gfs2_inode*,int) ;
 int FUNC_14 (struct gfs2_sbd*,int ,int ,int) ;
 int FUNC_15 (int ,struct buffer_head*) ;
 int FUNC_16 (struct gfs2_sbd*,scalar_t__,unsigned int) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct gfs2_inode*,TYPE_3__*,scalar_t__,unsigned int,int ) ;

int FUNC_19(struct gfs2_inode *VAR_6, u64 *VAR_7, unsigned int *VAR_8,
        bool VAR_9, u64 *VAR_10)
{
 struct gfs2_sbd *VAR_11 = FUNC_0(&VAR_6->i_inode);
 struct buffer_head *VAR_12;
 struct gfs2_rbm VAR_13 = { .rgd = VAR_6->i_res.rs_rbm.rgd, };
 unsigned int VAR_14;
 u64 VAR_15;
 int VAR_16;

 FUNC_13(&VAR_13, VAR_6, VAR_9);
 VAR_16 = FUNC_8(&VAR_13, VAR_4, ((void*)0), VAR_6, 0);

 if (VAR_16 == -VAR_1) {
  FUNC_13(&VAR_13, VAR_6, VAR_9);
  VAR_16 = FUNC_8(&VAR_13, VAR_4, ((void*)0), ((void*)0), 0);
 }


 if (VAR_16) {
  FUNC_3(VAR_11, "inum=%llu error=%d, nblocks=%u, full=%d fail_pt=%d\n",
   (unsigned long long)VAR_6->i_no_addr, VAR_16, *VAR_8,
   FUNC_17(VAR_2, &VAR_13.rgd->rd_bits->bi_flags),
   VAR_13.rgd->rd_extfail_pt);
  goto rgrp_error;
 }

 FUNC_5(&VAR_13, VAR_9, VAR_8);
 VAR_15 = FUNC_9(&VAR_13);
 VAR_13.rgd->rd_last_alloc = VAR_15 - VAR_13.rgd->rd_data0;
 if (FUNC_12(&VAR_6->i_res))
  FUNC_4(VAR_6, &VAR_13, *VAR_8);
 VAR_14 = *VAR_8;
 if (VAR_9)
  VAR_14--;

 if (!VAR_9) {
  VAR_6->i_goal = VAR_15 + VAR_14 - 1;
  VAR_16 = FUNC_6(VAR_6, &VAR_12);
  if (VAR_16 == 0) {
   struct gfs2_dinode *VAR_17 =
    (struct gfs2_dinode *)VAR_12->b_data;
   FUNC_15(VAR_6->i_gl, VAR_12);
   VAR_17->di_goal_meta = VAR_17->di_goal_data =
    FUNC_2(VAR_6->i_goal);
   FUNC_1(VAR_12);
  }
 }
 if (VAR_13.rgd->rd_free < *VAR_8) {
  FUNC_3(VAR_11, "nblocks=%u\n", *VAR_8);
  goto rgrp_error;
 }

 VAR_13.rgd->rd_free -= *VAR_8;
 if (VAR_9) {
  VAR_13.rgd->rd_dinodes++;
  *VAR_10 = VAR_13.rgd->rd_igeneration++;
  if (*VAR_10 == 0)
   *VAR_10 = VAR_13.rgd->rd_igeneration++;
 }

 FUNC_15(VAR_13.rgd->rd_gl, VAR_13.rgd->rd_bits[0].bi_bh);
 FUNC_11(VAR_13.rgd, VAR_13.rgd->rd_bits[0].bi_bh->b_data);

 FUNC_14(VAR_11, 0, -(s64)*VAR_8, VAR_9 ? 1 : 0);
 if (VAR_9)
  FUNC_16(VAR_11, VAR_15, *VAR_8);

 FUNC_7(VAR_6, *VAR_8, VAR_6->i_inode.i_uid, VAR_6->i_inode.i_gid);

 VAR_13.rgd->rd_free_clone -= *VAR_8;
 FUNC_18(VAR_6, VAR_13.rgd, VAR_15, *VAR_8,
          VAR_9 ? VAR_3 : VAR_5);
 *VAR_7 = VAR_15;
 return 0;

rgrp_error:
 FUNC_10(VAR_13.rgd);
 return -VAR_0;
}
