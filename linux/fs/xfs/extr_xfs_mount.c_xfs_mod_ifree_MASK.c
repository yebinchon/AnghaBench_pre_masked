
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_ifree; } ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

int
FUNC_3(
 struct xfs_mount *VAR_1,
 int64_t VAR_2)
{
 FUNC_1(&VAR_1->m_ifree, VAR_2);
 if (FUNC_2(&VAR_1->m_ifree, 0) < 0) {
  FUNC_0(0);
  FUNC_1(&VAR_1->m_ifree, -VAR_2);
  return -VAR_0;
 }
 return 0;
}
