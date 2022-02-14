
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tpg_np {int tpg_np_kref; } ;
struct iscsi_tiqn {int dummy; } ;
struct iscsi_portal_group {int np_login_sem; struct iscsi_tiqn* tpg_tiqn; } ;
struct iscsi_np {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_tiqn*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iscsi_np *VAR_1, struct iscsi_portal_group *VAR_2,
         struct iscsi_tpg_np *VAR_3)
{
 struct iscsi_tiqn *VAR_4 = VAR_2->tpg_tiqn;

 FUNC_2(&VAR_2->np_login_sem);

 if (VAR_3)
  FUNC_1(&VAR_3->tpg_np_kref, VAR_0);

 if (VAR_4)
  FUNC_0(VAR_4);

 return 0;
}
