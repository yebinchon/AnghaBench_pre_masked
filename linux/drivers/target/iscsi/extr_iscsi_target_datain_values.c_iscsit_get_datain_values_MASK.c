
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_datain_req {int dummy; } ;
struct iscsi_datain {int dummy; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ DataPDUInOrder; scalar_t__ DataSequenceInOrder; } ;


 struct iscsi_datain_req* FUNC_0 (struct iscsi_cmd*,struct iscsi_datain*) ;
 struct iscsi_datain_req* FUNC_1 (struct iscsi_cmd*,struct iscsi_datain*) ;
 struct iscsi_datain_req* FUNC_2 (struct iscsi_cmd*,struct iscsi_datain*) ;
 struct iscsi_datain_req* FUNC_3 (struct iscsi_cmd*,struct iscsi_datain*) ;

struct iscsi_datain_req *FUNC_4(
 struct iscsi_cmd *VAR_0,
 struct iscsi_datain *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_0->conn;

 if (VAR_2->sess->sess_ops->DataSequenceInOrder &&
     VAR_2->sess->sess_ops->DataPDUInOrder)
  return FUNC_3(VAR_0, VAR_1);
 else if (!VAR_2->sess->sess_ops->DataSequenceInOrder &&
    VAR_2->sess->sess_ops->DataPDUInOrder)
  return FUNC_1(VAR_0, VAR_1);
 else if (VAR_2->sess->sess_ops->DataSequenceInOrder &&
   !VAR_2->sess->sess_ops->DataPDUInOrder)
  return FUNC_2(VAR_0, VAR_1);
 else if (!VAR_2->sess->sess_ops->DataSequenceInOrder &&
     !VAR_2->sess->sess_ops->DataPDUInOrder)
  return FUNC_0(VAR_0, VAR_1);

 return ((void*)0);
}
