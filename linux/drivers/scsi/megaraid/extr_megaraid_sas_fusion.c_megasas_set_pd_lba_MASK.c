
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct scsi_cmnd {scalar_t__ sc_data_direction; TYPE_2__* device; } ;
struct TYPE_8__ {scalar_t__ ldPiMode; } ;
struct MR_LD_RAID {TYPE_4__ capability; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;
struct TYPE_5__ {int PrimaryApplicationTagMask; int PrimaryReferenceTag; } ;
struct TYPE_7__ {int* CDB32; TYPE_1__ EEDP32; } ;
struct MPI2_RAID_SCSI_IO_REQUEST {void* IoFlags; int EEDPBlockSize; int Control; void* EEDPFlags; TYPE_3__ CDB; } ;
struct IO_REQUEST_INFO {int pdBlock; int numBlocks; int ldTgtId; } ;
struct TYPE_6__ {int sector_size; } ;


 scalar_t__ VAR_0 ;
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
 struct MR_LD_RAID* FUNC_0 (int ,struct MR_DRV_RAID_MAP_ALL*) ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct MPI2_RAID_SCSI_IO_REQUEST *VAR_20, u8 VAR_21,
     struct IO_REQUEST_INFO *VAR_22, struct scsi_cmnd *VAR_23,
     struct MR_DRV_RAID_MAP_ALL *VAR_24, u32 VAR_25)
{
 struct MR_LD_RAID *VAR_26;
 u16 VAR_27;
 u64 VAR_28 = VAR_22->pdBlock;
 u8 *VAR_29 = VAR_20->CDB.CDB32;
 u32 VAR_30 = VAR_22->numBlocks;
 u8 VAR_31 = 0, VAR_32 = 0, VAR_33 = 0, VAR_34 = 0;


 VAR_27 = FUNC_1(VAR_22->ldTgtId, VAR_24);
 VAR_26 = FUNC_0(VAR_27, VAR_24);
 if (VAR_26->capability.ldPiMode == VAR_13) {
  FUNC_6(VAR_29, 0, sizeof(VAR_20->CDB.CDB32));
  VAR_29[0] = VAR_5;
  VAR_29[7] = VAR_2;

  if (VAR_23->sc_data_direction == VAR_0)
   VAR_29[9] = VAR_3;
  else
   VAR_29[9] = VAR_4;
  VAR_29[10] = VAR_1;


  VAR_29[12] = (u8)((VAR_28 >> 56) & 0xff);
  VAR_29[13] = (u8)((VAR_28 >> 48) & 0xff);
  VAR_29[14] = (u8)((VAR_28 >> 40) & 0xff);
  VAR_29[15] = (u8)((VAR_28 >> 32) & 0xff);
  VAR_29[16] = (u8)((VAR_28 >> 24) & 0xff);
  VAR_29[17] = (u8)((VAR_28 >> 16) & 0xff);
  VAR_29[18] = (u8)((VAR_28 >> 8) & 0xff);
  VAR_29[19] = (u8)(VAR_28 & 0xff);


  VAR_20->CDB.EEDP32.PrimaryReferenceTag =
   FUNC_3(VAR_25);
  VAR_20->CDB.EEDP32.PrimaryApplicationTagMask = FUNC_2(0xffff);
  VAR_20->IoFlags = FUNC_4(32);


  VAR_29[28] = (u8)((VAR_30 >> 24) & 0xff);
  VAR_29[29] = (u8)((VAR_30 >> 16) & 0xff);
  VAR_29[30] = (u8)((VAR_30 >> 8) & 0xff);
  VAR_29[31] = (u8)(VAR_30 & 0xff);


  if (VAR_23->sc_data_direction == VAR_0) {
   VAR_20->EEDPFlags = FUNC_4(
    VAR_11 |
    VAR_9 |
    VAR_10 |
    VAR_7 |
    VAR_6 |
    VAR_8);
  } else {
   VAR_20->EEDPFlags = FUNC_4(
    VAR_11 |
    VAR_12);
  }
  VAR_20->Control |= FUNC_5((0x4 << 26));
  VAR_20->EEDPBlockSize = FUNC_5(VAR_23->device->sector_size);
 } else {

  if (((VAR_21 == 12) || (VAR_21 == 16)) &&
      (VAR_28 <= 0xffffffff)) {
   if (VAR_21 == 16) {
    VAR_31 = VAR_29[0] == VAR_16 ? VAR_14 : VAR_18;
    VAR_32 = VAR_29[1];
    VAR_33 = VAR_29[14];
    VAR_34 = VAR_29[15];
   } else {
    VAR_31 = VAR_29[0] == VAR_15 ? VAR_14 : VAR_18;
    VAR_32 = VAR_29[1];
    VAR_33 = VAR_29[10];
    VAR_34 = VAR_29[11];
   }

   FUNC_6(VAR_29, 0, sizeof(VAR_20->CDB.CDB32));

   VAR_29[0] = VAR_31;
   VAR_29[1] = VAR_32;
   VAR_29[6] = VAR_33;
   VAR_29[9] = VAR_34;


   VAR_29[8] = (u8)(VAR_30 & 0xff);
   VAR_29[7] = (u8)((VAR_30 >> 8) & 0xff);

   VAR_20->IoFlags = FUNC_4(10);
   VAR_21 = 10;
  } else if ((VAR_21 < 16) && (VAR_28 > 0xffffffff)) {

   switch (VAR_21) {
   case 6:
    VAR_31 = VAR_29[0] == VAR_17 ? VAR_16 : VAR_19;
    VAR_34 = VAR_29[5];
    break;
   case 10:
    VAR_31 =
     VAR_29[0] == VAR_14 ? VAR_16 : VAR_19;
    VAR_32 = VAR_29[1];
    VAR_33 = VAR_29[6];
    VAR_34 = VAR_29[9];
    break;
   case 12:
    VAR_31 =
     VAR_29[0] == VAR_15 ? VAR_16 : VAR_19;
    VAR_32 = VAR_29[1];
    VAR_33 = VAR_29[10];
    VAR_34 = VAR_29[11];
    break;
   }

   FUNC_6(VAR_29, 0, sizeof(VAR_20->CDB.CDB32));

   VAR_29[0] = VAR_31;
   VAR_29[1] = VAR_32;
   VAR_29[14] = VAR_33;
   VAR_29[15] = VAR_34;


   VAR_29[13] = (u8)(VAR_30 & 0xff);
   VAR_29[12] = (u8)((VAR_30 >> 8) & 0xff);
   VAR_29[11] = (u8)((VAR_30 >> 16) & 0xff);
   VAR_29[10] = (u8)((VAR_30 >> 24) & 0xff);

   VAR_20->IoFlags = FUNC_4(16);
   VAR_21 = 16;
  }


  switch (VAR_21) {
  case 6:
  {
   u8 VAR_35 = VAR_29[1] & 0xE0;
   VAR_29[3] = (u8)(VAR_28 & 0xff);
   VAR_29[2] = (u8)((VAR_28 >> 8) & 0xff);
   VAR_29[1] = VAR_35 | ((u8)(VAR_28 >> 16) & 0x1f);
   break;
  }
  case 10:
   VAR_29[5] = (u8)(VAR_28 & 0xff);
   VAR_29[4] = (u8)((VAR_28 >> 8) & 0xff);
   VAR_29[3] = (u8)((VAR_28 >> 16) & 0xff);
   VAR_29[2] = (u8)((VAR_28 >> 24) & 0xff);
   break;
  case 12:
   VAR_29[5] = (u8)(VAR_28 & 0xff);
   VAR_29[4] = (u8)((VAR_28 >> 8) & 0xff);
   VAR_29[3] = (u8)((VAR_28 >> 16) & 0xff);
   VAR_29[2] = (u8)((VAR_28 >> 24) & 0xff);
   break;
  case 16:
   VAR_29[9] = (u8)(VAR_28 & 0xff);
   VAR_29[8] = (u8)((VAR_28 >> 8) & 0xff);
   VAR_29[7] = (u8)((VAR_28 >> 16) & 0xff);
   VAR_29[6] = (u8)((VAR_28 >> 24) & 0xff);
   VAR_29[5] = (u8)((VAR_28 >> 32) & 0xff);
   VAR_29[4] = (u8)((VAR_28 >> 40) & 0xff);
   VAR_29[3] = (u8)((VAR_28 >> 48) & 0xff);
   VAR_29[2] = (u8)((VAR_28 >> 56) & 0xff);
   break;
  }
 }
}
