
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct scsi_cmnd {TYPE_3__* device; int request; } ;
struct MPT3SAS_ADAPTER {scalar_t__ is_gen35_ioc; } ;
struct TYPE_6__ {int PrimaryReferenceTag; } ;
struct TYPE_7__ {TYPE_1__ EEDP32; } ;
struct TYPE_9__ {void* EEDPFlags; void* EEDPBlockSize; TYPE_2__ CDB; } ;
struct TYPE_8__ {int sector_size; } ;
typedef TYPE_4__ Mpi25SCSIIORequest_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;



 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 unsigned char FUNC_2 (struct scsi_cmnd*) ;
 unsigned char FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_10, struct scsi_cmnd *VAR_11,
 Mpi25SCSIIORequest_t *VAR_12)
{
 u16 VAR_13;
 unsigned char VAR_14 = FUNC_2(VAR_11);
 unsigned char VAR_15 = FUNC_3(VAR_11);
 Mpi25SCSIIORequest_t *VAR_16 =
    (Mpi25SCSIIORequest_t *)VAR_12;

 if (VAR_15 == VAR_6 || VAR_14 == VAR_7)
  return;

 if (VAR_14 == VAR_8)
  VAR_13 = VAR_3;
 else if (VAR_14 == VAR_9)
  VAR_13 = VAR_5;
 else
  return;

 switch (VAR_15) {
 case 130:
 case 129:





  VAR_13 |= VAR_4 |
      VAR_2 |
      VAR_1;
  VAR_12->CDB.EEDP32.PrimaryReferenceTag =
      FUNC_0(FUNC_4(VAR_11->request));
  break;

 case 128:




  VAR_13 |= VAR_1;

  break;
 }

 VAR_16->EEDPBlockSize =
     FUNC_1(VAR_11->device->sector_size);

 if (VAR_10->is_gen35_ioc)
  VAR_13 |= VAR_0;
 VAR_12->EEDPFlags = FUNC_1(VAR_13);
}
