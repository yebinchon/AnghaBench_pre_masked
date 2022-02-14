
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct iscsi_param {int value; } ;
struct iscsi_conn_ops {scalar_t__ MaxRecvDataSegmentLength; } ;
struct iscsi_conn {TYPE_3__* sess; int param_list; TYPE_1__* login; struct iscsi_conn_ops* conn_ops; struct cxgbit_sock* context; } ;
struct TYPE_12__ {int flags; struct cxgbit_device* cdev; } ;
struct cxgbit_sock {TYPE_6__ com; } ;
struct TYPE_10__ {int adapter_type; struct cxgbi_ppm** iscsi_ppm; } ;
struct cxgbit_device {scalar_t__ mdsl; int flags; TYPE_4__ lldi; } ;
struct TYPE_11__ {int pgsz_idx_dflt; } ;
struct cxgbi_ppm {TYPE_5__ tformat; } ;
struct TYPE_9__ {TYPE_2__* sess_ops; } ;
struct TYPE_8__ {int ErrorRecoveryLevel; } ;
struct TYPE_7__ {scalar_t__ leading_connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxgbit_sock*) ;
 scalar_t__ FUNC_1 (struct cxgbit_sock*) ;
 scalar_t__ FUNC_2 (struct cxgbit_sock*) ;
 scalar_t__ FUNC_3 (struct cxgbit_sock*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct iscsi_param* FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct iscsi_conn *VAR_4)
{
 struct cxgbit_sock *VAR_5 = VAR_4->context;
 struct cxgbit_device *VAR_6 = VAR_5->com.cdev;
 struct cxgbi_ppm *VAR_7 = *VAR_5->com.cdev->lldi.iscsi_ppm;
 struct iscsi_conn_ops *VAR_8 = VAR_4->conn_ops;
 struct iscsi_param *VAR_9;
 u8 VAR_10;

 if (VAR_8->MaxRecvDataSegmentLength > VAR_6->mdsl)
  VAR_8->MaxRecvDataSegmentLength = VAR_6->mdsl;

 if (FUNC_1(VAR_5))
  return -1;

 if (VAR_4->login->leading_connection) {
  VAR_9 = FUNC_5(VAR_3,
        VAR_4->param_list);
  if (!VAR_9) {
   FUNC_7("param not found key %s\n", VAR_3);
   return -1;
  }
  if (FUNC_6(VAR_9->value, 0, &VAR_10) < 0)
   return -1;
 } else {
  VAR_10 = VAR_4->sess->sess_ops->ErrorRecoveryLevel;
 }

 if (!VAR_10) {
  int VAR_11;

  VAR_11 = FUNC_0(VAR_5);
  if (VAR_11 < 0) {
   return -1;
  } else if (VAR_11 > 0) {
   if (FUNC_4(VAR_6->lldi.adapter_type))
    goto enable_ddp;
   else
    return 0;
  }

  if (FUNC_9(VAR_1, &VAR_6->flags)) {
   if (FUNC_2(VAR_5))
    return -1;
  }

enable_ddp:
  if (FUNC_9(VAR_0, &VAR_6->flags)) {
   if (FUNC_3(VAR_5,
          VAR_7->tformat.pgsz_idx_dflt))
    return -1;
   FUNC_8(VAR_2, &VAR_5->com.flags);
  }
 }

 return 0;
}
