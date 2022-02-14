
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_icount; int m_ifree; int m_fdblocks; int m_delalloc_blks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_2(
 struct xfs_mount *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->m_icount, 0, VAR_1);
 if (VAR_3)
  return -VAR_0;

 VAR_3 = FUNC_1(&VAR_2->m_ifree, 0, VAR_1);
 if (VAR_3)
  goto free_icount;

 VAR_3 = FUNC_1(&VAR_2->m_fdblocks, 0, VAR_1);
 if (VAR_3)
  goto free_ifree;

 VAR_3 = FUNC_1(&VAR_2->m_delalloc_blks, 0, VAR_1);
 if (VAR_3)
  goto free_fdblocks;

 return 0;

free_fdblocks:
 FUNC_0(&VAR_2->m_fdblocks);
free_ifree:
 FUNC_0(&VAR_2->m_ifree);
free_icount:
 FUNC_0(&VAR_2->m_icount);
 return -VAR_0;
}
