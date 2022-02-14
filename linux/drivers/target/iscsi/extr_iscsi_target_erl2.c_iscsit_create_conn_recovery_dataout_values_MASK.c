
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ write_data_done; scalar_t__ next_burst_len; scalar_t__ data_sn; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ MaxBurstLength; } ;



void FUNC_0(
 struct iscsi_cmd *VAR_0)
{
 u32 VAR_1 = 0;
 struct iscsi_conn *VAR_2 = VAR_0->conn;

 VAR_0->data_sn = 0;
 VAR_0->next_burst_len = 0;

 while (VAR_0->write_data_done > VAR_1) {
  if ((VAR_1 + VAR_2->sess->sess_ops->MaxBurstLength) <=
       VAR_0->write_data_done)
   VAR_1 += VAR_2->sess->sess_ops->MaxBurstLength;
  else
   break;
 }

 VAR_0->write_data_done = VAR_1;
}
