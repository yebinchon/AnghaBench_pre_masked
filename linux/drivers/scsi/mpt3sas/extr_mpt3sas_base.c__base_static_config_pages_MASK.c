
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ NumSensors; } ;
struct TYPE_9__ {int Flags; } ;
struct TYPE_7__ {int IOCCapabilities; } ;
struct TYPE_8__ {int EEDPTagMode; int AddlFlags2; int NVMeAbortTO; } ;
struct MPT3SAS_ADAPTER {int nvme_abort_timeout; int tm_custom_handling; scalar_t__ is_aero_ioc; TYPE_5__ iounit_pg8; scalar_t__ temp_sensors_count; TYPE_3__ iounit_pg1; TYPE_1__ facts; int iounit_pg0; int ioc_pg8; int bios_pg3; int bios_pg2; TYPE_2__ manu_pg11; int name; int is_gen35_ioc; int manu_pg10; scalar_t__ ir_firmware; int manu_pg0; } ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_8 (struct MPT3SAS_ADAPTER*,int *,TYPE_3__*) ;
 int FUNC_9 (struct MPT3SAS_ADAPTER*,int *,TYPE_5__*) ;
 int FUNC_10 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_11 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_12 (struct MPT3SAS_ADAPTER*,int *,TYPE_2__*) ;
 int FUNC_13 (struct MPT3SAS_ADAPTER*,int *,TYPE_3__*) ;
 int FUNC_14 (struct MPT3SAS_ADAPTER*,int *,TYPE_2__*) ;
 int FUNC_15 (char*,int ) ;

__attribute__((used)) static void
FUNC_16(struct MPT3SAS_ADAPTER *VAR_5)
{
 Mpi2ConfigReply_t VAR_6;
 u32 VAR_7;

 VAR_5->nvme_abort_timeout = 30;
 FUNC_10(VAR_5, &VAR_6, &VAR_5->manu_pg0);
 if (VAR_5->ir_firmware)
  FUNC_11(VAR_5, &VAR_6,
      &VAR_5->manu_pg10);





 FUNC_12(VAR_5, &VAR_6, &VAR_5->manu_pg11);
 if (!VAR_5->is_gen35_ioc && VAR_5->manu_pg11.EEDPTagMode == 0) {
  FUNC_15("%s: overriding NVDATA EEDPTagMode setting\n",
      VAR_5->name);
  VAR_5->manu_pg11.EEDPTagMode &= ~0x3;
  VAR_5->manu_pg11.EEDPTagMode |= 0x1;
  FUNC_14(VAR_5, &VAR_6,
      &VAR_5->manu_pg11);
 }
 if (VAR_5->manu_pg11.AddlFlags2 & VAR_4)
  VAR_5->tm_custom_handling = 1;
 else {
  VAR_5->tm_custom_handling = 0;
  if (VAR_5->manu_pg11.NVMeAbortTO < VAR_3)
   VAR_5->nvme_abort_timeout = VAR_3;
  else if (VAR_5->manu_pg11.NVMeAbortTO >
     VAR_2)
   VAR_5->nvme_abort_timeout = VAR_2;
  else
   VAR_5->nvme_abort_timeout = VAR_5->manu_pg11.NVMeAbortTO;
 }

 FUNC_4(VAR_5, &VAR_6, &VAR_5->bios_pg2);
 FUNC_5(VAR_5, &VAR_6, &VAR_5->bios_pg3);
 FUNC_6(VAR_5, &VAR_6, &VAR_5->ioc_pg8);
 FUNC_7(VAR_5, &VAR_6, &VAR_5->iounit_pg0);
 FUNC_8(VAR_5, &VAR_6, &VAR_5->iounit_pg1);
 FUNC_9(VAR_5, &VAR_6, &VAR_5->iounit_pg8);
 FUNC_0(VAR_5);





 VAR_7 = FUNC_3(VAR_5->iounit_pg1.Flags);
 if ((VAR_5->facts.IOCCapabilities &
     VAR_0))
  VAR_7 &=
      ~VAR_1;
 else
  VAR_7 |=
      VAR_1;
 VAR_5->iounit_pg1.Flags = FUNC_2(VAR_7);
 FUNC_13(VAR_5, &VAR_6, &VAR_5->iounit_pg1);

 if (VAR_5->iounit_pg8.NumSensors)
  VAR_5->temp_sensors_count = VAR_5->iounit_pg8.NumSensors;
 if (VAR_5->is_aero_ioc)
  FUNC_1(VAR_5);
}
