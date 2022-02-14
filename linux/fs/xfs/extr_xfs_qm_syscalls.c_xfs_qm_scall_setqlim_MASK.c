
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_qcnt_t ;
typedef scalar_t__ xfs_dqid_t ;
typedef int uint ;
struct xfs_trans {int dummy; } ;
struct xfs_quotainfo {int qi_quotaofflock; int qi_rtbwarnlimit; int qi_iwarnlimit; int qi_bwarnlimit; int qi_rtbtimelimit; int qi_itimelimit; int qi_btimelimit; } ;
struct xfs_mount {struct xfs_quotainfo* m_quotainfo; } ;
struct xfs_disk_dquot {void* d_rtbtimer; void* d_itimer; void* d_btimer; void* d_rtbwarns; void* d_iwarns; void* d_bwarns; void* d_ino_softlimit; void* d_ino_hardlimit; void* d_rtb_softlimit; void* d_rtb_hardlimit; void* d_blk_softlimit; void* d_blk_hardlimit; } ;
struct xfs_dquot {int dq_flags; struct xfs_disk_dquot q_core; } ;
struct xfs_def_quota {scalar_t__ isoftlimit; scalar_t__ ihardlimit; scalar_t__ rtbsoftlimit; scalar_t__ rtbhardlimit; scalar_t__ bsoftlimit; scalar_t__ bhardlimit; } ;
struct qc_dqblk {int d_fieldmask; int d_rt_spc_warns; int d_ino_warns; int d_spc_warns; int d_rt_spc_timer; int d_ino_timer; int d_spc_timer; scalar_t__ d_ino_softlimit; scalar_t__ d_ino_hardlimit; int d_rt_spc_softlimit; int d_rt_spc_hardlimit; int d_spc_softlimit; int d_spc_hardlimit; } ;
struct TYPE_2__ {int tr_qm_setqlim; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct xfs_mount*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (void*) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct xfs_mount*,char*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct xfs_dquot*) ;
 int FUNC_11 (struct xfs_dquot*) ;
 int FUNC_12 (struct xfs_dquot*) ;
 struct xfs_def_quota* FUNC_13 (struct xfs_dquot*,struct xfs_quotainfo*) ;
 int FUNC_14 (struct xfs_mount*,struct xfs_disk_dquot*) ;
 int FUNC_15 (struct xfs_mount*,scalar_t__,int ,int,struct xfs_dquot**) ;
 int FUNC_16 (struct xfs_dquot*) ;
 int FUNC_17 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_18 (struct xfs_trans*) ;
 int FUNC_19 (struct xfs_trans*,struct xfs_dquot*) ;
 int FUNC_20 (struct xfs_trans*,struct xfs_dquot*) ;

int
FUNC_21(
 struct xfs_mount *VAR_16,
 xfs_dqid_t VAR_17,
 uint VAR_18,
 struct qc_dqblk *VAR_19)
{
 struct xfs_quotainfo *VAR_20 = VAR_16->m_quotainfo;
 struct xfs_disk_dquot *VAR_21;
 struct xfs_dquot *VAR_22;
 struct xfs_trans *VAR_23;
 struct xfs_def_quota *VAR_24;
 int VAR_25;
 xfs_qcnt_t VAR_26, VAR_27;

 if (VAR_19->d_fieldmask & ~VAR_15)
  return -VAR_0;
 if ((VAR_19->d_fieldmask & VAR_15) == 0)
  return 0;






 FUNC_7(&VAR_20->qi_quotaofflock);
 VAR_25 = FUNC_15(VAR_16, VAR_17, VAR_18, 1, &VAR_22);
 if (VAR_25) {
  FUNC_0(VAR_25 != -VAR_1);
  goto out_unlock;
 }

 VAR_24 = FUNC_13(VAR_22, VAR_20);
 FUNC_11(VAR_22);

 VAR_25 = FUNC_17(VAR_16, &FUNC_1(VAR_16)->tr_qm_setqlim, 0, 0, 0, &VAR_23);
 if (VAR_25)
  goto out_rele;

 FUNC_10(VAR_22);
 FUNC_19(VAR_23, VAR_22);
 VAR_21 = &VAR_22->q_core;




 VAR_26 = (VAR_19->d_fieldmask & VAR_10) ?
  (xfs_qcnt_t) FUNC_2(VAR_16, VAR_19->d_spc_hardlimit) :
   FUNC_3(VAR_21->d_blk_hardlimit);
 VAR_27 = (VAR_19->d_fieldmask & VAR_11) ?
  (xfs_qcnt_t) FUNC_2(VAR_16, VAR_19->d_spc_softlimit) :
   FUNC_3(VAR_21->d_blk_softlimit);
 if (VAR_26 == 0 || VAR_26 >= VAR_27) {
  VAR_21->d_blk_hardlimit = FUNC_6(VAR_26);
  VAR_21->d_blk_softlimit = FUNC_6(VAR_27);
  FUNC_12(VAR_22);
  if (VAR_17 == 0) {
   VAR_24->bhardlimit = VAR_26;
   VAR_24->bsoftlimit = VAR_27;
  }
 } else {
  FUNC_9(VAR_16, "blkhard %Ld < blksoft %Ld", VAR_26, VAR_27);
 }
 VAR_26 = (VAR_19->d_fieldmask & VAR_6) ?
  (xfs_qcnt_t) FUNC_2(VAR_16, VAR_19->d_rt_spc_hardlimit) :
   FUNC_3(VAR_21->d_rtb_hardlimit);
 VAR_27 = (VAR_19->d_fieldmask & VAR_7) ?
  (xfs_qcnt_t) FUNC_2(VAR_16, VAR_19->d_rt_spc_softlimit) :
   FUNC_3(VAR_21->d_rtb_softlimit);
 if (VAR_26 == 0 || VAR_26 >= VAR_27) {
  VAR_21->d_rtb_hardlimit = FUNC_6(VAR_26);
  VAR_21->d_rtb_softlimit = FUNC_6(VAR_27);
  if (VAR_17 == 0) {
   VAR_24->rtbhardlimit = VAR_26;
   VAR_24->rtbsoftlimit = VAR_27;
  }
 } else {
  FUNC_9(VAR_16, "rtbhard %Ld < rtbsoft %Ld", VAR_26, VAR_27);
 }

 VAR_26 = (VAR_19->d_fieldmask & VAR_2) ?
  (xfs_qcnt_t) VAR_19->d_ino_hardlimit :
   FUNC_3(VAR_21->d_ino_hardlimit);
 VAR_27 = (VAR_19->d_fieldmask & VAR_3) ?
  (xfs_qcnt_t) VAR_19->d_ino_softlimit :
   FUNC_3(VAR_21->d_ino_softlimit);
 if (VAR_26 == 0 || VAR_26 >= VAR_27) {
  VAR_21->d_ino_hardlimit = FUNC_6(VAR_26);
  VAR_21->d_ino_softlimit = FUNC_6(VAR_27);
  if (VAR_17 == 0) {
   VAR_24->ihardlimit = VAR_26;
   VAR_24->isoftlimit = VAR_27;
  }
 } else {
  FUNC_9(VAR_16, "ihard %Ld < isoft %Ld", VAR_26, VAR_27);
 }




 if (VAR_19->d_fieldmask & VAR_13)
  VAR_21->d_bwarns = FUNC_4(VAR_19->d_spc_warns);
 if (VAR_19->d_fieldmask & VAR_5)
  VAR_21->d_iwarns = FUNC_4(VAR_19->d_ino_warns);
 if (VAR_19->d_fieldmask & VAR_9)
  VAR_21->d_rtbwarns = FUNC_4(VAR_19->d_rt_spc_warns);

 if (VAR_17 == 0) {







  if (VAR_19->d_fieldmask & VAR_12) {
   VAR_20->qi_btimelimit = VAR_19->d_spc_timer;
   VAR_21->d_btimer = FUNC_5(VAR_19->d_spc_timer);
  }
  if (VAR_19->d_fieldmask & VAR_4) {
   VAR_20->qi_itimelimit = VAR_19->d_ino_timer;
   VAR_21->d_itimer = FUNC_5(VAR_19->d_ino_timer);
  }
  if (VAR_19->d_fieldmask & VAR_8) {
   VAR_20->qi_rtbtimelimit = VAR_19->d_rt_spc_timer;
   VAR_21->d_rtbtimer = FUNC_5(VAR_19->d_rt_spc_timer);
  }
  if (VAR_19->d_fieldmask & VAR_13)
   VAR_20->qi_bwarnlimit = VAR_19->d_spc_warns;
  if (VAR_19->d_fieldmask & VAR_5)
   VAR_20->qi_iwarnlimit = VAR_19->d_ino_warns;
  if (VAR_19->d_fieldmask & VAR_9)
   VAR_20->qi_rtbwarnlimit = VAR_19->d_rt_spc_warns;
 } else {







  FUNC_14(VAR_16, VAR_21);
 }
 VAR_22->dq_flags |= VAR_14;
 FUNC_20(VAR_23, VAR_22);

 VAR_25 = FUNC_18(VAR_23);

out_rele:
 FUNC_16(VAR_22);
out_unlock:
 FUNC_8(&VAR_20->qi_quotaofflock);
 return VAR_25;
}
