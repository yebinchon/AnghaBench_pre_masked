
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_core_fabric_ops {int fabric_name; int (* sess_get_initiator_sid ) (struct se_session*,unsigned char*,int) ;int (* tpg_check_prot_fabric_only ) (struct se_portal_group*) ;} ;
struct se_session {void* fabric_sess_ptr; int sess_list; int sess_acl_list; int sess_bin_isid; int sess_prot_type; struct se_portal_group* se_tpg; } ;
struct se_portal_group {struct target_core_fabric_ops* se_tpg_tfo; int tpg_sess_list; } ;
struct se_node_acl {int nacl_sess_lock; int acl_sess_list; struct se_session* nacl_sess; int saved_prot_type; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (char*,int ,void*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct se_portal_group*) ;
 int FUNC_7 (struct se_session*,unsigned char*,int) ;

void FUNC_8(
 struct se_portal_group *VAR_1,
 struct se_node_acl *VAR_2,
 struct se_session *VAR_3,
 void *VAR_4)
{
 const struct target_core_fabric_ops *VAR_5 = VAR_1->se_tpg_tfo;
 unsigned char VAR_6[VAR_0];
 unsigned long VAR_7;

 VAR_3->se_tpg = VAR_1;
 VAR_3->fabric_sess_ptr = VAR_4;






 if (VAR_2) {
  if (VAR_2->saved_prot_type)
   VAR_3->sess_prot_type = VAR_2->saved_prot_type;
  else if (VAR_5->tpg_check_prot_fabric_only)
   VAR_3->sess_prot_type = VAR_2->saved_prot_type =
     VAR_5->tpg_check_prot_fabric_only(VAR_1);




  if (VAR_1->se_tpg_tfo->sess_get_initiator_sid != ((void*)0)) {
   FUNC_2(&VAR_6[0], 0, VAR_0);
   VAR_1->se_tpg_tfo->sess_get_initiator_sid(VAR_3,
     &VAR_6[0], VAR_0);
   VAR_3->sess_bin_isid = FUNC_0(&VAR_6[0]);
  }

  FUNC_4(&VAR_2->nacl_sess_lock, VAR_7);




  VAR_2->nacl_sess = VAR_3;

  FUNC_1(&VAR_3->sess_acl_list,
         &VAR_2->acl_sess_list);
  FUNC_5(&VAR_2->nacl_sess_lock, VAR_7);
 }
 FUNC_1(&VAR_3->sess_list, &VAR_1->tpg_sess_list);

 FUNC_3("TARGET_CORE[%s]: Registered fabric_sess_ptr: %p\n",
  VAR_1->se_tpg_tfo->fabric_name, VAR_3->fabric_sess_ptr);
}
