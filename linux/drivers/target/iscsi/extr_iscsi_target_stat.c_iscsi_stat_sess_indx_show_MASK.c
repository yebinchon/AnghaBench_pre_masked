
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {struct iscsi_session* fabric_sess_ptr; } ;
struct se_node_acl {int nacl_sess_lock; struct se_session* nacl_sess; } ;
struct iscsi_session {int session_index; } ;
struct iscsi_node_acl {struct se_node_acl se_node_acl; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iscsi_node_acl* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1, char *VAR_2)
{
 struct iscsi_node_acl *VAR_3 = FUNC_0(VAR_1);
 struct se_node_acl *VAR_4 = &VAR_3->se_node_acl;
 struct iscsi_session *VAR_5;
 struct se_session *VAR_6;
 ssize_t VAR_7 = 0;

 FUNC_2(&VAR_4->nacl_sess_lock);
 VAR_6 = VAR_4->nacl_sess;
 if (VAR_6) {
  VAR_5 = VAR_6->fabric_sess_ptr;
  if (VAR_5)
   VAR_7 = FUNC_1(VAR_2, VAR_0, "%u\n",
     VAR_5->session_index);
 }
 FUNC_3(&VAR_4->nacl_sess_lock);

 return VAR_7;
}
