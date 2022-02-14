
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_datain_req {scalar_t__ begrun; scalar_t__ next_burst_len; int read_data_done; } ;
struct iscsi_conn {TYPE_3__* sess; TYPE_1__* conn_ops; } ;
struct iscsi_cmd {scalar_t__ pdu_send_order; scalar_t__ pdu_start; scalar_t__ seq_no; struct iscsi_conn* conn; } ;
struct TYPE_6__ {TYPE_2__* sess_ops; } ;
struct TYPE_5__ {scalar_t__ MaxBurstLength; int DataPDUInOrder; } ;
struct TYPE_4__ {scalar_t__ MaxRecvDataSegmentLength; } ;



int FUNC_0(
 struct iscsi_cmd *VAR_0,
 struct iscsi_datain_req *VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = 0;
 u32 VAR_4 = 0, VAR_5 = 0;
 u32 VAR_6 = VAR_1->begrun;
 struct iscsi_conn *VAR_7 = VAR_0->conn;

 while (VAR_6 > VAR_2++) {
  VAR_3++;
  if ((VAR_1->next_burst_len +
       VAR_7->conn_ops->MaxRecvDataSegmentLength) <
       VAR_7->sess->sess_ops->MaxBurstLength) {
   VAR_1->read_data_done +=
    VAR_7->conn_ops->MaxRecvDataSegmentLength;
   VAR_1->next_burst_len +=
    VAR_7->conn_ops->MaxRecvDataSegmentLength;
  } else {
   VAR_1->read_data_done +=
    (VAR_7->sess->sess_ops->MaxBurstLength -
     VAR_1->next_burst_len);
   VAR_1->next_burst_len = 0;
   VAR_4 += VAR_3;
   VAR_3 = 0;
   VAR_5++;
  }
 }

 if (!VAR_7->sess->sess_ops->DataPDUInOrder) {
  VAR_0->seq_no = VAR_5;
  VAR_0->pdu_start = VAR_4;
  VAR_0->pdu_send_order = VAR_3;
 }

 return 0;
}
