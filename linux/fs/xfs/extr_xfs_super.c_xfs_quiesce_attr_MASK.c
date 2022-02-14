
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_active_trans; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int FUNC_4 (struct xfs_mount*) ;
 int FUNC_5 (struct xfs_mount*) ;
 int FUNC_6 (struct xfs_mount*,int ) ;
 int FUNC_7 (struct xfs_mount*,char*) ;

void
FUNC_8(
 struct xfs_mount *VAR_2)
{
 int VAR_3 = 0;


 while (FUNC_1(&VAR_2->m_active_trans) > 0)
  FUNC_2(100);


 FUNC_3(VAR_2, VAR_1);


 FUNC_6(VAR_2, 0);
 FUNC_6(VAR_2, VAR_0);


 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  FUNC_7(VAR_2, "xfs_attr_quiesce: failed to log sb changes. "
    "Frozen image may not be consistent.");




 FUNC_0(FUNC_1(&VAR_2->m_active_trans) != 0);

 FUNC_4(VAR_2);
}
