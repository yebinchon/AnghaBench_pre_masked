
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iscsi_tiqn {int dummy; } ;
struct iscsi_portal_group {int tpg_np_lock; int tpg_state_lock; int np_login_sem; int tpg_access_lock; int tpg_list; int tpg_gnp_list; struct iscsi_tiqn* tpg_tiqn; int tpg_state; int tpgt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct iscsi_portal_group* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

struct iscsi_portal_group *FUNC_6(struct iscsi_tiqn *VAR_2, u16 VAR_3)
{
 struct iscsi_portal_group *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct iscsi_portal_group), VAR_0);
 if (!VAR_4) {
  FUNC_3("Unable to allocate struct iscsi_portal_group\n");
  return ((void*)0);
 }

 VAR_4->tpgt = VAR_3;
 VAR_4->tpg_state = VAR_1;
 VAR_4->tpg_tiqn = VAR_2;
 FUNC_0(&VAR_4->tpg_gnp_list);
 FUNC_0(&VAR_4->tpg_list);
 FUNC_2(&VAR_4->tpg_access_lock);
 FUNC_4(&VAR_4->np_login_sem, 1);
 FUNC_5(&VAR_4->tpg_state_lock);
 FUNC_5(&VAR_4->tpg_np_lock);

 return VAR_4;
}
