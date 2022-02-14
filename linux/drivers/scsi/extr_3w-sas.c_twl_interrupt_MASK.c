
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;


typedef int u64 ;
typedef int u32 ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
typedef int irqreturn_t ;
typedef int dma_addr_t ;
struct TYPE_22__ {scalar_t__ status; TYPE_2__* sg_list; } ;
struct TYPE_23__ {TYPE_3__ newcommand; } ;
struct TYPE_25__ {TYPE_4__ command; } ;
struct TYPE_24__ {int* sense_buffer_phys; int chrdev_request_id; scalar_t__* state; TYPE_13__* host; int posted_request_count; struct scsi_cmnd** srb; int ioctl_wqueue; TYPE_6__** command_packet_virt; TYPE_12__** sense_buffer_virt; int flags; } ;
struct TYPE_21__ {scalar_t__ length; } ;
struct TYPE_20__ {int request_id; } ;
struct TYPE_19__ {int host_lock; } ;
struct TYPE_18__ {TYPE_1__ header_desc; } ;
typedef TYPE_5__ TW_Device_Extension ;
typedef TYPE_6__ TW_Command_Full ;
typedef int TW_Command_Apache_Header ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_13__*,int ,int,char*) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_6__*,TYPE_12__*,int) ;
 void* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_14 (struct scsi_cmnd*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (TYPE_5__*,int) ;
 int FUNC_20 (TYPE_5__*,int,int,int,int) ;
 int FUNC_21 (TYPE_5__*,int) ;
 scalar_t__ FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_25(int VAR_10, void *VAR_11)
{
 TW_Device_Extension *VAR_12 = (TW_Device_Extension *)VAR_11;
 int VAR_13, VAR_14 = 0, VAR_15 = 0;
 dma_addr_t VAR_16 = 0;
 u32 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21 = 0;
 struct scsi_cmnd *VAR_22;
 TW_Command_Full *VAR_23;

 FUNC_15(VAR_12->host->host_lock);


 VAR_17 = FUNC_10(FUNC_1(VAR_12));


 if (!(VAR_17 & VAR_3))
  goto twl_interrupt_bail;

 VAR_14 = 1;


 if (FUNC_18(VAR_5, &VAR_12->flags))
  goto twl_interrupt_bail;


 if (VAR_17 & VAR_1) {
  if (FUNC_22(VAR_12)) {
   FUNC_4(VAR_12);
   goto twl_interrupt_bail;
  }
 }


 while (VAR_17 & VAR_2) {
  if (sizeof(dma_addr_t) > 4) {
   VAR_19 = FUNC_10(FUNC_2(VAR_12));
   VAR_18 = FUNC_10(FUNC_3(VAR_12));
   VAR_16 = ((u64)VAR_19 << 32) | VAR_18;
  } else
   VAR_16 = FUNC_10(FUNC_3(VAR_12));

  VAR_15 = 0;
  VAR_20 = (u32)VAR_16;


  if (!FUNC_5(VAR_20)) {
   for (VAR_13=0;VAR_13<VAR_7;VAR_13++) {
    if (VAR_12->sense_buffer_phys[VAR_13] == VAR_16) {
     VAR_21 = FUNC_8(VAR_12->sense_buffer_virt[VAR_13]->header_desc.request_id);
     if (VAR_12->srb[VAR_21] != ((void*)0))
      VAR_15 = FUNC_20(VAR_12, VAR_13, VAR_21, 1, 1);
     else {

      if (VAR_21 != VAR_12->chrdev_request_id)
       VAR_15 = FUNC_20(VAR_12, VAR_13, VAR_21, 0, 1);
      else
       FUNC_9(VAR_12->command_packet_virt[VAR_21], VAR_12->sense_buffer_virt[VAR_13], sizeof(TW_Command_Apache_Header));
     }


     FUNC_24((u32)((u64)VAR_12->sense_buffer_phys[VAR_13] >> 32), FUNC_2(VAR_12));
     FUNC_24((u32)VAR_12->sense_buffer_phys[VAR_13], FUNC_3(VAR_12));
     break;
    }
   }
  } else
   VAR_21 = FUNC_7(VAR_20);

  VAR_23 = VAR_12->command_packet_virt[VAR_21];


  if (VAR_12->state[VAR_21] != VAR_9) {
   if (VAR_12->srb[VAR_21] != ((void*)0)) {
    FUNC_6(VAR_12->host, VAR_4, 0xe, "Received a request id that wasn't posted");
    FUNC_4(VAR_12);
    goto twl_interrupt_bail;
   }
  }


  if (VAR_12->srb[VAR_21] == ((void*)0)) {
   if (VAR_21 != VAR_12->chrdev_request_id) {
    if (FUNC_19(VAR_12, VAR_21))
     FUNC_6(VAR_12->host, VAR_4, 0xf, "Error completing AEN during attention interrupt");
   } else {
    VAR_12->chrdev_request_id = VAR_6;
    FUNC_23(&VAR_12->ioctl_wqueue);
   }
  } else {
   VAR_22 = VAR_12->srb[VAR_21];

   if (!VAR_15)
    VAR_22->result = (VAR_0 << 16);


   if ((FUNC_14(VAR_22) <= 1) && (VAR_23->command.newcommand.status == 0)) {
    if (VAR_23->command.newcommand.sg_list[0].length < FUNC_11(VAR_12->srb[VAR_21]))
     FUNC_13(VAR_22, FUNC_11(VAR_22) - VAR_23->command.newcommand.sg_list[0].length);
   }


   FUNC_12(VAR_22);
   VAR_22->scsi_done(VAR_22);
   VAR_12->state[VAR_21] = VAR_8;
   FUNC_21(VAR_12, VAR_21);
   VAR_12->posted_request_count--;
  }


  VAR_17 = FUNC_10(FUNC_1(VAR_12));
 }

twl_interrupt_bail:
 FUNC_16(VAR_12->host->host_lock);
 return FUNC_0(VAR_14);
}
