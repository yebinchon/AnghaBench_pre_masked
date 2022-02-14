
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {TYPE_1__* s_qcop; } ;
struct TYPE_9__ {int qfs_nextents; int qfs_nblks; scalar_t__ qfs_ino; } ;
struct TYPE_8__ {int qfs_nextents; int qfs_nblks; scalar_t__ qfs_ino; } ;
struct TYPE_7__ {int qfs_nextents; int qfs_nblks; scalar_t__ qfs_ino; } ;
struct qc_state {TYPE_5__* s_state; TYPE_4__ qs_pquota; TYPE_3__ qs_gquota; TYPE_2__ qs_uquota; int qs_iwarnlimit; int qs_bwarnlimit; int qs_rtbtimelimit; int qs_itimelimit; int qs_btimelimit; int s_incoredqs; int qs_incoredqs; int qs_flags; int qs_version; } ;
struct fs_quota_statv {TYPE_5__* s_state; TYPE_4__ qs_pquota; TYPE_3__ qs_gquota; TYPE_2__ qs_uquota; int qs_iwarnlimit; int qs_bwarnlimit; int qs_rtbtimelimit; int qs_itimelimit; int qs_btimelimit; int s_incoredqs; int qs_incoredqs; int qs_flags; int qs_version; } ;
struct TYPE_10__ {int nextents; int blocks; scalar_t__ ino; int ino_warnlimit; int spc_warnlimit; int rt_spc_timelimit; int ino_timelimit; int spc_timelimit; } ;
struct TYPE_6__ {int (* get_state ) (struct super_block*,struct qc_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct qc_state*,int ,int) ;
 int FUNC_1 (struct qc_state*) ;
 int FUNC_2 (struct super_block*,struct qc_state*) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_5, int VAR_6,
      struct fs_quota_statv *VAR_7)
{
 struct qc_state VAR_8;
 int VAR_9;

 FUNC_0(&VAR_8, 0, sizeof (struct qc_state));
 VAR_9 = VAR_5->s_qcop->get_state(VAR_5, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_0(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->qs_version = VAR_1;
 VAR_7->qs_flags = FUNC_1(&VAR_8);

 if (!VAR_7->qs_flags)
  return -VAR_0;
 VAR_7->qs_incoredqs = VAR_8.s_incoredqs;

 VAR_7->qs_btimelimit = VAR_8.s_state[VAR_6].spc_timelimit;
 VAR_7->qs_itimelimit = VAR_8.s_state[VAR_6].ino_timelimit;
 VAR_7->qs_rtbtimelimit = VAR_8.s_state[VAR_6].rt_spc_timelimit;
 VAR_7->qs_bwarnlimit = VAR_8.s_state[VAR_6].spc_warnlimit;
 VAR_7->qs_iwarnlimit = VAR_8.s_state[VAR_6].ino_warnlimit;


 if (VAR_8.s_state[VAR_4].ino) {
  VAR_7->qs_uquota.qfs_ino = VAR_8.s_state[VAR_4].ino;
  VAR_7->qs_uquota.qfs_nblks = VAR_8.s_state[VAR_4].blocks;
  VAR_7->qs_uquota.qfs_nextents = VAR_8.s_state[VAR_4].nextents;
 }
 if (VAR_8.s_state[VAR_2].ino) {
  VAR_7->qs_gquota.qfs_ino = VAR_8.s_state[VAR_2].ino;
  VAR_7->qs_gquota.qfs_nblks = VAR_8.s_state[VAR_2].blocks;
  VAR_7->qs_gquota.qfs_nextents = VAR_8.s_state[VAR_2].nextents;
 }
 if (VAR_8.s_state[VAR_3].ino) {
  VAR_7->qs_pquota.qfs_ino = VAR_8.s_state[VAR_3].ino;
  VAR_7->qs_pquota.qfs_nblks = VAR_8.s_state[VAR_3].blocks;
  VAR_7->qs_pquota.qfs_nextents = VAR_8.s_state[VAR_3].nextents;
 }
 return 0;
}
