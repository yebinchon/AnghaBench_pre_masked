
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_error_kobj; int m_error_meta_kobj; struct xfs_error_cfg** m_error_cfg; } ;
struct xfs_error_cfg {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

void
FUNC_1(
 struct xfs_mount *VAR_2)
{
 struct xfs_error_cfg *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_3 = &VAR_2->m_error_cfg[VAR_4][VAR_5];

   FUNC_0(&VAR_3->kobj);
  }
 }
 FUNC_0(&VAR_2->m_error_meta_kobj);
 FUNC_0(&VAR_2->m_error_kobj);
}
