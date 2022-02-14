
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {scalar_t__ d_flags; scalar_t__ d_id; int d_rtbwarns; int d_rtbtimer; int d_rtb_softlimit; int d_rtb_hardlimit; int d_bwarns; int d_iwarns; int d_itimer; int d_btimer; int d_ino_softlimit; int d_ino_hardlimit; int d_blk_softlimit; int d_blk_hardlimit; } ;
struct xfs_dquot {void* q_res_bcount; scalar_t__ q_res_icount; void* q_res_rtbcount; TYPE_1__ q_core; } ;
struct qc_dqblk {scalar_t__ d_spc_softlimit; scalar_t__ d_ino_softlimit; scalar_t__ d_space; scalar_t__ d_ino_count; scalar_t__ d_spc_timer; scalar_t__ d_ino_timer; void* d_rt_spc_timer; void* d_rt_spc_warns; void* d_rt_space; void* d_rt_spc_softlimit; void* d_rt_spc_hardlimit; void* d_spc_warns; void* d_ino_warns; void* d_ino_hardlimit; void* d_spc_hardlimit; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (struct xfs_mount*,void*) ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 scalar_t__ FUNC_3 (struct xfs_mount*) ;
 scalar_t__ FUNC_4 (struct xfs_mount*) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct qc_dqblk*,int ,int) ;

__attribute__((used)) static void
FUNC_9(
 struct xfs_mount *VAR_3,
 uint VAR_4,
 const struct xfs_dquot *VAR_5,
 struct qc_dqblk *VAR_6)
{
 FUNC_8(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->d_spc_hardlimit =
  FUNC_1(VAR_3, FUNC_7(VAR_5->q_core.d_blk_hardlimit));
 VAR_6->d_spc_softlimit =
  FUNC_1(VAR_3, FUNC_7(VAR_5->q_core.d_blk_softlimit));
 VAR_6->d_ino_hardlimit = FUNC_7(VAR_5->q_core.d_ino_hardlimit);
 VAR_6->d_ino_softlimit = FUNC_7(VAR_5->q_core.d_ino_softlimit);
 VAR_6->d_space = FUNC_1(VAR_3, VAR_5->q_res_bcount);
 VAR_6->d_ino_count = VAR_5->q_res_icount;
 VAR_6->d_spc_timer = FUNC_6(VAR_5->q_core.d_btimer);
 VAR_6->d_ino_timer = FUNC_6(VAR_5->q_core.d_itimer);
 VAR_6->d_ino_warns = FUNC_5(VAR_5->q_core.d_iwarns);
 VAR_6->d_spc_warns = FUNC_5(VAR_5->q_core.d_bwarns);
 VAR_6->d_rt_spc_hardlimit =
  FUNC_1(VAR_3, FUNC_7(VAR_5->q_core.d_rtb_hardlimit));
 VAR_6->d_rt_spc_softlimit =
  FUNC_1(VAR_3, FUNC_7(VAR_5->q_core.d_rtb_softlimit));
 VAR_6->d_rt_space = FUNC_1(VAR_3, VAR_5->q_res_rtbcount);
 VAR_6->d_rt_spc_timer = FUNC_6(VAR_5->q_core.d_rtbtimer);
 VAR_6->d_rt_spc_warns = FUNC_5(VAR_5->q_core.d_rtbwarns);






 if ((!FUNC_4(VAR_3) &&
      VAR_5->q_core.d_flags == VAR_2) ||
     (!FUNC_2(VAR_3) &&
      VAR_5->q_core.d_flags == VAR_0) ||
     (!FUNC_3(VAR_3) &&
      VAR_5->q_core.d_flags == VAR_1)) {
  VAR_6->d_spc_timer = 0;
  VAR_6->d_ino_timer = 0;
  VAR_6->d_rt_spc_timer = 0;
 }
}
