
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_quotainfo {int qi_pquotaip; int qi_gquotaip; int qi_uquotaip; int qi_dquots; } ;
struct TYPE_3__ {int sb_pquotino; int sb_gquotino; int sb_uquotino; } ;
struct xfs_mount {TYPE_1__ m_sb; struct xfs_quotainfo* m_quotainfo; } ;
struct super_block {int dummy; } ;
struct qc_state {TYPE_2__* s_state; int s_incoredqs; } ;
struct TYPE_4__ {int flags; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (struct xfs_mount*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*) ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 scalar_t__ FUNC_3 (struct xfs_mount*) ;
 int FUNC_4 (struct xfs_mount*) ;
 scalar_t__ FUNC_5 (struct xfs_mount*) ;
 scalar_t__ FUNC_6 (struct xfs_mount*) ;
 struct xfs_mount* FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct qc_state*,int ,int) ;
 int FUNC_9 (TYPE_2__*,struct xfs_mount*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(
 struct super_block *VAR_5,
 struct qc_state *VAR_6)
{
 struct xfs_mount *VAR_7 = FUNC_7(VAR_5);
 struct xfs_quotainfo *VAR_8 = VAR_7->m_quotainfo;

 FUNC_8(VAR_6, 0, sizeof(*VAR_6));
 if (!FUNC_4(VAR_7))
  return 0;
 VAR_6->s_incoredqs = VAR_8->qi_dquots;
 if (FUNC_6(VAR_7))
  VAR_6->s_state[VAR_4].flags |= VAR_2;
 if (FUNC_5(VAR_7))
  VAR_6->s_state[VAR_4].flags |= VAR_3;
 if (FUNC_1(VAR_7))
  VAR_6->s_state[VAR_0].flags |= VAR_2;
 if (FUNC_0(VAR_7))
  VAR_6->s_state[VAR_0].flags |= VAR_3;
 if (FUNC_3(VAR_7))
  VAR_6->s_state[VAR_1].flags |= VAR_2;
 if (FUNC_2(VAR_7))
  VAR_6->s_state[VAR_1].flags |= VAR_3;

 FUNC_9(&VAR_6->s_state[VAR_4], VAR_7, VAR_8->qi_uquotaip,
     VAR_7->m_sb.sb_uquotino);
 FUNC_9(&VAR_6->s_state[VAR_0], VAR_7, VAR_8->qi_gquotaip,
     VAR_7->m_sb.sb_gquotino);
 FUNC_9(&VAR_6->s_state[VAR_1], VAR_7, VAR_8->qi_pquotaip,
     VAR_7->m_sb.sb_pquotino);
 return 0;
}
