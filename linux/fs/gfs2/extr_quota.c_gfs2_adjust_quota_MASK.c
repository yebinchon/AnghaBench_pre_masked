
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qc_dqblk {int d_fieldmask; int d_spc_softlimit; int d_spc_hardlimit; int d_space; } ;
struct inode {scalar_t__ i_size; int i_atime; int i_mtime; } ;
struct TYPE_3__ {int sb_bsize_shift; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
struct TYPE_4__ {void* qb_value; void* qb_limit; void* qb_warn; } ;
struct gfs2_quota_data {int qd_flags; TYPE_2__ qd_qb; } ;
struct gfs2_quota {void* qu_value; void* qu_limit; void* qu_warn; } ;
struct gfs2_inode {struct inode i_inode; } ;
typedef scalar_t__ s64 ;
typedef int q ;
typedef int loff_t ;


 int VAR_0 ;
 struct gfs2_sbd* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void**,scalar_t__) ;
 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct gfs2_inode*,char*,int*,int) ;
 scalar_t__ FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*,int *) ;
 int FUNC_8 (struct gfs2_inode*,struct gfs2_quota*,int) ;
 int FUNC_9 (struct inode*,scalar_t__) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct gfs2_quota*,int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct gfs2_inode *VAR_5, loff_t VAR_6,
        s64 VAR_7, struct gfs2_quota_data *VAR_8,
        struct qc_dqblk *VAR_9)
{
 struct inode *VAR_10 = &VAR_5->i_inode;
 struct gfs2_sbd *VAR_11 = FUNC_0(VAR_10);
 struct gfs2_quota VAR_12;
 int VAR_13;
 u64 VAR_14;

 if (FUNC_6(VAR_5)) {
  VAR_13 = FUNC_7(VAR_5, ((void*)0));
  if (VAR_13)
   return VAR_13;
 }

 FUNC_11(&VAR_12, 0, sizeof(struct gfs2_quota));
 VAR_13 = FUNC_5(VAR_5, (char *)&VAR_12, &VAR_6, sizeof(VAR_12));
 if (VAR_13 < 0)
  return VAR_13;

 VAR_6 -= sizeof(VAR_12);
 VAR_13 = -VAR_0;
 FUNC_1(&VAR_12.qu_value, VAR_7);
 if (((s64)FUNC_2(VAR_12.qu_value)) < 0)
  VAR_12.qu_value = 0;
 VAR_8->qd_qb.qb_value = VAR_12.qu_value;
 if (VAR_9) {
  if (VAR_9->d_fieldmask & VAR_3) {
   VAR_12.qu_warn = FUNC_3(VAR_9->d_spc_softlimit >> VAR_11->sd_sb.sb_bsize_shift);
   VAR_8->qd_qb.qb_warn = VAR_12.qu_warn;
  }
  if (VAR_9->d_fieldmask & VAR_2) {
   VAR_12.qu_limit = FUNC_3(VAR_9->d_spc_hardlimit >> VAR_11->sd_sb.sb_bsize_shift);
   VAR_8->qd_qb.qb_limit = VAR_12.qu_limit;
  }
  if (VAR_9->d_fieldmask & VAR_1) {
   VAR_12.qu_value = FUNC_3(VAR_9->d_space >> VAR_11->sd_sb.sb_bsize_shift);
   VAR_8->qd_qb.qb_value = VAR_12.qu_value;
  }
 }

 VAR_13 = FUNC_8(VAR_5, &VAR_12, VAR_6);
 if (!VAR_13) {
  VAR_14 = VAR_6 + sizeof(struct gfs2_quota);
  if (VAR_14 > VAR_10->i_size)
   FUNC_9(VAR_10, VAR_14);
  VAR_10->i_mtime = VAR_10->i_atime = FUNC_4(VAR_10);
  FUNC_10(VAR_10);
  FUNC_12(VAR_4, &VAR_8->qd_flags);
 }

 return VAR_13;
}
