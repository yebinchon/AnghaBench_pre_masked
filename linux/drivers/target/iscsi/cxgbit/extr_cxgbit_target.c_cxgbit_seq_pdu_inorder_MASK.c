
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_param {int value; } ;
struct iscsi_conn {TYPE_2__* sess; int param_list; TYPE_3__* login; } ;
struct cxgbit_sock {struct iscsi_conn* conn; } ;
struct TYPE_6__ {scalar_t__ leading_connection; } ;
struct TYPE_5__ {TYPE_1__* sess_ops; } ;
struct TYPE_4__ {int DataPDUInOrder; int DataSequenceInOrder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iscsi_param* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cxgbit_sock *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_3->conn;
 struct iscsi_param *VAR_5;

 if (VAR_4->login->leading_connection) {
  VAR_5 = FUNC_0(VAR_1,
        VAR_4->param_list);
  if (!VAR_5) {
   FUNC_1("param not found key %s\n", VAR_1);
   return -1;
  }

  if (FUNC_2(VAR_5->value, VAR_2))
   return 1;

  VAR_5 = FUNC_0(VAR_0,
        VAR_4->param_list);
  if (!VAR_5) {
   FUNC_1("param not found key %s\n", VAR_0);
   return -1;
  }

  if (FUNC_2(VAR_5->value, VAR_2))
   return 1;

 } else {
  if (!VAR_4->sess->sess_ops->DataSequenceInOrder)
   return 1;
  if (!VAR_4->sess->sess_ops->DataPDUInOrder)
   return 1;
 }

 return 0;
}
