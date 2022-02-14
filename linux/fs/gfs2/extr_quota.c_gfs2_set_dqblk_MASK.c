
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct qc_dqblk {int d_fieldmask; int d_spc_softlimit; int d_spc_hardlimit; int d_space; } ;
struct kqid {scalar_t__ type; } ;
struct TYPE_5__ {int sb_bsize_shift; } ;
struct TYPE_4__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_2__ sd_sb; TYPE_1__ sd_args; int sd_quota_inode; } ;
struct TYPE_6__ {int qb_value; int qb_limit; int qb_warn; } ;
struct gfs2_quota_data {int qd_flags; TYPE_3__ qd_qb; int qd_gl; } ;
struct gfs2_quota {int dummy; } ;
struct gfs2_inode {int i_inode; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct gfs2_alloc_parms {unsigned int target; int aflags; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct gfs2_inode*,int ,int ,struct gfs2_quota_data*,struct qc_dqblk*) ;
 int FUNC_4 (struct gfs2_holder*) ;
 int FUNC_5 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*,struct gfs2_alloc_parms*) ;
 scalar_t__ FUNC_8 (struct gfs2_inode*) ;
 scalar_t__ FUNC_9 (struct gfs2_inode*,unsigned int) ;
 int FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_12 (struct gfs2_sbd*) ;
 int FUNC_13 (struct gfs2_inode*,int ,int) ;
 int FUNC_14 (struct gfs2_inode*,int,unsigned int*,unsigned int*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct gfs2_quota_data*) ;
 int FUNC_18 (struct gfs2_sbd*,struct kqid,struct gfs2_quota_data**) ;
 int FUNC_19 (struct gfs2_quota_data*) ;
 int FUNC_20 (struct gfs2_sbd*,struct gfs2_quota_data*) ;

__attribute__((used)) static int FUNC_21(struct super_block *VAR_12, struct kqid VAR_13,
     struct qc_dqblk *VAR_14)
{
 struct gfs2_sbd *VAR_15 = VAR_12->s_fs_info;
 struct gfs2_inode *VAR_16 = FUNC_0(VAR_15->sd_quota_inode);
 struct gfs2_quota_data *VAR_17;
 struct gfs2_holder VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21;
 unsigned int VAR_22 = 0;
 int VAR_23;
 loff_t VAR_24;
 int VAR_25;

 if (VAR_15->sd_args.ar_quota == VAR_3)
  return -VAR_1;

 if ((VAR_13.type != VAR_11) &&
     (VAR_13.type != VAR_4))
  return -VAR_0;

 if (VAR_14->d_fieldmask & ~VAR_2)
  return -VAR_0;

 VAR_25 = FUNC_18(VAR_15, VAR_13, &VAR_17);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_10(VAR_16);
 if (VAR_25)
  goto out_put;

 FUNC_15(&VAR_16->i_inode);
 VAR_25 = FUNC_5(VAR_17->qd_gl, VAR_5, 0, &VAR_18);
 if (VAR_25)
  goto out_unlockput;
 VAR_25 = FUNC_5(VAR_16->i_gl, VAR_5, 0, &VAR_19);
 if (VAR_25)
  goto out_q;


 VAR_25 = FUNC_20(VAR_15, VAR_17);
 if (VAR_25)
  goto out_i;


 if ((VAR_14->d_fieldmask & VAR_8) &&
     ((VAR_14->d_spc_softlimit >> VAR_15->sd_sb.sb_bsize_shift) == FUNC_1(VAR_17->qd_qb.qb_warn)))
  VAR_14->d_fieldmask ^= VAR_8;

 if ((VAR_14->d_fieldmask & VAR_7) &&
     ((VAR_14->d_spc_hardlimit >> VAR_15->sd_sb.sb_bsize_shift) == FUNC_1(VAR_17->qd_qb.qb_limit)))
  VAR_14->d_fieldmask ^= VAR_7;

 if ((VAR_14->d_fieldmask & VAR_6) &&
     ((VAR_14->d_space >> VAR_15->sd_sb.sb_bsize_shift) == FUNC_1(VAR_17->qd_qb.qb_value)))
  VAR_14->d_fieldmask ^= VAR_6;

 if (VAR_14->d_fieldmask == 0)
  goto out_i;

 VAR_24 = FUNC_17(VAR_17);
 VAR_23 = FUNC_13(VAR_16, VAR_24, sizeof(struct gfs2_quota));
 if (FUNC_8(VAR_16))
  VAR_23 = 1;
 if (VAR_23) {
  struct gfs2_alloc_parms VAR_26 = { .aflags = 0, };
  FUNC_14(VAR_16, sizeof(struct gfs2_quota),
           &VAR_20, &VAR_21);
  VAR_22 = 1 + VAR_20 + VAR_21;
  VAR_26.target = VAR_22;
  VAR_25 = FUNC_7(VAR_16, &VAR_26);
  if (VAR_25)
   goto out_i;
  VAR_22 += FUNC_9(VAR_16, VAR_22);
 }



 VAR_25 = FUNC_11(VAR_15, VAR_22 + VAR_10 + 2, 0);
 if (VAR_25)
  goto out_release;


 VAR_25 = FUNC_3(VAR_16, VAR_24, 0, VAR_17, VAR_14);
 if (!VAR_25)
  FUNC_2(VAR_9, &VAR_17->qd_flags);

 FUNC_12(VAR_15);
out_release:
 if (VAR_23)
  FUNC_6(VAR_16);
out_i:
 FUNC_4(&VAR_19);
out_q:
 FUNC_4(&VAR_18);
out_unlockput:
 FUNC_16(&VAR_16->i_inode);
out_put:
 FUNC_19(VAR_17);
 return VAR_25;
}
