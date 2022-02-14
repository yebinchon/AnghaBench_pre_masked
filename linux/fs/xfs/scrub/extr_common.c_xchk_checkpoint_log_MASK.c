
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_ail; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct xfs_mount*,int ) ;

int
FUNC_2(
 struct xfs_mount *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_1->m_ail);
 return 0;
}
