
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {size_t id; int hostdata; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct esp_target_data {int flags; } ;
struct esp_cmd_entry {int flags; int list; struct scsi_cmnd* cmd; } ;
struct esp {int seqreg; int ireg; scalar_t__ rev; int sreg; int host; int prev_soff; struct esp_target_data* target; struct esp_cmd_entry* active_cmd; int queued_cmds; scalar_t__ cmd_bytes_left; int * cmd_bytes_ptr; TYPE_1__* ops; int select_state; } ;
struct TYPE_2__ {int (* dma_invalidate ) (struct esp*) ;scalar_t__ (* dma_error ) (struct esp*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct esp*,struct esp_cmd_entry*,struct scsi_cmnd*,int) ;
 int FUNC_1 (struct esp*,int ) ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp_cmd_entry*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct esp*) ;
 int FUNC_6 (struct esp*,struct scsi_cmnd*) ;
 int FUNC_7 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct esp*,int ) ;
 int FUNC_10 (int ,int ,char*,int) ;
 scalar_t__ FUNC_11 (struct esp*) ;
 int FUNC_12 (struct esp*) ;

__attribute__((used)) static int FUNC_13(struct esp *VAR_22)
{
 struct esp_cmd_entry *VAR_23;
 struct scsi_cmnd *VAR_24;


 VAR_22->select_state = VAR_14;

 VAR_22->seqreg = FUNC_4(VAR_15) & VAR_17;
 VAR_23 = VAR_22->active_cmd;
 VAR_24 = VAR_23->cmd;

 if (VAR_22->ops->dma_error(VAR_22)) {



  FUNC_5(VAR_22);
  FUNC_0(VAR_22, VAR_23, VAR_24, (VAR_1 << 16));
  return 0;
 }

 VAR_22->ops->dma_invalidate(VAR_22);

 if (VAR_22->ireg == (VAR_13 | VAR_12)) {
  struct esp_target_data *VAR_25 = &VAR_22->target[VAR_24->device->id];





  if (!(VAR_23->flags & VAR_4)) {
   FUNC_6(VAR_22, VAR_24);
   FUNC_3(VAR_23, VAR_24->device->hostdata);
   VAR_25->flags &= ~(VAR_19 | VAR_20);
   VAR_22->cmd_bytes_ptr = ((void*)0);
   VAR_22->cmd_bytes_left = 0;
  } else {
   FUNC_7(VAR_22, VAR_23);
  }




  FUNC_8(&VAR_23->list, &VAR_22->queued_cmds);
  VAR_22->active_cmd = ((void*)0);




  return 0;
 }

 if (VAR_22->ireg == VAR_11) {
  struct scsi_device *VAR_26 = VAR_24->device;





  VAR_22->target[VAR_26->id].flags |= VAR_18;

  FUNC_9(VAR_22, VAR_3);
  FUNC_0(VAR_22, VAR_23, VAR_24, (VAR_0 << 16));
  return 1;
 }

 if (VAR_22->ireg == (VAR_12 | VAR_10)) {



  if (VAR_22->rev <= VAR_2) {
   int VAR_27 = FUNC_4(VAR_8) & VAR_9;

   FUNC_9(VAR_22, VAR_5);

   if (!VAR_27 &&
       (!VAR_22->prev_soff ||
        ((VAR_22->sreg & VAR_16) != VAR_6)))
    FUNC_2(VAR_22);
  }




  FUNC_1(VAR_22, VAR_7);
  return 0;
 }

 FUNC_10(VAR_21, VAR_22->host,
       "Unexpected selection completion ireg[%x]\n", VAR_22->ireg);
 FUNC_5(VAR_22);
 return 0;
}
