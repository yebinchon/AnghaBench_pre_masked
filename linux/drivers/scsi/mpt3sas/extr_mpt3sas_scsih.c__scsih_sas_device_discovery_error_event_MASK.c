
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct fw_event_work {scalar_t__ event_data; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_2__ {int ReasonCode; int PhysicalPort; int SASAddress; int DevHandle; } ;
typedef TYPE_1__ Mpi25EventDataSasDeviceDiscoveryError_t ;




 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_0,
 struct fw_event_work *VAR_1)
{
 Mpi25EventDataSasDeviceDiscoveryError_t *VAR_2 =
  (Mpi25EventDataSasDeviceDiscoveryError_t *)VAR_1->event_data;

 switch (VAR_2->ReasonCode) {
 case 129:
  FUNC_0(VAR_0, "SMP command sent to the expander (handle:0x%04x, sas_address:0x%016llx, physical_port:0x%02x) has failed\n",
    FUNC_1(VAR_2->DevHandle),
    (u64)FUNC_2(VAR_2->SASAddress),
    VAR_2->PhysicalPort);
  break;
 case 128:
  FUNC_0(VAR_0, "SMP command sent to the expander (handle:0x%04x, sas_address:0x%016llx, physical_port:0x%02x) has timed out\n",
    FUNC_1(VAR_2->DevHandle),
    (u64)FUNC_2(VAR_2->SASAddress),
    VAR_2->PhysicalPort);
  break;
 default:
  break;
 }
}
