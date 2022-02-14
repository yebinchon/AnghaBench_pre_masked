
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; } ;
struct TYPE_2__ {scalar_t__ serv_response; scalar_t__ status; } ;
struct io_accel2_cmd {TYPE_1__ error_data; } ;
struct hpsa_scsi_dev_t {scalar_t__ in_reset; scalar_t__ offload_to_be_enabled; scalar_t__ offload_enabled; } ;
struct ctlr_info {struct io_accel2_cmd* ioaccel2_cmd_pool; } ;
struct CommandList {size_t cmdindex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ctlr_info*,struct CommandList*,struct scsi_cmnd*,struct io_accel2_cmd*,struct hpsa_scsi_dev_t*) ;
 void FUNC_1 (struct ctlr_info*,struct CommandList*,struct scsi_cmnd*) ;
 void FUNC_2 (struct ctlr_info*,struct CommandList*) ;
 scalar_t__ FUNC_3 (struct hpsa_scsi_dev_t*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ctlr_info *VAR_3,
  struct CommandList *VAR_4, struct scsi_cmnd *VAR_5,
  struct hpsa_scsi_dev_t *VAR_6)
{
 struct io_accel2_cmd *VAR_7 = &VAR_3->ioaccel2_cmd_pool[VAR_4->cmdindex];


 if (FUNC_4(VAR_7->error_data.serv_response == 0 &&
   VAR_7->error_data.status == 0)) {
  VAR_5->result = 0;
  return FUNC_1(VAR_3, VAR_4, VAR_5);
 }






 if (FUNC_3(VAR_6) &&
  VAR_7->error_data.serv_response ==
   VAR_1) {
  if (VAR_7->error_data.status ==
   VAR_2) {
   VAR_6->offload_enabled = 0;
   VAR_6->offload_to_be_enabled = 0;
  }

  if (VAR_6->in_reset) {
   VAR_5->result = VAR_0 << 16;
   return FUNC_1(VAR_3, VAR_4, VAR_5);
  }

  return FUNC_2(VAR_3, VAR_4);
 }

 if (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, VAR_6))
  return FUNC_2(VAR_3, VAR_4);

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
