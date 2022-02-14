
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {int dummy; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct se_node_acl {char* initiatorname; int nacl_sess_lock; struct se_portal_group* se_tpg; struct se_session* nacl_sess; } ;
struct se_lun_acl {struct se_node_acl* se_lun_nacl; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* sess_get_initiator_sid ) (struct se_session*,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct se_lun_acl* FUNC_0 (struct config_item*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (char*,int ,char*,char*,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct se_session*,unsigned char*,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_2,
  char *VAR_3)
{
 struct se_lun_acl *VAR_4 = FUNC_0(VAR_2);
 struct se_node_acl *VAR_5 = VAR_4->se_lun_nacl;
 struct se_session *VAR_6;
 struct se_portal_group *VAR_7;
 ssize_t VAR_8;
 unsigned char VAR_9[64];

 FUNC_3(&VAR_5->nacl_sess_lock);
 VAR_6 = VAR_5->nacl_sess;
 if (!VAR_6) {
  FUNC_4(&VAR_5->nacl_sess_lock);
  return -VAR_0;
 }

 VAR_7 = VAR_5->se_tpg;

 FUNC_1(VAR_9, 0, 64);
 if (VAR_7->se_tpg_tfo->sess_get_initiator_sid != ((void*)0))
  VAR_7->se_tpg_tfo->sess_get_initiator_sid(VAR_6, VAR_9, 64);

 VAR_8 = FUNC_2(VAR_3, VAR_1, "%s+i+%s\n", VAR_5->initiatorname, VAR_9);
 FUNC_4(&VAR_5->nacl_sess_lock);
 return VAR_8;
}
