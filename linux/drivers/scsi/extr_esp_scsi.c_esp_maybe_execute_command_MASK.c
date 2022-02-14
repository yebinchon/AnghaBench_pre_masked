
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct scsi_device {int id; int lun; } ;
struct scsi_cmnd {int cmd_len; int * cmnd; struct scsi_device* device; } ;
struct esp_target_data {int flags; scalar_t__ nego_goal_period; scalar_t__ nego_goal_offset; scalar_t__ nego_goal_width; int starget; scalar_t__ nego_goal_tags; } ;
struct esp_cmd_entry {int flags; scalar_t__* tag; int list; struct scsi_cmnd* cmd; } ;
struct esp {int flags; int msg_out_len; scalar_t__ rev; int cmd_bytes_left; int * command_block; int select_state; scalar_t__* msg_out; int * cmd_bytes_ptr; struct esp_cmd_entry* active_cmd; int active_cmds; struct esp_target_data* target; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct esp*,struct esp_cmd_entry*) ;
 int VAR_18 ;
 int FUNC_2 (struct esp*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_3 (struct esp_target_data*) ;
 scalar_t__ FUNC_4 (struct esp_target_data*) ;
 int FUNC_5 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_6 (struct esp*,int,int,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct esp*,int) ;
 int FUNC_9 (struct esp*,int) ;
 struct esp_cmd_entry* FUNC_10 (struct esp*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__*,int) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct esp *VAR_19)
{
 struct esp_target_data *VAR_20;
 struct scsi_device *VAR_21;
 struct scsi_cmnd *VAR_22;
 struct esp_cmd_entry *VAR_23;
 bool VAR_24 = 0;
 int VAR_25, VAR_26, VAR_27;
 u32 VAR_28, VAR_29;
 u8 *VAR_30;

 if (VAR_19->active_cmd ||
     (VAR_19->flags & VAR_9))
  return;

 VAR_23 = FUNC_10(VAR_19);
 if (!VAR_23)
  return;

 if (VAR_23->flags & VAR_4) {
  FUNC_1(VAR_19, VAR_23);
  return;
 }

 VAR_22 = VAR_23->cmd;
 VAR_21 = VAR_22->device;
 VAR_25 = VAR_21->id;
 VAR_26 = VAR_21->lun;
 VAR_20 = &VAR_19->target[VAR_25];

 FUNC_11(&VAR_23->list, &VAR_19->active_cmds);

 VAR_19->active_cmd = VAR_23;

 FUNC_2(VAR_19, VAR_22);
 FUNC_5(VAR_19, VAR_23);

 if (!(VAR_22->cmd_len == 6 || VAR_22->cmd_len == 10 || VAR_22->cmd_len == 12))
  VAR_24 = 1;

 VAR_30 = VAR_19->command_block;

 VAR_19->msg_out_len = 0;
 if (VAR_20->flags & VAR_13) {



  if (VAR_20->flags & VAR_12) {
   VAR_20->flags &= ~VAR_14;
   VAR_20->nego_goal_period = 0;
   VAR_20->nego_goal_offset = 0;
   VAR_20->nego_goal_width = 0;
   VAR_20->nego_goal_tags = 0;
  }


  if (FUNC_17(VAR_20->starget) == VAR_20->nego_goal_width &&
      FUNC_14(VAR_20->starget) == VAR_20->nego_goal_period &&
      FUNC_13(VAR_20->starget) == VAR_20->nego_goal_offset) {
   VAR_20->flags &= ~VAR_13;
   goto build_identify;
  }

  if (VAR_19->rev == VAR_17 && FUNC_4(VAR_20)) {
   VAR_19->msg_out_len =
    FUNC_16(&VAR_19->msg_out[0],
             (VAR_20->nego_goal_width ?
       1 : 0));
   VAR_20->flags |= VAR_16;
  } else if (FUNC_3(VAR_20)) {
   VAR_19->msg_out_len =
    FUNC_15(&VAR_19->msg_out[0],
            VAR_20->nego_goal_period,
            VAR_20->nego_goal_offset);
   VAR_20->flags |= VAR_15;
  } else {
   VAR_20->flags &= ~VAR_13;
  }


  if (VAR_19->msg_out_len)
   VAR_24 = 1;
 }

build_identify:
 *VAR_30++ = FUNC_0(VAR_20->flags & VAR_14, VAR_26);

 if (VAR_23->tag[0] && VAR_19->rev == VAR_0) {



  VAR_24 = 1;
 }

 if (VAR_24) {
  VAR_19->cmd_bytes_left = VAR_22->cmd_len;
  VAR_19->cmd_bytes_ptr = &VAR_22->cmnd[0];

  if (VAR_23->tag[0]) {
   for (VAR_27 = VAR_19->msg_out_len - 1;
        VAR_27 >= 0; VAR_27--)
    VAR_19->msg_out[VAR_27 + 2] = VAR_19->msg_out[VAR_27];
   VAR_19->msg_out[0] = VAR_23->tag[0];
   VAR_19->msg_out[1] = VAR_23->tag[1];
   VAR_19->msg_out_len += 2;
  }

  VAR_29 = VAR_7;
  VAR_19->select_state = VAR_11;
 } else {
  VAR_29 = VAR_6;
  if (VAR_23->tag[0]) {
   *VAR_30++ = VAR_23->tag[0];
   *VAR_30++ = VAR_23->tag[1];

   VAR_29 = VAR_5;
  }

  for (VAR_27 = 0; VAR_27 < VAR_22->cmd_len; VAR_27++)
   *VAR_30++ = VAR_22->cmnd[VAR_27];

  VAR_19->select_state = VAR_10;
 }
 VAR_28 = VAR_25;
 if (VAR_19->rev == VAR_17)
  VAR_28 |= VAR_3 | VAR_2;
 FUNC_7(VAR_28, VAR_1);

 FUNC_9(VAR_19, VAR_25);
 FUNC_8(VAR_19, VAR_25);

 VAR_28 = (VAR_30 - VAR_19->command_block);

 if (VAR_18 & VAR_8) {
  FUNC_12("ESP: tgt[%d] lun[%d] scsi_cmd [ ", VAR_25, VAR_26);
  for (VAR_27 = 0; VAR_27 < VAR_22->cmd_len; VAR_27++)
   FUNC_12("%02x ", VAR_22->cmnd[VAR_27]);
  FUNC_12("]\n");
 }

 FUNC_6(VAR_19, VAR_28, 16, VAR_29);
}
