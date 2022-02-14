
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_sgl_task_params {int total_buffer_size; } ;
struct scsi_dif_task_params {int dif_on_network; } ;
struct iscsi_task_params {int rx_io_size; int tx_io_size; } ;
typedef enum iscsi_task_type { ____Placeholder_iscsi_task_type } iscsi_task_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct iscsi_task_params *VAR_2,
        enum iscsi_task_type VAR_3,
        struct scsi_sgl_task_params *VAR_4,
        struct scsi_dif_task_params *VAR_5)
{
 u32 VAR_6;

 if (VAR_3 == VAR_0 ||
     VAR_3 == VAR_1)
  VAR_6 = VAR_2->tx_io_size;
 else
  VAR_6 = VAR_2->rx_io_size;

 if (!VAR_6)
  return 0;

 if (!VAR_5)
  return VAR_6;

 return !VAR_5->dif_on_network ?
        VAR_6 : VAR_4->total_buffer_size;
}
