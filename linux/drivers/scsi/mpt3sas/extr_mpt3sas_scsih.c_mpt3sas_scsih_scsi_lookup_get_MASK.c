
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct scsiio_tracker {int cb_idx; scalar_t__ smid; } ;
struct scsi_cmnd {int dummy; } ;
struct MPT3SAS_ADAPTER {scalar_t__ scsiio_depth; int shost; } ;
struct TYPE_3__ {int DevHandle; } ;
typedef TYPE_1__ Mpi25SCSIIORequest_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 struct scsiio_tracker* FUNC_1 (struct scsi_cmnd*) ;
 struct scsi_cmnd* FUNC_2 (int ,scalar_t__) ;

struct scsi_cmnd *
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1, u16 VAR_2)
{
 struct scsi_cmnd *VAR_3 = ((void*)0);
 struct scsiio_tracker *VAR_4;
 Mpi25SCSIIORequest_t *VAR_5;

 if (VAR_2 > 0 &&
     VAR_2 <= VAR_1->scsiio_depth - VAR_0) {
  u32 VAR_6 = VAR_2 - 1;

  VAR_5 = FUNC_0(VAR_1, VAR_2);







  if (!VAR_5->DevHandle)
   return VAR_3;

  VAR_3 = FUNC_2(VAR_1->shost, VAR_6);
  if (VAR_3) {
   VAR_4 = FUNC_1(VAR_3);
   if (VAR_4->cb_idx == 0xFF || VAR_4->smid == 0)
    VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
