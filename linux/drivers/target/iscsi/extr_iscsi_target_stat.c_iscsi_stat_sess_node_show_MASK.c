
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {struct iscsi_session* fabric_sess_ptr; } ;
struct se_node_acl {int nacl_sess_lock; struct se_session* nacl_sess; } ;
struct iscsi_session {TYPE_1__* sess_ops; } ;
struct iscsi_node_acl {struct se_node_acl se_node_acl; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ SessionType; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iscsi_node_acl* FUNC_0 (struct config_item*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_2, char *VAR_3)
{
 struct iscsi_node_acl *VAR_4 = FUNC_0(VAR_2);
 struct se_node_acl *VAR_5 = &VAR_4->se_node_acl;
 struct iscsi_session *VAR_6;
 struct se_session *VAR_7;
 ssize_t VAR_8 = 0;

 FUNC_2(&VAR_5->nacl_sess_lock);
 VAR_7 = VAR_5->nacl_sess;
 if (VAR_7) {
  VAR_6 = VAR_7->fabric_sess_ptr;
  if (VAR_6)
   VAR_8 = FUNC_1(VAR_3, VAR_1, "%u\n",
    VAR_6->sess_ops->SessionType ? 0 : VAR_0);
 }
 FUNC_3(&VAR_5->nacl_sess_lock);

 return VAR_8;
}
