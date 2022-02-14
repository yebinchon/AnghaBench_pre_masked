
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us_data {int (* transport ) (struct scsi_cmnd*,struct us_data*) ;scalar_t__ protocol; int fflags; scalar_t__ subclass; int dflags; int (* transport_reset ) (struct us_data*) ;int dev_mutex; struct scsi_cmnd* srb; } ;
struct scsi_sense_hdr {int response_code; scalar_t__ asc; scalar_t__ ascq; int sense_key; } ;
struct scsi_eh_save {int dummy; } ;
struct scsi_cmnd {int result; scalar_t__ sc_data_direction; int* cmnd; int cmd_len; int* sense_buffer; scalar_t__ underflow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct us_data*,struct scsi_cmnd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,struct scsi_eh_save*,int *,int ,int) ;
 int FUNC_6 (struct scsi_cmnd*,struct scsi_eh_save*) ;
 scalar_t__ FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int*,int ,struct scsi_sense_hdr*) ;
 int* FUNC_10 (int*,int ,int) ;
 int FUNC_11 (struct scsi_cmnd*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct scsi_cmnd*,struct us_data*) ;
 int FUNC_15 (struct scsi_cmnd*,struct us_data*) ;
 int FUNC_16 (struct us_data*) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct us_data*) ;
 int FUNC_20 (struct us_data*,char*,...) ;
 int FUNC_21 (struct us_data*) ;
 int FUNC_22 (struct us_data*) ;
 int FUNC_23 (struct us_data*,int ,scalar_t__,scalar_t__) ;

void FUNC_24(struct scsi_cmnd *VAR_35, struct us_data *VAR_36)
{
 int VAR_37;
 int VAR_38;


 FUNC_11(VAR_35, 0);
 VAR_38 = VAR_36->transport(VAR_35, VAR_36);





 if (FUNC_17(VAR_29, &VAR_36->dflags)) {
  FUNC_20(VAR_36, "-- command was aborted\n");
  VAR_35->result = VAR_2 << 16;
  goto Handle_Errors;
 }


 if (VAR_38 == VAR_21) {
  FUNC_20(VAR_36, "-- transport indicates error, resetting\n");
  VAR_35->result = VAR_3 << 16;
  goto Handle_Errors;
 }


 if (VAR_38 == VAR_24) {
  VAR_35->result = VAR_13;
  FUNC_1(VAR_36, VAR_35);
  return;
 }

 VAR_35->result = VAR_14;







 VAR_37 = 0;







 if ((VAR_36->protocol == VAR_16 || VAR_36->protocol == VAR_17) &&
   VAR_35->sc_data_direction != VAR_5) {
  FUNC_20(VAR_36, "-- CB transport device requiring auto-sense\n");
  VAR_37 = 1;
 }






 if (VAR_38 == VAR_22) {
  FUNC_20(VAR_36, "-- transport indicates command failure\n");
  VAR_37 = 1;
 }







 if (FUNC_18((VAR_35->cmnd[0] == VAR_1 || VAR_35->cmnd[0] == VAR_0) &&
     VAR_38 == VAR_23 &&
     !(VAR_36->fflags & VAR_32) &&
     !(VAR_36->fflags & VAR_30) &&
     !(VAR_35->cmnd[2] & 0x20))) {
  FUNC_20(VAR_36, "-- SAT supported, increasing auto-sense\n");
  VAR_36->fflags |= VAR_32;
 }





 if ((FUNC_7(VAR_35) > 0) &&
     !((VAR_35->cmnd[0] == VAR_12) ||
       (VAR_35->cmnd[0] == VAR_7) ||
       (VAR_35->cmnd[0] == VAR_9) ||
       (VAR_35->cmnd[0] == VAR_8) ||
       (VAR_35->cmnd[0] == VAR_10))) {
  FUNC_20(VAR_36, "-- unexpectedly short transfer\n");
 }


 if (VAR_37) {
  int VAR_39;
  struct scsi_eh_save VAR_40;
  int VAR_41 = VAR_34;
  struct scsi_sense_hdr VAR_42;
  const u8 *VAR_43;
  u8 VAR_44;


  if (VAR_36->fflags & VAR_32)
   VAR_41 = ~0;
Retry_Sense:
  FUNC_20(VAR_36, "Issuing auto-REQUEST_SENSE\n");

  FUNC_5(VAR_35, &VAR_40, ((void*)0), 0, VAR_41);


  if (VAR_36->subclass == VAR_19 || VAR_36->subclass == VAR_20 ||
    VAR_36->subclass == VAR_18)
   VAR_35->cmd_len = 6;
  else
   VAR_35->cmd_len = 12;


  FUNC_11(VAR_35, 0);
  VAR_39 = VAR_36->transport(VAR_36->srb, VAR_36);


  FUNC_6(VAR_35, &VAR_40);

  if (FUNC_17(VAR_29, &VAR_36->dflags)) {
   FUNC_20(VAR_36, "-- auto-sense aborted\n");
   VAR_35->result = VAR_2 << 16;


   if (VAR_41 != VAR_34) {
    VAR_36->fflags &= ~VAR_32;
    VAR_36->fflags |= VAR_30;
   }
   goto Handle_Errors;
  }







  if (VAR_39 == VAR_22 &&
    VAR_41 != VAR_34) {
   FUNC_20(VAR_36, "-- auto-sense failure, retry small sense\n");
   VAR_41 = VAR_34;
   VAR_36->fflags &= ~VAR_32;
   VAR_36->fflags |= VAR_30;
   goto Retry_Sense;
  }


  if (VAR_39 != VAR_23) {
   FUNC_20(VAR_36, "-- auto-sense failure\n");






   VAR_35->result = VAR_3 << 16;
   if (!(VAR_36->fflags & VAR_33))
    goto Handle_Errors;
   return;
  }






  if (VAR_35->sense_buffer[7] > (VAR_34 - 8) &&
      !(VAR_36->fflags & VAR_32) &&
      !(VAR_36->fflags & VAR_30) &&
      (VAR_35->sense_buffer[0] & 0x7C) == 0x70) {
   FUNC_20(VAR_36, "-- SANE_SENSE support enabled\n");
   VAR_36->fflags |= VAR_32;





   FUNC_20(VAR_36, "-- Sense data truncated to %i from %i\n",
         VAR_34,
         VAR_35->sense_buffer[7] + 8);
   VAR_35->sense_buffer[7] = (VAR_34 - 8);
  }

  FUNC_9(VAR_35->sense_buffer, VAR_15,
         &VAR_42);

  FUNC_20(VAR_36, "-- Result from auto-sense is %d\n",
        VAR_39);
  FUNC_20(VAR_36, "-- code: 0x%x, key: 0x%x, ASC: 0x%x, ASCQ: 0x%x\n",
        VAR_42.response_code, VAR_42.sense_key,
        VAR_42.asc, VAR_42.ascq);





  VAR_35->result = VAR_13;

  VAR_43 = FUNC_10(VAR_35->sense_buffer,
         VAR_15, 4);
  VAR_44 = (VAR_43 ? VAR_43[3] : VAR_35->sense_buffer[2]) & 0xA0;






  if (VAR_42.sense_key == 0 && VAR_42.asc == 0 && VAR_42.ascq == 0 &&
      VAR_44 == 0) {





   if (VAR_38 == VAR_23) {
    VAR_35->result = VAR_14;
    VAR_35->sense_buffer[0] = 0x0;
   }







   else if (VAR_35->cmnd[0] == VAR_1 ||
     VAR_35->cmnd[0] == VAR_0) {

   }






   else {
    VAR_35->result = VAR_3 << 16;
    if ((VAR_42.response_code & 0x72) == 0x72)
     VAR_35->sense_buffer[1] = VAR_6;
    else
     VAR_35->sense_buffer[2] = VAR_6;
   }
  }
 }
 if (FUNC_18((VAR_36->fflags & VAR_31) &&
   VAR_35->cmnd[0] == VAR_11)) {
  if (VAR_35->result == VAR_14) {
   FUNC_13(VAR_26, &VAR_36->dflags);
  } else if (FUNC_17(VAR_26, &VAR_36->dflags)) {
   FUNC_0(VAR_26, &VAR_36->dflags);
   FUNC_13(VAR_27, &VAR_36->dflags);
  }






  if (FUNC_17(VAR_27, &VAR_36->dflags)) {
   FUNC_0(VAR_27, &VAR_36->dflags);
   VAR_35->result = VAR_4 << 16;
   VAR_35->sense_buffer[0] = 0;
  }
 }


 if ((VAR_35->result == VAR_14 || VAR_35->sense_buffer[2] == 0) &&
   FUNC_4(VAR_35) - FUNC_7(VAR_35) < VAR_35->underflow)
  VAR_35->result = VAR_3 << 16;

 FUNC_1(VAR_36, VAR_35);
 return;






  Handle_Errors:





 FUNC_8(FUNC_19(VAR_36));
 FUNC_13(VAR_28, &VAR_36->dflags);
 FUNC_0(VAR_25, &VAR_36->dflags);
 FUNC_12(FUNC_19(VAR_36));





 FUNC_3(&VAR_36->dev_mutex);
 VAR_38 = FUNC_21(VAR_36);
 FUNC_2(&VAR_36->dev_mutex);

 if (VAR_38 < 0) {
  FUNC_8(FUNC_19(VAR_36));
  FUNC_22(VAR_36);
  FUNC_12(FUNC_19(VAR_36));
  VAR_36->transport_reset(VAR_36);
 }
 FUNC_0(VAR_28, &VAR_36->dflags);
 FUNC_1(VAR_36, VAR_35);
}
