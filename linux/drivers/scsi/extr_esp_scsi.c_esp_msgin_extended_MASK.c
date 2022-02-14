
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct esp_target_data {int dummy; } ;
struct esp_cmd_entry {struct scsi_cmnd* cmd; } ;
struct esp {scalar_t__* msg_in; int msg_out_len; int * msg_out; int host; struct esp_target_data* target; struct esp_cmd_entry* active_cmd; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct esp*,struct esp_target_data*) ;
 int FUNC_1 (struct esp*,struct esp_target_data*) ;
 int FUNC_2 (struct esp*,int ) ;
 int FUNC_3 (int ,int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct esp *VAR_5)
{
 struct esp_cmd_entry *VAR_6 = VAR_5->active_cmd;
 struct scsi_cmnd *VAR_7 = VAR_6->cmd;
 struct esp_target_data *VAR_8;
 int VAR_9 = VAR_7->device->id;

 VAR_8 = &VAR_5->target[VAR_9];
 if (VAR_5->msg_in[2] == VAR_1) {
  FUNC_0(VAR_5, VAR_8);
  return;
 }
 if (VAR_5->msg_in[2] == VAR_2) {
  FUNC_1(VAR_5, VAR_8);
  return;
 }

 FUNC_3(VAR_3, VAR_5->host,
       "Unexpected extended msg type %x\n", VAR_5->msg_in[2]);

 VAR_5->msg_out[0] = VAR_4;
 VAR_5->msg_out_len = 1;
 FUNC_2(VAR_5, VAR_0);
}
