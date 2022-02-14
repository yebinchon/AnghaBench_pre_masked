
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {int fflags; scalar_t__ max_lun; int dev_mutex; struct scsi_cmnd* srb; int dflags; int notify; int pusb_dev; int (* proto_handler ) (struct scsi_cmnd*,struct us_data*) ;int cmnd_ready; } ;
struct scsi_cmnd {int result; scalar_t__ sc_data_direction; scalar_t__* cmnd; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {scalar_t__ lun; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct us_data*,unsigned char*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct scsi_cmnd*,struct us_data*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 struct Scsi_Host* FUNC_15 (struct us_data*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct us_data*,char*,...) ;
 int FUNC_18 (struct us_data*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(void * VAR_12)
{
 struct us_data *VAR_13 = (struct us_data *)VAR_12;
 struct Scsi_Host *VAR_14 = FUNC_15(VAR_13);
 struct scsi_cmnd *VAR_15;

 for (;;) {
  FUNC_17(VAR_13, "*** thread sleeping\n");
  if (FUNC_19(&VAR_13->cmnd_ready))
   break;

  FUNC_17(VAR_13, "*** thread awakened\n");


  FUNC_6(&(VAR_13->dev_mutex));


  FUNC_9(VAR_14);


  VAR_15 = VAR_13->srb;
  if (VAR_15 == ((void*)0)) {
   FUNC_10(VAR_14);
   FUNC_7(&VAR_13->dev_mutex);
   FUNC_17(VAR_13, "-- exiting\n");
   break;
  }


  if (FUNC_14(VAR_9, &VAR_13->dflags)) {
   VAR_15->result = VAR_0 << 16;
   goto SkipForAbort;
  }

  FUNC_10(VAR_14);





  if (VAR_15->sc_data_direction == VAR_3) {
   FUNC_17(VAR_13, "UNKNOWN data direction\n");
   VAR_15->result = VAR_2 << 16;
  }





  else if (VAR_15->device->id &&
    !(VAR_13->fflags & VAR_11)) {
   FUNC_17(VAR_13, "Bad target number (%d:%llu)\n",
         VAR_15->device->id,
         VAR_15->device->lun);
   VAR_15->result = VAR_1 << 16;
  }

  else if (VAR_15->device->lun > VAR_13->max_lun) {
   FUNC_17(VAR_13, "Bad LUN (%d:%llu)\n",
         VAR_15->device->id,
         VAR_15->device->lun);
   VAR_15->result = VAR_1 << 16;
  }





  else if ((VAR_15->cmnd[0] == VAR_4) &&
       (VAR_13->fflags & VAR_10)) {
   unsigned char VAR_16[36] = {
       0x00, 0x80, 0x02, 0x02,
       0x1F, 0x00, 0x00, 0x00};

   FUNC_17(VAR_13, "Faking INQUIRY command\n");
   FUNC_4(VAR_13, VAR_16, 36);
   VAR_15->result = VAR_5;
  }


  else {
   FUNC_0(FUNC_18(VAR_13, VAR_15));
   VAR_13->proto_handler(VAR_15, VAR_13);
   FUNC_16(VAR_13->pusb_dev);
  }


  FUNC_9(VAR_14);


  if (VAR_15->result == VAR_0 << 16) {
SkipForAbort:
   FUNC_17(VAR_13, "scsi command aborted\n");
   VAR_15 = ((void*)0);
  }
  if (FUNC_14(VAR_9, &VAR_13->dflags)) {
   FUNC_3(&(VAR_13->notify));


   FUNC_2(VAR_8, &VAR_13->dflags);
   FUNC_2(VAR_9, &VAR_13->dflags);
  }


  VAR_13->srb = ((void*)0);
  FUNC_10(VAR_14);


  FUNC_7(&VAR_13->dev_mutex);


  if (VAR_15) {
   FUNC_17(VAR_13, "scsi cmd done, result=0x%x\n",
     VAR_15->result);
   VAR_15->scsi_done(VAR_15);
  }
 }


 for (;;) {
  FUNC_11(VAR_6);
  if (FUNC_5())
   break;
  FUNC_8();
 }
 FUNC_1(VAR_7);
 return 0;
}
