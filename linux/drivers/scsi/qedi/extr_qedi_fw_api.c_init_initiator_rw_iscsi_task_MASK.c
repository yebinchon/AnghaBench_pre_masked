
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sgl_task_params {int dummy; } ;
struct scsi_initiator_cmd_params {int dummy; } ;
struct scsi_dif_task_params {int dummy; } ;
struct iscsi_task_params {scalar_t__ rx_io_size; scalar_t__ tx_io_size; } ;
struct iscsi_conn_params {int dummy; } ;
struct iscsi_common_hdr {int dummy; } ;
struct iscsi_cmd_hdr {int flags_attr; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iscsi_task_params*,int ,struct iscsi_conn_params*,struct iscsi_common_hdr*,struct scsi_sgl_task_params*,struct scsi_initiator_cmd_params*,struct scsi_dif_task_params*) ;

int FUNC_2(struct iscsi_task_params *VAR_4,
     struct iscsi_conn_params *VAR_5,
     struct scsi_initiator_cmd_params *VAR_6,
     struct iscsi_cmd_hdr *VAR_7,
     struct scsi_sgl_task_params *VAR_8,
     struct scsi_sgl_task_params *VAR_9,
     struct scsi_dif_task_params *VAR_10)
{
 if (FUNC_0(VAR_7->flags_attr, VAR_1))
  return FUNC_1(VAR_4,
       VAR_3,
       VAR_5,
       (struct iscsi_common_hdr *)VAR_7,
       VAR_8, VAR_6,
       VAR_10);
 else if (FUNC_0(VAR_7->flags_attr, VAR_0) ||
   (VAR_4->rx_io_size == 0 && VAR_4->tx_io_size == 0))
  return FUNC_1(VAR_4,
       VAR_2,
       VAR_5,
       (struct iscsi_common_hdr *)VAR_7,
       VAR_9, VAR_6,
       VAR_10);
 else
  return -1;
}
