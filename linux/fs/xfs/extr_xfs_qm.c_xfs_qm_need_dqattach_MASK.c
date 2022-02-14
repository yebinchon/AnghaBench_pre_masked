
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_sb; } ;
struct xfs_inode {int i_ino; struct xfs_mount* i_mount; } ;


 int FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_mount*,struct xfs_inode*) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static bool
FUNC_4(
 struct xfs_inode *VAR_0)
{
 struct xfs_mount *VAR_1 = VAR_0->i_mount;

 if (!FUNC_1(VAR_1))
  return 0;
 if (!FUNC_0(VAR_1))
  return 0;
 if (!FUNC_2(VAR_1, VAR_0))
  return 0;
 if (FUNC_3(&VAR_1->m_sb, VAR_0->i_ino))
  return 0;
 return 1;
}
