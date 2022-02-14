
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
struct xfs_mount {int m_sb; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*) ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 scalar_t__ FUNC_3 (struct xfs_mount*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

xfs_extlen_t
FUNC_7(
 struct xfs_mount *VAR_0)
{
 if (FUNC_5(&VAR_0->m_sb))
  return FUNC_3(VAR_0) + 1;
 if (FUNC_6(&VAR_0->m_sb))
  return FUNC_2(VAR_0) + 1;
 if (FUNC_4(&VAR_0->m_sb))
  return FUNC_0(VAR_0) + 1;
 return FUNC_1(VAR_0) + 1;
}
