
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int id; int lun; int hostdata; } ;
struct scsi_cmnd {unsigned int result; int (* scsi_done ) (struct scsi_cmnd*) ;int * sense_buffer; struct scsi_device* device; } ;
struct esp_cmd_entry {int flags; int list; int * eh_done; } ;
struct esp {TYPE_1__* host; int * active_cmd; } ;
struct TYPE_2__ {int unique_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (struct esp_cmd_entry*,int ) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_4 (struct esp*,struct scsi_cmnd*) ;
 int FUNC_5 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_9(struct esp *VAR_7, struct esp_cmd_entry *VAR_8,
       struct scsi_cmnd *VAR_9, unsigned int VAR_10)
{
 struct scsi_device *VAR_11 = VAR_9->device;
 int VAR_12 = VAR_11->id;
 int VAR_13 = VAR_11->lun;

 VAR_7->active_cmd = ((void*)0);
 FUNC_4(VAR_7, VAR_9);
 FUNC_1(VAR_8, VAR_11->hostdata);
 VAR_9->result = VAR_10;

 if (VAR_8->eh_done) {
  FUNC_0(VAR_8->eh_done);
  VAR_8->eh_done = ((void*)0);
 }

 if (VAR_8->flags & VAR_3) {
  FUNC_5(VAR_7, VAR_8);





  VAR_9->result = ((VAR_2 << 24) |
          (VAR_1 << 16) |
          (VAR_0 << 8) |
          (VAR_5 << 0));

  VAR_8->flags &= ~VAR_3;
  if (VAR_6 & VAR_4) {
   int VAR_14;

   FUNC_7("esp%d: tgt[%d] lun[%d] AUTO SENSE[ ",
          VAR_7->host->unique_id, VAR_12, VAR_13);
   for (VAR_14 = 0; VAR_14 < 18; VAR_14++)
    FUNC_7("%02x ", VAR_9->sense_buffer[VAR_14]);
   FUNC_7("]\n");
  }
 }

 VAR_9->scsi_done(VAR_9);

 FUNC_6(&VAR_8->list);
 FUNC_3(VAR_7, VAR_8);

 FUNC_2(VAR_7);
}
