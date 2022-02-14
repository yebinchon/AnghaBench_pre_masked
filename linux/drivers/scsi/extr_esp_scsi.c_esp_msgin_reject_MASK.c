
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct esp_target_data {int flags; scalar_t__ esp_offset; scalar_t__ esp_period; int nego_goal_offset; int nego_goal_period; } ;
struct esp_cmd_entry {struct scsi_cmnd* cmd; } ;
struct esp {int host; int * msg_out; int msg_out_len; struct esp_target_data* target; struct esp_cmd_entry* active_cmd; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct esp_target_data*) ;
 int FUNC_1 (struct esp*) ;
 int FUNC_2 (struct esp*,struct esp_target_data*,int ,int ,int ,int ) ;
 int FUNC_3 (struct esp*,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct esp *VAR_7)
{
 struct esp_cmd_entry *VAR_8 = VAR_7->active_cmd;
 struct scsi_cmnd *VAR_9 = VAR_8->cmd;
 struct esp_target_data *VAR_10;
 int VAR_11;

 VAR_11 = VAR_9->device->id;
 VAR_10 = &VAR_7->target[VAR_11];

 if (VAR_10->flags & VAR_4) {
  VAR_10->flags &= ~(VAR_4 | VAR_5);

  if (!FUNC_0(VAR_10)) {
   VAR_10->flags &= ~VAR_2;
   FUNC_3(VAR_7, VAR_0);
  } else {
   VAR_7->msg_out_len =
    FUNC_5(&VAR_7->msg_out[0],
            VAR_10->nego_goal_period,
            VAR_10->nego_goal_offset);
   VAR_10->flags |= VAR_3;
   FUNC_3(VAR_7, VAR_1);
  }
  return;
 }

 if (VAR_10->flags & VAR_3) {
  VAR_10->flags &= ~(VAR_3 | VAR_2);
  VAR_10->esp_period = 0;
  VAR_10->esp_offset = 0;
  FUNC_2(VAR_7, VAR_10, 0, 0, 0, 0);
  FUNC_3(VAR_7, VAR_0);
  return;
 }

 FUNC_4(VAR_6, VAR_7->host, "Unexpected MESSAGE REJECT\n");
 FUNC_1(VAR_7);
}
