
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int pd_handles; int pd_handles_sz; int is_warpdrive; int raid_device_list; int ir_firmware; } ;
struct TYPE_14__ {int IOCStatus; } ;
struct TYPE_13__ {int PhysDiskNum; int DevHandle; } ;
struct TYPE_12__ {scalar_t__ VolumeState; } ;
struct TYPE_11__ {int WWID; int DevHandle; } ;
typedef TYPE_1__ Mpi2RaidVolPage1_t ;
typedef TYPE_2__ Mpi2RaidVolPage0_t ;
typedef TYPE_3__ Mpi2RaidPhysDiskPage0_t ;
typedef TYPE_4__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ,int) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,TYPE_4__*,TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_7 (struct MPT3SAS_ADAPTER*,TYPE_4__*,TYPE_2__*,int ,int,int) ;
 int FUNC_8 (struct MPT3SAS_ADAPTER*,TYPE_4__*,TYPE_1__*,int ,int) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static void
FUNC_10(struct MPT3SAS_ADAPTER *VAR_8)
{
 Mpi2RaidVolPage1_t VAR_9;
 Mpi2RaidVolPage0_t VAR_10;
 Mpi2RaidPhysDiskPage0_t VAR_11;
 Mpi2ConfigReply_t VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 u8 VAR_15;

 if (!VAR_8->ir_firmware)
  return;

 FUNC_1(VAR_8, "search for raid volumes: start\n");

 if (FUNC_4(&VAR_8->raid_device_list))
  goto out;

 VAR_14 = 0xFFFF;
 while (!(FUNC_8(VAR_8, &VAR_12,
     &VAR_9, VAR_3, VAR_14))) {
  VAR_13 = FUNC_2(VAR_12.IOCStatus) &
      VAR_0;
  if (VAR_13 != VAR_1)
   break;
  VAR_14 = FUNC_2(VAR_9);

  if (FUNC_7(VAR_8, &VAR_12,
      &VAR_10, VAR_4, VAR_14,
       sizeof(Mpi2RaidVolPage0_t)))
   continue;

  if (VAR_10 == VAR_7 ||
      VAR_10 == VAR_6 ||
      VAR_10 == VAR_5)
   FUNC_0(VAR_8,
       FUNC_3(VAR_9), VAR_14);
 }


 if (!VAR_8->is_warpdrive) {
  VAR_15 = 0xFF;
  FUNC_5(VAR_8->pd_handles, 0, VAR_8->pd_handles_sz);
  while (!(FUNC_6(VAR_8, &VAR_12,
      &VAR_11, VAR_2,
      VAR_15))) {
   VAR_13 = FUNC_2(VAR_12.IOCStatus) &
       VAR_0;
   if (VAR_13 != VAR_1)
    break;
   VAR_15 = VAR_11;
   VAR_14 = FUNC_2(VAR_11);
   FUNC_9(VAR_14, VAR_8->pd_handles);
  }
 }
 out:
 FUNC_1(VAR_8, "search for responding raid volumes: complete\n");
}
