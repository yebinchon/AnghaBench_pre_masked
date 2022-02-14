
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {scalar_t__ m_rtdev_targp; scalar_t__ m_logdev_targp; scalar_t__ m_ddev_targp; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int
FUNC_2(
 struct xfs_mount *VAR_1,
 char *VAR_2)
{
 if (FUNC_1(VAR_1->m_ddev_targp) ||
     FUNC_1(VAR_1->m_logdev_targp) ||
     (VAR_1->m_rtdev_targp && FUNC_1(VAR_1->m_rtdev_targp))) {
  FUNC_0(VAR_1, "%s required on read-only device.", VAR_2);
  FUNC_0(VAR_1, "write access unavailable, cannot proceed.");
  return -VAR_0;
 }
 return 0;
}
