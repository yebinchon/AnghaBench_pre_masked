
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_event_work {scalar_t__ event_data; } ;
struct MPT3SAS_ADAPTER {int logging_level; } ;
struct TYPE_2__ {scalar_t__ ReasonCode; scalar_t__ EnumerationStatus; int Flags; } ;
typedef TYPE_1__ Mpi26EventDataPCIeEnumeration_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_2,
 struct fw_event_work *VAR_3)
{
 Mpi26EventDataPCIeEnumeration_t *VAR_4 =
  (Mpi26EventDataPCIeEnumeration_t *)VAR_3->event_data;

 if (!(VAR_2->logging_level & VAR_1))
  return;

 FUNC_0(VAR_2, "pcie enumeration event: (%s) Flag 0x%02x",
   (VAR_4->ReasonCode == VAR_0) ?
   "started" : "completed",
   VAR_4->Flags);
 if (VAR_4->EnumerationStatus)
  FUNC_2("enumeration_status(0x%08x)",
   FUNC_1(VAR_4->EnumerationStatus));
 FUNC_2("\n");
}
