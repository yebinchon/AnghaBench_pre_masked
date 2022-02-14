
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_session {TYPE_2__* sess_ops; } ;
struct iscsi_conn {TYPE_1__* conn_transport; struct iscsi_session* sess; } ;
struct TYPE_4__ {int SessionType; } ;
struct TYPE_3__ {scalar_t__ transport_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iscsi_conn*) ;

__attribute__((used)) static void FUNC_1(struct iscsi_conn *VAR_1)
{
 struct iscsi_session *VAR_2 = VAR_1->sess;



 if (VAR_1->conn_transport->transport_type == VAR_0)
  return;

 if (!VAR_2->sess_ops->SessionType)
  FUNC_0(VAR_1);
}
