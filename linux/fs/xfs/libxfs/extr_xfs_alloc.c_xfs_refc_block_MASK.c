
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_sb; } ;


 unsigned int FUNC_0 (struct xfs_mount*) ;
 unsigned int FUNC_1 (struct xfs_mount*) ;
 unsigned int FUNC_2 (struct xfs_mount*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

unsigned int
FUNC_5(
 struct xfs_mount *VAR_0)
{
 if (FUNC_4(&VAR_0->m_sb))
  return FUNC_2(VAR_0) + 1;
 if (FUNC_3(&VAR_0->m_sb))
  return FUNC_0(VAR_0) + 1;
 return FUNC_1(VAR_0) + 1;
}
