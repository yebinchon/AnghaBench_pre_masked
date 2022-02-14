
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_icount; } ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;

int
FUNC_4(
 struct xfs_mount *VAR_2,
 int64_t VAR_3)
{
 FUNC_3(&VAR_2->m_icount, VAR_3, VAR_1);
 if (FUNC_1(&VAR_2->m_icount, 0, VAR_1) < 0) {
  FUNC_0(0);
  FUNC_2(&VAR_2->m_icount, -VAR_3);
  return -VAR_0;
 }
 return 0;
}
