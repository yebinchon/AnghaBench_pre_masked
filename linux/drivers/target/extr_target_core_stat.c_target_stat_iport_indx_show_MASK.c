
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {int dummy; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {int nacl_sess_lock; struct se_portal_group* se_tpg; struct se_session* nacl_sess; } ;
struct se_lun_acl {struct se_node_acl* se_lun_nacl; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* sess_get_index ) (struct se_session*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_lun_acl* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct se_session*) ;
 int FUNC_5 (struct se_session*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_2,
  char *VAR_3)
{
 struct se_lun_acl *VAR_4 = FUNC_0(VAR_2);
 struct se_node_acl *VAR_5 = VAR_4->se_lun_nacl;
 struct se_session *VAR_6;
 struct se_portal_group *VAR_7;
 ssize_t VAR_8;

 FUNC_2(&VAR_5->nacl_sess_lock);
 VAR_6 = VAR_5->nacl_sess;
 if (!VAR_6) {
  FUNC_3(&VAR_5->nacl_sess_lock);
  return -VAR_0;
 }

 VAR_7 = VAR_5->se_tpg;

 VAR_8 = FUNC_1(VAR_3, VAR_1, "%u\n",
   VAR_7->se_tpg_tfo->sess_get_index(VAR_6));
 FUNC_3(&VAR_5->nacl_sess_lock);
 return VAR_8;
}
