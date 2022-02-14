
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct super_block {TYPE_1__* s_op; } ;
struct ocfs2_mem_dqinfo {int dqi_gi; } ;
struct ocfs2_global_disk_dqblk {int dummy; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_8__ {scalar_t__ dqb_curspace; scalar_t__ dqb_curinodes; scalar_t__ dqb_itime; scalar_t__ dqb_btime; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_isoftlimit; } ;
struct dquot {TYPE_5__ dq_id; int dq_dqb_lock; TYPE_2__ dq_dqb; int dq_flags; int dq_off; struct super_block* dq_sb; } ;
typedef scalar_t__ s64 ;
struct TYPE_11__ {scalar_t__ dq_origspace; scalar_t__ dq_originodes; int dq_use_count; } ;
struct TYPE_9__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;
struct TYPE_7__ {int (* quota_read ) (struct super_block*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_0 (struct dquot*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_5__) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int VAR_11 ;
 void* FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct dquot*,struct ocfs2_global_disk_dqblk*) ;
 int FUNC_10 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_11 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_12 (int *,struct dquot*) ;
 int FUNC_13 (int *,struct dquot*) ;
 TYPE_3__* FUNC_14 (struct super_block*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct super_block*,int,char*,int,int ) ;
 int FUNC_18 (scalar_t__,int *) ;
 int FUNC_19 (scalar_t__,scalar_t__,long long,scalar_t__,long long) ;

int FUNC_20(struct dquot *VAR_12, int VAR_13)
{
 int VAR_14, VAR_15;
 struct super_block *VAR_16 = VAR_12->dq_sb;
 int VAR_17 = VAR_12->dq_id.type;
 struct ocfs2_mem_dqinfo *VAR_18 = FUNC_14(VAR_16, VAR_17)->dqi_priv;
 struct ocfs2_global_disk_dqblk VAR_19;
 s64 VAR_20, VAR_21;
 time64_t VAR_22, VAR_23;

 VAR_14 = VAR_16->s_op->quota_read(VAR_16, VAR_17, (char *)&VAR_19,
       sizeof(struct ocfs2_global_disk_dqblk),
       VAR_12->dq_off);
 if (VAR_14 != sizeof(struct ocfs2_global_disk_dqblk)) {
  if (VAR_14 >= 0) {
   FUNC_7(VAR_4, "Short read from global quota file "
           "(%u read)\n", VAR_14);
   VAR_14 = -VAR_3;
  }
  goto out;
 }




 FUNC_15(&VAR_12->dq_dqb_lock);
 VAR_20 = VAR_12->dq_dqb.dqb_curspace -
     FUNC_0(VAR_12)->dq_origspace;
 VAR_21 = VAR_12->dq_dqb.dqb_curinodes -
     FUNC_0(VAR_12)->dq_originodes;
 VAR_22 = VAR_12->dq_dqb.dqb_itime;
 VAR_23 = VAR_12->dq_dqb.dqb_btime;
 FUNC_9(VAR_12, &VAR_19);
 FUNC_19(FUNC_4(&VAR_11, VAR_12->dq_id),
          VAR_12->dq_dqb.dqb_curspace,
          (long long)VAR_20,
          VAR_12->dq_dqb.dqb_curinodes,
          (long long)VAR_21);
 if (!FUNC_18(VAR_2 + VAR_10, &VAR_12->dq_flags))
  VAR_12->dq_dqb.dqb_curspace += VAR_20;
 if (!FUNC_18(VAR_2 + VAR_8, &VAR_12->dq_flags))
  VAR_12->dq_dqb.dqb_curinodes += VAR_21;

 if (VAR_12->dq_dqb.dqb_bsoftlimit &&
     VAR_12->dq_dqb.dqb_curspace > VAR_12->dq_dqb.dqb_bsoftlimit) {
  if (!FUNC_18(VAR_2 + VAR_6, &VAR_12->dq_flags) &&
      VAR_23 > 0) {
   if (VAR_12->dq_dqb.dqb_btime > 0)
    VAR_12->dq_dqb.dqb_btime =
     FUNC_6(VAR_12->dq_dqb.dqb_btime, VAR_23);
   else
    VAR_12->dq_dqb.dqb_btime = VAR_23;
  }
 } else {
  VAR_12->dq_dqb.dqb_btime = 0;
  FUNC_3(VAR_0, &VAR_12->dq_flags);
 }

 if (VAR_12->dq_dqb.dqb_isoftlimit &&
     VAR_12->dq_dqb.dqb_curinodes > VAR_12->dq_dqb.dqb_isoftlimit) {
  if (!FUNC_18(VAR_2 + VAR_9, &VAR_12->dq_flags) &&
      VAR_22 > 0) {
   if (VAR_12->dq_dqb.dqb_itime > 0)
    VAR_12->dq_dqb.dqb_itime =
     FUNC_6(VAR_12->dq_dqb.dqb_itime, VAR_22);
   else
    VAR_12->dq_dqb.dqb_itime = VAR_22;
  }
 } else {
  VAR_12->dq_dqb.dqb_itime = 0;
  FUNC_3(VAR_1, &VAR_12->dq_flags);
 }

 FUNC_1(VAR_2 + VAR_10, &VAR_12->dq_flags);
 FUNC_1(VAR_2 + VAR_8, &VAR_12->dq_flags);
 FUNC_1(VAR_2 + VAR_5, &VAR_12->dq_flags);
 FUNC_1(VAR_2 + VAR_7, &VAR_12->dq_flags);
 FUNC_1(VAR_2 + VAR_6, &VAR_12->dq_flags);
 FUNC_1(VAR_2 + VAR_9, &VAR_12->dq_flags);
 FUNC_0(VAR_12)->dq_origspace = VAR_12->dq_dqb.dqb_curspace;
 FUNC_0(VAR_12)->dq_originodes = VAR_12->dq_dqb.dqb_curinodes;
 FUNC_16(&VAR_12->dq_dqb_lock);
 VAR_14 = FUNC_10(VAR_18, VAR_13);
 if (VAR_14 < 0) {
  FUNC_7(VAR_4, "Failed to lock quota info, losing quota write"
          " (type=%d, id=%u)\n", VAR_12->dq_id.type,
          (unsigned)FUNC_4(&VAR_11, VAR_12->dq_id));
  goto out;
 }
 if (VAR_13)
  FUNC_0(VAR_12)->dq_use_count--;
 VAR_14 = FUNC_13(&VAR_18->dqi_gi, VAR_12);
 if (VAR_14 < 0)
  goto out_qlock;
 if (VAR_13 && !FUNC_0(VAR_12)->dq_use_count) {
  VAR_14 = FUNC_12(&VAR_18->dqi_gi, VAR_12);
  if (FUNC_5(FUNC_14(VAR_16, VAR_17))) {
   VAR_15 = FUNC_2(VAR_16, VAR_17);
   if (!VAR_14)
    VAR_14 = VAR_15;
  }
 }
out_qlock:
 FUNC_11(VAR_18, VAR_13);
out:
 if (VAR_14 < 0)
  FUNC_8(VAR_14);
 return VAR_14;
}
