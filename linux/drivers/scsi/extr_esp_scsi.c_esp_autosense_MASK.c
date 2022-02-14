
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {int id; int lun; scalar_t__ scsi_level; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct esp_cmd_entry {scalar_t__ sense_ptr; scalar_t__ saved_sense_ptr; struct scsi_cmnd* cmd; } ;
struct esp {int* command_block; scalar_t__ rev; int select_state; scalar_t__ msg_out_len; struct esp_cmd_entry* active_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_3 (struct esp*,int,int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct esp*,int) ;
 int FUNC_6 (struct esp*,int) ;

__attribute__((used)) static void FUNC_7(struct esp *VAR_9, struct esp_cmd_entry *VAR_10)
{
 struct scsi_cmnd *VAR_11 = VAR_10->cmd;
 struct scsi_device *VAR_12 = VAR_11->device;
 int VAR_13, VAR_14;
 u8 *VAR_15, VAR_16;

 VAR_13 = VAR_12->id;
 VAR_14 = VAR_12->lun;


 if (!VAR_10->sense_ptr) {
  FUNC_1("Doing auto-sense for tgt[%d] lun[%d]\n",
      VAR_13, VAR_14);
  FUNC_2(VAR_9, VAR_10);
 }
 VAR_10->saved_sense_ptr = VAR_10->sense_ptr;

 VAR_9->active_cmd = VAR_10;

 VAR_15 = VAR_9->command_block;
 VAR_9->msg_out_len = 0;

 *VAR_15++ = FUNC_0(0, VAR_14);
 *VAR_15++ = VAR_6;
 *VAR_15++ = ((VAR_12->scsi_level <= VAR_7) ?
  (VAR_14 << 5) : 0);
 *VAR_15++ = 0;
 *VAR_15++ = 0;
 *VAR_15++ = VAR_8;
 *VAR_15++ = 0;

 VAR_9->select_state = VAR_4;

 VAR_16 = VAR_13;
 if (VAR_9->rev == VAR_5)
  VAR_16 |= VAR_2 | VAR_1;
 FUNC_4(VAR_16, VAR_0);

 FUNC_6(VAR_9, VAR_13);
 FUNC_5(VAR_9, VAR_13);

 VAR_16 = (VAR_15 - VAR_9->command_block);

 FUNC_3(VAR_9, VAR_16, 16, VAR_3);
}
