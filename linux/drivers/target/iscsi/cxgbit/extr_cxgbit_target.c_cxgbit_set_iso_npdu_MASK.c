
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_param {int value; } ;
struct iscsi_conn_ops {int MaxRecvDataSegmentLength; } ;
struct iscsi_conn {TYPE_3__* sess; int param_list; TYPE_1__* login; struct iscsi_conn_ops* conn_ops; } ;
struct cxgbit_sock {size_t submode; int max_iso_npdu; int emss; struct iscsi_conn* conn; } ;
struct TYPE_6__ {TYPE_2__* sess_ops; } ;
struct TYPE_5__ {int MaxBurstLength; } ;
struct TYPE_4__ {scalar_t__ leading_connection; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 struct iscsi_param* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct cxgbit_sock *VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_4->conn;
 struct iscsi_conn_ops *VAR_6 = VAR_5->conn_ops;
 struct iscsi_param *VAR_7;
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12;

 if (VAR_5->login->leading_connection) {
  VAR_7 = FUNC_0(VAR_2,
        VAR_5->param_list);
  if (!VAR_7) {
   FUNC_3("param not found key %s\n", VAR_2);
   return -1;
  }

  if (FUNC_1(VAR_7->value, 0, &VAR_9) < 0)
   return -1;
 } else {
  VAR_9 = VAR_5->sess->sess_ops->MaxBurstLength;
 }

 VAR_8 = VAR_6->MaxRecvDataSegmentLength;
 VAR_10 = VAR_9 / VAR_8;

 VAR_12 = FUNC_4(VAR_0, VAR_4->emss);

 VAR_11 = VAR_12 /
         (VAR_1 + VAR_8 +
   VAR_3[VAR_4->submode]);

 VAR_4->max_iso_npdu = FUNC_2(VAR_10, VAR_11);

 if (VAR_4->max_iso_npdu <= 1)
  VAR_4->max_iso_npdu = 0;

 return 0;
}
