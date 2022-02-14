
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wd33c93_regs ;
typedef int uchar ;
struct scsi_cmnd {int result; TYPE_1__* device; int * host_scribble; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct WD33C93_hostdata {scalar_t__ dma; int* busy; scalar_t__ disconnected_Q; int state; struct scsi_cmnd* connected; int (* dma_stop ) (struct Scsi_Host*,struct scsi_cmnd*,int ) ;struct scsi_cmnd* input_Q; int regs; } ;
struct Scsi_Host {int host_no; int irq; scalar_t__ hostdata; } ;
struct TYPE_2__ {size_t id; int lun; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct Scsi_Host*,struct scsi_cmnd*,int ) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,int ) ;

int
FUNC_12(struct scsi_cmnd * VAR_17)
{
 struct Scsi_Host *VAR_18;
 struct WD33C93_hostdata *VAR_19;
 wd33c93_regs VAR_20;
 struct scsi_cmnd *VAR_21, *VAR_22;

 FUNC_0(VAR_17->device->host->irq);

 VAR_18 = VAR_17->device->host;
 VAR_19 = (struct WD33C93_hostdata *) VAR_18->hostdata;
 VAR_20 = VAR_19->regs;






 VAR_21 = (struct scsi_cmnd *) VAR_19->input_Q;
 VAR_22 = ((void*)0);
 while (VAR_21) {
  if (VAR_21 == VAR_17) {
   if (VAR_22)
    VAR_22->host_scribble = VAR_17->host_scribble;
   else
    VAR_19->input_Q =
        (struct scsi_cmnd *) VAR_17->host_scribble;
   VAR_17->host_scribble = ((void*)0);
   VAR_17->result = VAR_6 << 16;
   FUNC_2
       ("scsi%d: Abort - removing command from input_Q. ",
        VAR_18->host_no);
   FUNC_1(VAR_17->device->host->irq);
   VAR_17->scsi_done(VAR_17);
   return VAR_10;
  }
  VAR_22 = VAR_21;
  VAR_21 = (struct scsi_cmnd *) VAR_21->host_scribble;
 }
 if (VAR_19->connected == VAR_17) {
  uchar VAR_23, VAR_24;
  unsigned long VAR_25;

  FUNC_2("scsi%d: Aborting connected command - ",
         VAR_18->host_no);

  FUNC_2("stopping DMA - ");
  if (VAR_19->dma == VAR_8) {
   VAR_19->dma_stop(VAR_18, VAR_17, 0);
   VAR_19->dma = VAR_7;
  }

  FUNC_2("sending wd33c93 ABORT command - ");
  FUNC_10(VAR_20, VAR_14,
         VAR_4 | VAR_3 | VAR_5);
  FUNC_11(VAR_20, VAR_12);



  FUNC_2("flushing fifo - ");
  VAR_25 = 1000000;
  do {
   VAR_24 = FUNC_3(VAR_20);
   if (VAR_24 & VAR_1)
    FUNC_4(VAR_20, VAR_15);
  } while (!(VAR_24 & VAR_2) && VAR_25-- > 0);
  VAR_23 = FUNC_4(VAR_20, VAR_16);
  FUNC_2
      ("asr=%02x, sr=%02x, %ld bytes un-transferred (timeout=%ld) - ",
       VAR_24, VAR_23, FUNC_5(VAR_20), VAR_25);







  FUNC_2("sending wd33c93 DISCONNECT command - ");
  FUNC_11(VAR_20, VAR_13);

  VAR_25 = 1000000;
  VAR_24 = FUNC_3(VAR_20);
  while ((VAR_24 & VAR_0) && VAR_25-- > 0)
   VAR_24 = FUNC_3(VAR_20);
  VAR_23 = FUNC_4(VAR_20, VAR_16);
  FUNC_2("asr=%02x, sr=%02x.", VAR_24, VAR_23);

  VAR_19->busy[VAR_17->device->id] &= ~(1 << (VAR_17->device->lun & 0xff));
  VAR_19->connected = ((void*)0);
  VAR_19->state = VAR_11;
  VAR_17->result = VAR_6 << 16;


  FUNC_9(VAR_18);

  FUNC_1(VAR_17->device->host->irq);
  VAR_17->scsi_done(VAR_17);
  return VAR_10;
 }







 VAR_21 = (struct scsi_cmnd *) VAR_19->disconnected_Q;
 while (VAR_21) {
  if (VAR_21 == VAR_17) {
   FUNC_2
       ("scsi%d: Abort - command found on disconnected_Q - ",
        VAR_18->host_no);
   FUNC_2("Abort SNOOZE. ");
   FUNC_1(VAR_17->device->host->irq);
   return VAR_9;
  }
  VAR_21 = (struct scsi_cmnd *) VAR_21->host_scribble;
 }
 FUNC_9(VAR_18);

 FUNC_1(VAR_17->device->host->irq);
 FUNC_2("scsi%d: warning : SCSI command probably completed successfully"
        "         before abortion. ", VAR_18->host_no);
 return VAR_9;
}
