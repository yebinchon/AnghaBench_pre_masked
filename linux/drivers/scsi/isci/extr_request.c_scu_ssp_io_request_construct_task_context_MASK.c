
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ssp_cmd_iu {int dummy; } ;
struct TYPE_5__ {int frame_type; } ;
struct TYPE_6__ {TYPE_2__ ssp; } ;
struct scu_task_context {int ssp_command_iu_length; scalar_t__ transfer_length_bytes; int task_type; TYPE_3__ type; } ;
struct scsi_cmnd {int dummy; } ;
struct sas_task {struct scsi_cmnd* uldd_task; } ;
struct TYPE_4__ {struct sas_task* io_task_ptr; } ;
struct isci_request {TYPE_1__ ttype_ptr; struct scu_task_context* tc; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct isci_request*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct isci_request*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct isci_request*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct isci_request*,struct scu_task_context*) ;

__attribute__((used)) static void FUNC_6(struct isci_request *VAR_6,
            enum dma_data_direction VAR_7,
            u32 VAR_8)
{
 struct scu_task_context *VAR_9 = VAR_6->tc;
 struct sas_task *VAR_10 = VAR_6->ttype_ptr.io_task_ptr;
 struct scsi_cmnd *VAR_11 = VAR_10->uldd_task;
 u8 VAR_12 = FUNC_2(VAR_11);
 u8 VAR_13 = FUNC_1(VAR_11);

 FUNC_5(VAR_6, VAR_9);

 VAR_9->ssp_command_iu_length =
  sizeof(struct ssp_cmd_iu) / sizeof(u32);
 VAR_9->type.ssp.frame_type = VAR_5;

 switch (VAR_7) {
 case 130:
 case 129:
 default:
  VAR_9->task_type = VAR_3;
  break;
 case 128:
  VAR_9->task_type = VAR_4;
  break;
 }

 VAR_9->transfer_length_bytes = VAR_8;

 if (VAR_9->transfer_length_bytes > 0)
  FUNC_0(VAR_6);

 if (VAR_12 != VAR_0) {
  if (VAR_13 == VAR_1)
   FUNC_4(VAR_6, VAR_12, VAR_13);
  else if (VAR_13 == VAR_2)
   FUNC_3(VAR_6, VAR_12, VAR_13);
 }
}
