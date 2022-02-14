
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {struct xfs_buf* m_sb_bp; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (struct xfs_buf*) ;

void
FUNC_2(
 struct xfs_mount *VAR_0)
{
 struct xfs_buf *VAR_1 = VAR_0->m_sb_bp;

 FUNC_0(VAR_1);
 VAR_0->m_sb_bp = ((void*)0);
 FUNC_1(VAR_1);
}
