
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {int underflow; int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; int * host_scribble; int sense_buffer; } ;
struct bfad_s {int dummy; } ;
struct bfad_itnim_s {int dummy; } ;
struct bfad_itnim_data_s {struct bfad_itnim_s* itnim; } ;
struct bfad_ioim_s {int dummy; } ;
typedef int s32 ;
typedef enum bfi_ioim_status { ____Placeholder_bfi_ioim_status } bfi_ioim_status ;
struct TYPE_3__ {scalar_t__ queue_depth; struct bfad_itnim_data_s* hostdata; int * host; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct bfad_s*,int) ;
 int FUNC_1 (struct bfad_itnim_s*,TYPE_1__*) ;
 int FUNC_2 (struct bfad_itnim_s*,TYPE_1__*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*,int) ;
 int FUNC_7 (struct scsi_cmnd*) ;

void
FUNC_8(void *VAR_8, struct bfad_ioim_s *VAR_9,
   enum bfi_ioim_status VAR_10, u8 VAR_11,
   int VAR_12, u8 *VAR_13, s32 VAR_14)
{
 struct scsi_cmnd *VAR_15 = (struct scsi_cmnd *)VAR_9;
 struct bfad_s *VAR_16 = VAR_8;
 struct bfad_itnim_data_s *VAR_17;
 struct bfad_itnim_s *VAR_18;
 u8 VAR_19 = VAR_1;

 switch (VAR_10) {
 case 130:
  FUNC_0(VAR_16, VAR_11);
  FUNC_6(VAR_15, 0);

  if (VAR_12 > 0) {
   FUNC_0(VAR_16, VAR_12);
   if (VAR_12 > VAR_6)
    VAR_12 = VAR_6;
   FUNC_3(VAR_15->sense_buffer, VAR_13, VAR_12);
  }

  if (VAR_14 > 0) {
   FUNC_0(VAR_16, VAR_14);
   FUNC_6(VAR_15, VAR_14);
   if (!VAR_12 && (VAR_11 == VAR_4) &&
    (FUNC_4(VAR_15) - VAR_14) <
     VAR_15->underflow) {
    FUNC_0(VAR_16, 0);
    VAR_19 = VAR_0;
   }
  }
  VAR_15->result = VAR_19 << 16 | VAR_11;

  break;

 case 128:
  VAR_15->result = VAR_2 << 16;
  break;
 case 129:
  VAR_15->result = VAR_3 << 16;
  break;
 default:
  VAR_15->result = VAR_0 << 16;
 }


 if (VAR_15->device->host != ((void*)0))
  FUNC_5(VAR_15);

 VAR_15->host_scribble = ((void*)0);
 FUNC_0(VAR_16, VAR_15->result);

 VAR_17 = VAR_15->device->hostdata;
 if (VAR_17) {
  VAR_18 = VAR_17->itnim;
  if (!VAR_15->result && VAR_18 &&
    (VAR_7 > VAR_15->device->queue_depth)) {

   FUNC_2(VAR_18, VAR_15->device);
  } else if (VAR_15->result == VAR_5 && VAR_18) {

   FUNC_1(VAR_18, VAR_15->device);
  }
 }

 VAR_15->scsi_done(VAR_15);
}
