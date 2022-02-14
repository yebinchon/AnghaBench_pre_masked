
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct TYPE_2__ {void* sb_fdblocks; void* sb_ifree; void* sb_icount; } ;
struct xfs_mount {TYPE_1__ m_sb; int m_fdblocks; int m_ifree; int m_icount; } ;
struct xfs_dsb {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_buf*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct xfs_trans*,struct xfs_buf*,int ) ;
 struct xfs_buf* FUNC_4 (struct xfs_trans*,struct xfs_mount*) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_buf*,int ,int) ;

void
FUNC_6(
 struct xfs_trans *VAR_1)
{
 struct xfs_mount *VAR_2 = VAR_1->t_mountp;
 struct xfs_buf *VAR_3 = FUNC_4(VAR_1, VAR_2);

 VAR_2->m_sb.sb_icount = FUNC_1(&VAR_2->m_icount);
 VAR_2->m_sb.sb_ifree = FUNC_1(&VAR_2->m_ifree);
 VAR_2->m_sb.sb_fdblocks = FUNC_1(&VAR_2->m_fdblocks);

 FUNC_2(FUNC_0(VAR_3), &VAR_2->m_sb);
 FUNC_3(VAR_1, VAR_3, VAR_0);
 FUNC_5(VAR_1, VAR_3, 0, sizeof(struct xfs_dsb) - 1);
}
