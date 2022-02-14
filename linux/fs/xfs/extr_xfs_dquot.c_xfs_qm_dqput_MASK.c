
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_quotainfo {int qi_lru; } ;
struct xfs_dquot {scalar_t__ q_nrefs; TYPE_1__* q_mount; int q_lru; } ;
struct TYPE_2__ {struct xfs_quotainfo* m_quotainfo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_dquot*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (struct xfs_dquot*) ;
 int FUNC_5 (struct xfs_dquot*) ;
 int FUNC_6 (struct xfs_dquot*) ;
 int VAR_0 ;

void
FUNC_7(
 struct xfs_dquot *VAR_1)
{
 FUNC_0(VAR_1->q_nrefs > 0);
 FUNC_0(FUNC_1(VAR_1));

 FUNC_4(VAR_1);

 if (--VAR_1->q_nrefs == 0) {
  struct xfs_quotainfo *VAR_2 = VAR_1->q_mount->m_quotainfo;
  FUNC_5(VAR_1);

  if (FUNC_3(&VAR_2->qi_lru, &VAR_1->q_lru))
   FUNC_2(VAR_1->q_mount, VAR_0);
 }
 FUNC_6(VAR_1);
}
