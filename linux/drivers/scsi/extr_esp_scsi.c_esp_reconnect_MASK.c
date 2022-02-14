
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {struct esp_lun_data* hostdata; } ;
struct esp_target_data {int starget; } ;
struct esp_lun_data {struct esp_cmd_entry* non_tagged_cmd; } ;
struct esp_cmd_entry {int dummy; } ;
struct esp {scalar_t__ rev; int* fifo; int scsi_id_mask; int flags; struct esp_cmd_entry* active_cmd; int host; struct esp_target_data* target; } ;


 int FUNC_0 (struct esp_cmd_entry*) ;
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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 struct scsi_device* FUNC_1 (int ,int) ;
 int FUNC_2 (struct esp*,int ) ;
 int FUNC_3 (int ) ;
 struct esp_cmd_entry* FUNC_4 (struct esp*,struct esp_lun_data*) ;
 int FUNC_5 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_6 (struct esp*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct esp*,int) ;
 int FUNC_9 (struct esp*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct esp*,int ) ;
 int FUNC_12 (int ,int ,char*,int,int) ;

__attribute__((used)) static int FUNC_13(struct esp *VAR_14)
{
 struct esp_cmd_entry *VAR_15;
 struct esp_target_data *VAR_16;
 struct esp_lun_data *VAR_17;
 struct scsi_device *VAR_18;
 int VAR_19, VAR_20;

 FUNC_0(VAR_14->active_cmd);
 if (VAR_14->rev == VAR_12) {



  VAR_19 = VAR_14->fifo[0];
  VAR_20 = VAR_14->fifo[1] & 0x7;
 } else {
  u8 VAR_21 = FUNC_3(VAR_8);







  if (!(VAR_21 & VAR_14->scsi_id_mask))
   goto do_reset;
  VAR_21 &= ~VAR_14->scsi_id_mask;
  if (!VAR_21 || (VAR_21 & (VAR_21 - 1)))
   goto do_reset;

  VAR_19 = FUNC_10(VAR_21) - 1;
  VAR_20 = (FUNC_3(VAR_8) & 0x7);

  FUNC_11(VAR_14, VAR_4);
  if (VAR_14->rev == VAR_0) {
   u8 VAR_22 = FUNC_3(VAR_10);





   if (VAR_22 & VAR_11)
    goto do_reset;
  }
  FUNC_11(VAR_14, VAR_6);
 }

 FUNC_9(VAR_14, VAR_19);
 FUNC_8(VAR_14, VAR_19);

 FUNC_11(VAR_14, VAR_5);

 if (VAR_14->rev == VAR_12)
  FUNC_7(VAR_19 | VAR_3 | VAR_2,
      VAR_1);

 VAR_16 = &VAR_14->target[VAR_19];
 VAR_18 = FUNC_1(VAR_16->starget, VAR_20);
 if (!VAR_18) {
  FUNC_12(VAR_13, VAR_14->host,
        "Reconnect, no lp tgt[%u] lun[%u]\n",
        VAR_19, VAR_20);
  goto do_reset;
 }
 VAR_17 = VAR_18->hostdata;

 VAR_15 = VAR_17->non_tagged_cmd;
 if (!VAR_15) {
  VAR_15 = FUNC_4(VAR_14, VAR_17);
  if (!VAR_15)
   goto do_reset;
 }

 VAR_14->active_cmd = VAR_15;

 FUNC_2(VAR_14, VAR_7);
 FUNC_5(VAR_14, VAR_15);
 VAR_14->flags |= VAR_9;
 return 1;

do_reset:
 FUNC_6(VAR_14);
 return 0;
}
