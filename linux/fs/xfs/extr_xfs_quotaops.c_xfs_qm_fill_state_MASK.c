
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_ino_t ;
struct xfs_quotainfo {int qi_rtbwarnlimit; int qi_iwarnlimit; int qi_bwarnlimit; int qi_rtbtimelimit; int qi_itimelimit; int qi_btimelimit; } ;
struct xfs_mount {struct xfs_quotainfo* m_quotainfo; } ;
struct TYPE_2__ {int di_nextents; int di_nblocks; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct qc_type_state {int rt_spc_warnlimit; int ino_warnlimit; int spc_warnlimit; int rt_spc_timelimit; int ino_timelimit; int spc_timelimit; int nextents; int blocks; int flags; scalar_t__ ino; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xfs_mount*,int *,scalar_t__,int ,int ,struct xfs_inode**) ;
 int FUNC_1 (struct xfs_inode*) ;

__attribute__((used)) static void
FUNC_2(
 struct qc_type_state *VAR_2,
 struct xfs_mount *VAR_3,
 struct xfs_inode *VAR_4,
 xfs_ino_t VAR_5)
{
 struct xfs_quotainfo *VAR_6 = VAR_3->m_quotainfo;
 bool VAR_7 = 0;

 VAR_2->ino = VAR_5;
 if (!VAR_4 && VAR_5 == VAR_0)
  return;
 if (!VAR_4) {
  if (FUNC_0(VAR_3, ((void*)0), VAR_5, 0, 0, &VAR_4))
   return;
  VAR_7 = 1;
 }
 VAR_2->flags |= VAR_1;
 VAR_2->blocks = VAR_4->i_d.di_nblocks;
 VAR_2->nextents = VAR_4->i_d.di_nextents;
 VAR_2->spc_timelimit = VAR_6->qi_btimelimit;
 VAR_2->ino_timelimit = VAR_6->qi_itimelimit;
 VAR_2->rt_spc_timelimit = VAR_6->qi_rtbtimelimit;
 VAR_2->spc_warnlimit = VAR_6->qi_bwarnlimit;
 VAR_2->ino_warnlimit = VAR_6->qi_iwarnlimit;
 VAR_2->rt_spc_warnlimit = VAR_6->qi_rtbwarnlimit;
 if (VAR_7)
  FUNC_1(VAR_4);
}
