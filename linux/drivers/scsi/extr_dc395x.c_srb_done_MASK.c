
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ this_residual; scalar_t__ buffers_residual; } ;
struct scsi_cmnd {int sc_data_direction; int* sense_buffer; scalar_t__* cmnd; int result; scalar_t__ underflow; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; TYPE_1__ SCp; } ;
struct scatterlist {int dummy; } ;
struct ScsiReqBlk {int target_status; int flag; int adapter_status; scalar_t__ total_xfer_length; int status; int list; int end_message; int sg_count; int sg_index; struct scsi_cmnd* cmd; } ;
struct ScsiInqData {int Vers; int Flags; } ;
struct DeviceCtlBlk {int max_command; int init_tcq_flag; int inquiry7; int srb_waiting_list; int target_lun; int target_id; int srb_going_list; } ;
struct AdapterCtlBlk {int srb_free_list; struct ScsiReqBlk* tmp_srb; int scan_devices; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {scalar_t__ lun; int id; } ;


 int VAR_0 ;
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

 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

 void* FUNC_0 (int ,int,int ,int) ;

 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;

 int FUNC_4 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiInqData*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (unsigned long) ;
 int FUNC_13 (unsigned long) ;
 int FUNC_14 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_15 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_16 (char*,int,unsigned int,...) ;
 int FUNC_17 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_18 (struct scsi_cmnd*) ;
 unsigned char* FUNC_19 (struct scatterlist*,int ,size_t*,size_t*) ;
 int FUNC_20 (unsigned char*) ;
 int FUNC_21 (struct scsi_cmnd*,scalar_t__) ;
 int FUNC_22 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_23 (struct scsi_cmnd*) ;
 int FUNC_24 (struct scsi_cmnd*) ;
 int FUNC_25 (int) ;
 int FUNC_26 (struct scsi_cmnd*) ;
 int FUNC_27 (struct AdapterCtlBlk*) ;
 int FUNC_28 (struct AdapterCtlBlk*,int) ;

__attribute__((used)) static void FUNC_29(struct AdapterCtlBlk *VAR_24, struct DeviceCtlBlk *VAR_25,
  struct ScsiReqBlk *VAR_26)
{
 u8 VAR_27, VAR_28;
 struct scsi_cmnd *VAR_29 = VAR_26->cmd;
 enum dma_data_direction VAR_30 = VAR_29->sc_data_direction;
 int VAR_31 = 1;

 FUNC_6(VAR_3, "srb_done: (0x%p) <%02i-%i>\n", VAR_26->cmd,
  VAR_26->cmd->device->id, (u8)VAR_26->cmd->device->lun);
 FUNC_6(VAR_5, "srb_done: srb=%p sg=%i(%i/%i) buf=%p\n",
     VAR_26, FUNC_22(VAR_29), VAR_26->sg_index, VAR_26->sg_count,
     FUNC_24(VAR_29));
 VAR_28 = VAR_26->target_status;
 if (VAR_26->flag & VAR_0) {
  FUNC_6(VAR_2, "srb_done: AUTO_REQSENSE1\n");
  FUNC_15(VAR_24, VAR_26);



  VAR_26->flag &= ~VAR_0;
  VAR_26->adapter_status = 0;
  VAR_26->target_status = VAR_1 << 1;
  if (FUNC_5(VAR_3)) {
   switch (VAR_29->sense_buffer[2] & 0x0f) {
   case 129:
    FUNC_7(VAR_16,
         "ReqSense: NOT_READY cmnd=0x%02x <%02i-%i> stat=%i scan=%i ",
         VAR_29->cmnd[0], VAR_25->target_id,
         VAR_25->target_lun, VAR_28, VAR_24->scan_devices);
    break;
   case 128:
    FUNC_7(VAR_16,
         "ReqSense: UNIT_ATTENTION cmnd=0x%02x <%02i-%i> stat=%i scan=%i ",
         VAR_29->cmnd[0], VAR_25->target_id,
         VAR_25->target_lun, VAR_28, VAR_24->scan_devices);
    break;
   case 131:
    FUNC_7(VAR_16,
         "ReqSense: ILLEGAL_REQUEST cmnd=0x%02x <%02i-%i> stat=%i scan=%i ",
         VAR_29->cmnd[0], VAR_25->target_id,
         VAR_25->target_lun, VAR_28, VAR_24->scan_devices);
    break;
   case 130:
    FUNC_7(VAR_16,
         "ReqSense: MEDIUM_ERROR cmnd=0x%02x <%02i-%i> stat=%i scan=%i ",
         VAR_29->cmnd[0], VAR_25->target_id,
         VAR_25->target_lun, VAR_28, VAR_24->scan_devices);
    break;
   case 132:
    FUNC_7(VAR_16,
         "ReqSense: HARDWARE_ERROR cmnd=0x%02x <%02i-%i> stat=%i scan=%i ",
         VAR_29->cmnd[0], VAR_25->target_id,
         VAR_25->target_lun, VAR_28, VAR_24->scan_devices);
    break;
   }
   if (VAR_29->sense_buffer[7] >= 6)
    FUNC_16("sense=0x%02x ASC=0x%02x ASCQ=0x%02x "
     "(0x%08x 0x%08x)\n",
     VAR_29->sense_buffer[2], VAR_29->sense_buffer[12],
     VAR_29->sense_buffer[13],
     *((unsigned int *)(VAR_29->sense_buffer + 3)),
     *((unsigned int *)(VAR_29->sense_buffer + 8)));
   else
    FUNC_16("sense=0x%02x No ASC/ASCQ (0x%08x)\n",
     VAR_29->sense_buffer[2],
     *((unsigned int *)(VAR_29->sense_buffer + 3)));
  }

  if (VAR_28 == (VAR_1 << 1)) {
   VAR_29->result = VAR_6 << 16;
   goto ckc_e;
  }
  FUNC_6(VAR_2, "srb_done: AUTO_REQSENSE2\n");

  if (VAR_26->total_xfer_length
      && VAR_26->total_xfer_length >= VAR_29->underflow)
   VAR_29->result =
       FUNC_0(VAR_11, VAR_9,
           VAR_26->end_message, VAR_1);

  else
   VAR_29->result =
       FUNC_0(VAR_11, VAR_9,
           VAR_26->end_message, VAR_1);

  goto ckc_e;
 }


 if (VAR_28) {



  if (FUNC_25(VAR_28) == VAR_1) {
   FUNC_17(VAR_24, VAR_25, VAR_26);
   return;
  } else if (FUNC_25(VAR_28) == VAR_21) {
   VAR_27 = (u8)FUNC_11(&VAR_25->srb_going_list);
   FUNC_7(VAR_18, "QUEUE_FULL for dev <%02i-%i> with %i cmnds\n",
        VAR_25->target_id, VAR_25->target_lun, VAR_27);
   if (VAR_27 > 1)
    VAR_27--;
   VAR_25->max_command = VAR_27;
   FUNC_8(VAR_25, VAR_26);
   FUNC_9(&VAR_26->list, &VAR_25->srb_waiting_list);
   FUNC_28(VAR_24, VAR_12 / 20);
   VAR_26->adapter_status = 0;
   VAR_26->target_status = 0;
   return;
  } else if (VAR_28 == VAR_23) {
   VAR_26->adapter_status = VAR_14;
   VAR_26->target_status = 0;
   VAR_29->result = VAR_8 << 16;
  } else {
   VAR_26->adapter_status = 0;
   FUNC_1(VAR_29->result, VAR_7);
   FUNC_2(VAR_29->result, VAR_26->end_message);
   FUNC_3(VAR_29->result, VAR_28);

  }
 } else {



  VAR_28 = VAR_26->adapter_status;
  if (VAR_28 & VAR_13) {
   VAR_26->target_status = 0;
   FUNC_1(VAR_29->result, VAR_9);
   FUNC_2(VAR_29->result, VAR_26->end_message);
  } else if (VAR_26->status & VAR_19) {
   FUNC_1(VAR_29->result, VAR_10);
   FUNC_2(VAR_29->result, VAR_26->end_message);
  } else {

   VAR_26->adapter_status = 0;
   VAR_26->target_status = 0;
   FUNC_1(VAR_29->result, VAR_9);
  }
 }

 VAR_31 = 0;

      ckc_e:

 FUNC_14(VAR_24, VAR_26);

 if (VAR_29->cmnd[0] == VAR_15) {
  unsigned char *VAR_32 = ((void*)0);
  struct ScsiInqData *VAR_33;
  unsigned long VAR_34 = 0;
  struct scatterlist* VAR_35 = FUNC_23(VAR_29);
  size_t VAR_36 = 0, VAR_37 = sizeof(struct ScsiInqData);

  FUNC_13(VAR_34);
  VAR_32 = FUNC_19(VAR_35, FUNC_22(VAR_29), &VAR_36, &VAR_37);
  VAR_33 = (struct ScsiInqData *)(VAR_32 + VAR_36);

  if (!VAR_31 && (VAR_29->result & VAR_22) == 0
      && VAR_29->cmnd[2] == 0 && FUNC_18(VAR_29) >= 8
      && VAR_30 != VAR_20 && VAR_33 && (VAR_33->Vers & 0x07) >= 2)
   VAR_25->inquiry7 = VAR_33->Flags;



  if ((VAR_29->result == (VAR_9 << 16) ||
       FUNC_25(VAR_29->result) == VAR_1)) {
   if (!VAR_25->init_tcq_flag) {
    FUNC_4(VAR_24, VAR_25, VAR_33);
    VAR_25->init_tcq_flag = 1;
   }
  }

  FUNC_20(VAR_32);
  FUNC_12(VAR_34);
 }


 FUNC_21(VAR_29, VAR_26->total_xfer_length);

 VAR_29->SCp.this_residual = VAR_26->total_xfer_length;
 VAR_29->SCp.buffers_residual = 0;
 if (FUNC_5(VAR_4)) {
  if (VAR_26->total_xfer_length)
   FUNC_6(VAR_4, "srb_done: (0x%p) <%02i-%i> "
    "cmnd=0x%02x Missed %i bytes\n",
    VAR_29, VAR_29->device->id, (u8)VAR_29->device->lun,
    VAR_29->cmnd[0], VAR_26->total_xfer_length);
 }

 if (VAR_26 != VAR_24->tmp_srb) {

  FUNC_6(VAR_2, "srb_done: (0x%p) done result=0x%08x\n",
   VAR_29, VAR_29->result);
  FUNC_10(&VAR_26->list, &VAR_24->srb_free_list);
 } else {
  FUNC_7(VAR_17, "srb_done: ERROR! Completed cmd with tmp_srb\n");
 }

 VAR_29->scsi_done(VAR_29);
 FUNC_27(VAR_24);
}
