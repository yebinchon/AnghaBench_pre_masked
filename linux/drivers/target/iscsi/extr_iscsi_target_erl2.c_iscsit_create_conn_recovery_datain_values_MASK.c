
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_conn {TYPE_3__* sess; TYPE_1__* conn_ops; } ;
struct iscsi_cmd {scalar_t__ next_burst_len; scalar_t__ read_data_done; struct iscsi_conn* conn; } ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_2__* sess_ops; } ;
struct TYPE_5__ {scalar_t__ MaxBurstLength; } ;
struct TYPE_4__ {scalar_t__ MaxRecvDataSegmentLength; } ;


 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(
 struct iscsi_cmd *VAR_0,
 __be32 VAR_1)
{
 u32 VAR_2 = 0;
 struct iscsi_conn *VAR_3 = VAR_0->conn;

 VAR_0->next_burst_len = 0;
 VAR_0->read_data_done = 0;

 while (FUNC_0(VAR_1) > VAR_2) {
  if ((VAR_0->next_burst_len +
       VAR_3->conn_ops->MaxRecvDataSegmentLength) <
       VAR_3->sess->sess_ops->MaxBurstLength) {
   VAR_0->read_data_done +=
          VAR_3->conn_ops->MaxRecvDataSegmentLength;
   VAR_0->next_burst_len +=
          VAR_3->conn_ops->MaxRecvDataSegmentLength;
  } else {
   VAR_0->read_data_done +=
    (VAR_3->sess->sess_ops->MaxBurstLength -
    VAR_0->next_burst_len);
   VAR_0->next_burst_len = 0;
  }
  VAR_2++;
 }
}
