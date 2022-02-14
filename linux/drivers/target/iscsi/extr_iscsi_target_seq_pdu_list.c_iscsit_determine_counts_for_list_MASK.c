
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iscsi_conn {TYPE_4__* sess; TYPE_1__* conn_ops; } ;
struct TYPE_6__ {scalar_t__ data_direction; scalar_t__ data_length; } ;
struct iscsi_cmd {TYPE_2__ se_cmd; struct iscsi_conn* conn; } ;
struct iscsi_build_list {scalar_t__ type; scalar_t__ immediate_data_length; } ;
struct TYPE_8__ {TYPE_3__* sess_ops; } ;
struct TYPE_7__ {scalar_t__ FirstBurstLength; scalar_t__ MaxBurstLength; } ;
struct TYPE_5__ {scalar_t__ MaxXmitDataSegmentLength; scalar_t__ MaxRecvDataSegmentLength; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(
 struct iscsi_cmd *VAR_4,
 struct iscsi_build_list *VAR_5,
 u32 *VAR_6,
 u32 *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9 = 0, VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12;
 struct iscsi_conn *VAR_13 = VAR_4->conn;

 if (VAR_4->se_cmd.data_direction == VAR_0)
  VAR_12 = VAR_4->conn->conn_ops->MaxXmitDataSegmentLength;
 else
  VAR_12 = VAR_4->conn->conn_ops->MaxRecvDataSegmentLength;

 if ((VAR_5->type == VAR_1) ||
     (VAR_5->type == VAR_2))
  VAR_8 = 1;

 if ((VAR_5->type == VAR_3) ||
     (VAR_5->type == VAR_2))
  VAR_11 = FUNC_0(VAR_4->se_cmd.data_length,
   VAR_13->sess->sess_ops->FirstBurstLength);

 while (VAR_10 < VAR_4->se_cmd.data_length) {
  *VAR_7 += 1;

  if (VAR_8) {
   VAR_8 = 0;
   VAR_10 += VAR_5->immediate_data_length;
   *VAR_6 += 1;
   if (VAR_11)
    VAR_11 -=
     VAR_5->immediate_data_length;
   continue;
  }
  if (VAR_11 > 0) {
   if ((VAR_10 + VAR_12) >= VAR_4->se_cmd.data_length) {
    VAR_11 -=
     (VAR_4->se_cmd.data_length - VAR_10);
    VAR_10 += (VAR_4->se_cmd.data_length - VAR_10);
    continue;
   }
   if ((VAR_10 + VAR_12)
     >= VAR_13->sess->sess_ops->FirstBurstLength) {
    VAR_11 -=
     (VAR_13->sess->sess_ops->FirstBurstLength -
     VAR_10);
    VAR_10 += (VAR_13->sess->sess_ops->FirstBurstLength -
     VAR_10);
    VAR_9 = 0;
    *VAR_6 += 1;
    continue;
   }

   VAR_10 += VAR_12;
   VAR_11 -= VAR_12;
   continue;
  }
  if ((VAR_10 + VAR_12) >= VAR_4->se_cmd.data_length) {
   VAR_10 += (VAR_4->se_cmd.data_length - VAR_10);
   continue;
  }
  if ((VAR_9 + VAR_12) >=
       VAR_13->sess->sess_ops->MaxBurstLength) {
   VAR_10 += (VAR_13->sess->sess_ops->MaxBurstLength -
     VAR_9);
   VAR_9 = 0;
   *VAR_6 += 1;
   continue;
  }

  VAR_9 += VAR_12;
  VAR_10 += VAR_12;
 }
}
