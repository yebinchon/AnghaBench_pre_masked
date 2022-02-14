
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_delalloc_blks; int m_fdblocks; int m_ifree; int m_icount; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_mount *VAR_0)
{
 FUNC_2(&VAR_0->m_icount);
 FUNC_2(&VAR_0->m_ifree);
 FUNC_2(&VAR_0->m_fdblocks);
 FUNC_0(FUNC_1(VAR_0) ||
        FUNC_3(&VAR_0->m_delalloc_blks) == 0);
 FUNC_2(&VAR_0->m_delalloc_blks);
}
