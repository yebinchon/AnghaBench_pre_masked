
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_datain_req {int recovery; } ;
struct iscsi_datain {scalar_t__ length; int offset; } ;
struct iscsi_conn {TYPE_2__* sess; TYPE_1__* conn_ops; struct cxgbit_sock* context; } ;
struct TYPE_6__ {int data_length; } ;
struct iscsi_cmd {TYPE_3__ se_cmd; } ;
struct cxgbit_sock {scalar_t__ max_iso_npdu; } ;
struct TYPE_5__ {int tx_data_octets; } ;
struct TYPE_4__ {int MaxRecvDataSegmentLength; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (struct cxgbit_sock*,struct iscsi_cmd*,struct iscsi_datain const*) ;
 int FUNC_2 (struct cxgbit_sock*,struct iscsi_cmd*,struct iscsi_datain_req*) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_conn *VAR_0, struct iscsi_cmd *VAR_1,
         struct iscsi_datain_req *VAR_2,
         const struct iscsi_datain *VAR_3)
{
 struct cxgbit_sock *VAR_4 = VAR_0->context;
 u32 VAR_5 = VAR_1->se_cmd.data_length;
 u32 VAR_6 = ((-VAR_5) & 3);
 u32 VAR_7 = VAR_0->conn_ops->MaxRecvDataSegmentLength;

 if ((VAR_5 > VAR_7) && (!VAR_2->recovery) &&
     (!VAR_6) && (!VAR_3->offset) && VAR_4->max_iso_npdu) {
  FUNC_0(VAR_5 - VAR_3->length,
    &VAR_0->sess->tx_data_octets);
  return FUNC_2(VAR_4, VAR_1, VAR_2);
 }

 return FUNC_1(VAR_4, VAR_1, VAR_3);
}
