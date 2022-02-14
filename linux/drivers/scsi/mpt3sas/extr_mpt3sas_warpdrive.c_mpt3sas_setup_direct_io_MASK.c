
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct scsiio_tracker {int direct_io; } ;
struct scsi_cmnd {scalar_t__* cmnd; } ;
struct _raid_device {int block_exponent; int max_lba; int stripe_sz; int stripe_exponent; scalar_t__ num_pds; int * pd_handle; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;
typedef int sector_t ;
struct TYPE_4__ {int * CDB32; } ;
struct TYPE_5__ {TYPE_1__ CDB; int DevHandle; } ;
typedef TYPE_2__ Mpi25SCSIIORequest_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 struct scsiio_tracker* FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (int,scalar_t__) ;

void
FUNC_9(struct MPT3SAS_ADAPTER *VAR_4, struct scsi_cmnd *VAR_5,
 struct _raid_device *VAR_6, Mpi25SCSIIORequest_t *VAR_7)
{
 sector_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 u8 VAR_15, VAR_16 = VAR_5->cmnd[0];
 struct scsiio_tracker *VAR_17 = FUNC_7(VAR_5);

 if (VAR_16 != VAR_0 && VAR_16 != VAR_2 &&
     VAR_16 != VAR_1 && VAR_16 != VAR_3)
  return;

 if (VAR_16 == VAR_0 || VAR_16 == VAR_2)
  VAR_8 = FUNC_1(&VAR_7->CDB.CDB32[2]);
 else
  VAR_8 = FUNC_2(&VAR_7->CDB.CDB32[2]);

 VAR_12 = FUNC_6(VAR_5) >> VAR_6->block_exponent;

 if (VAR_8 + VAR_12 - 1 > VAR_6->max_lba)
  return;

 VAR_13 = VAR_6->stripe_sz;
 VAR_14 = VAR_6->stripe_exponent;
 VAR_10 = VAR_8 & (VAR_13 - 1);


 if (VAR_10 + VAR_12 > VAR_13)
  return;

 VAR_15 = VAR_6->num_pds;
 VAR_9 = VAR_8 >> VAR_14;
 VAR_11 = FUNC_8(VAR_9, VAR_15);
 VAR_9 = (VAR_9 << VAR_14) + VAR_10;
 VAR_7->DevHandle = FUNC_0(VAR_6->pd_handle[VAR_11]);

 if (VAR_16 == VAR_0 || VAR_16 == VAR_2)
  FUNC_4(FUNC_3(VAR_9),
       &VAR_7->CDB.CDB32[2]);
 else
  FUNC_5(VAR_9, &VAR_7->CDB.CDB32[2]);

 VAR_17->direct_io = 1;
}
