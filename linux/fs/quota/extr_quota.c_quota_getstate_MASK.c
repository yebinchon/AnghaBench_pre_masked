
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_1__* s_qcop; } ;
struct TYPE_7__ {int qfs_nextents; int qfs_nblks; scalar_t__ qfs_ino; } ;
struct TYPE_6__ {int qfs_nextents; int qfs_nblks; scalar_t__ qfs_ino; } ;
struct qc_state {TYPE_4__* s_state; TYPE_3__ qs_gquota; TYPE_2__ qs_uquota; int qs_iwarnlimit; int qs_bwarnlimit; int qs_rtbtimelimit; int qs_itimelimit; int qs_btimelimit; int s_incoredqs; int qs_incoredqs; int qs_flags; int qs_version; } ;
struct fs_quota_stat {TYPE_4__* s_state; TYPE_3__ qs_gquota; TYPE_2__ qs_uquota; int qs_iwarnlimit; int qs_bwarnlimit; int qs_rtbtimelimit; int qs_itimelimit; int qs_btimelimit; int s_incoredqs; int qs_incoredqs; int qs_flags; int qs_version; } ;
struct TYPE_8__ {int flags; int nextents; int blocks; scalar_t__ ino; int ino_warnlimit; int spc_warnlimit; int rt_spc_timelimit; int ino_timelimit; int spc_timelimit; } ;
struct TYPE_5__ {int (* get_state ) (struct super_block*,struct qc_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct qc_state*,int ,int) ;
 int FUNC_1 (struct qc_state*) ;
 int FUNC_2 (struct super_block*,struct qc_state*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_6, int VAR_7,
     struct fs_quota_stat *VAR_8)
{
 struct qc_state VAR_9;
 int VAR_10;

 FUNC_0(&VAR_9, 0, sizeof (struct qc_state));
 VAR_10 = VAR_6->s_qcop->get_state(VAR_6, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_0(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->qs_version = VAR_1;
 VAR_8->qs_flags = FUNC_1(&VAR_9);

 if (!VAR_8->qs_flags)
  return -VAR_0;
 VAR_8->qs_incoredqs = VAR_9.s_incoredqs;

 VAR_8->qs_btimelimit = VAR_9.s_state[VAR_7].spc_timelimit;
 VAR_8->qs_itimelimit = VAR_9.s_state[VAR_7].ino_timelimit;
 VAR_8->qs_rtbtimelimit = VAR_9.s_state[VAR_7].rt_spc_timelimit;
 VAR_8->qs_bwarnlimit = VAR_9.s_state[VAR_7].spc_warnlimit;
 VAR_8->qs_iwarnlimit = VAR_9.s_state[VAR_7].ino_warnlimit;


 if (VAR_9.s_state[VAR_5].ino) {
  VAR_8->qs_uquota.qfs_ino = VAR_9.s_state[VAR_5].ino;
  VAR_8->qs_uquota.qfs_nblks = VAR_9.s_state[VAR_5].blocks;
  VAR_8->qs_uquota.qfs_nextents = VAR_9.s_state[VAR_5].nextents;
 }
 if (VAR_9.s_state[VAR_2].ino) {
  VAR_8->qs_gquota.qfs_ino = VAR_9.s_state[VAR_2].ino;
  VAR_8->qs_gquota.qfs_nblks = VAR_9.s_state[VAR_2].blocks;
  VAR_8->qs_gquota.qfs_nextents = VAR_9.s_state[VAR_2].nextents;
 }
 if (VAR_9.s_state[VAR_3].ino) {





  if (!(VAR_9.s_state[VAR_2].flags & VAR_4)) {
   VAR_8->qs_gquota.qfs_ino = VAR_9.s_state[VAR_3].ino;
   VAR_8->qs_gquota.qfs_nblks =
     VAR_9.s_state[VAR_3].blocks;
   VAR_8->qs_gquota.qfs_nextents =
     VAR_9.s_state[VAR_3].nextents;
  }
 }
 return 0;
}
