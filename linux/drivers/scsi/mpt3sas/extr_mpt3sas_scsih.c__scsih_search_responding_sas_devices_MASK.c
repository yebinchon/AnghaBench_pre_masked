
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int sas_device_list; } ;
struct TYPE_7__ {int IOCStatus; } ;
struct TYPE_6__ {int DeviceInfo; int DevHandle; } ;
typedef TYPE_1__ Mpi2SasDevicePage0_t ;
typedef TYPE_2__ Mpi2ConfigReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,TYPE_2__*,TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct MPT3SAS_ADAPTER *VAR_3)
{
 Mpi2SasDevicePage0_t VAR_4;
 Mpi2ConfigReply_t VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u32 VAR_8;

 FUNC_2(VAR_3, "search for end-devices: start\n");

 if (FUNC_5(&VAR_3->sas_device_list))
  goto out;

 VAR_7 = 0xFFFF;
 while (!(FUNC_6(VAR_3, &VAR_5,
     &VAR_4, VAR_2,
     VAR_7))) {
  VAR_6 = FUNC_3(VAR_5.IOCStatus) &
      VAR_0;
  if (VAR_6 != VAR_1)
   break;
  VAR_7 = FUNC_3(VAR_4);
  VAR_8 = FUNC_4(VAR_4);
  if (!(FUNC_0(VAR_8)))
   continue;
  FUNC_1(VAR_3, &VAR_4);
 }

 out:
 FUNC_2(VAR_3, "search for end-devices: complete\n");
}
