
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {struct xfs_buf* m_sb_bp; } ;
struct xfs_buf {int b_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*) ;

struct xfs_buf *
FUNC_3(
 struct xfs_mount *VAR_1)
{
 struct xfs_buf *VAR_2 = VAR_1->m_sb_bp;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2->b_flags & VAR_0);
 return VAR_2;
}
