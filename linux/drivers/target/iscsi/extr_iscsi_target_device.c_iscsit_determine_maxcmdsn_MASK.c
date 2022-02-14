
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct se_node_acl {scalar_t__ queue_depth; } ;
struct iscsi_session {int max_cmd_sn; scalar_t__ cmdsn_window; TYPE_2__* se_sess; TYPE_1__* sess_ops; } ;
struct TYPE_4__ {struct se_node_acl* se_node_acl; } ;
struct TYPE_3__ {scalar_t__ SessionType; } ;


 int FUNC_0 (scalar_t__,int *) ;

void FUNC_1(struct iscsi_session *VAR_0)
{
 struct se_node_acl *VAR_1;







 if (VAR_0->sess_ops->SessionType)
  return;

 VAR_1 = VAR_0->se_sess->se_node_acl;







 VAR_0->cmdsn_window = VAR_1->queue_depth;
 FUNC_0(VAR_1->queue_depth - 1, &VAR_0->max_cmd_sn);
}
