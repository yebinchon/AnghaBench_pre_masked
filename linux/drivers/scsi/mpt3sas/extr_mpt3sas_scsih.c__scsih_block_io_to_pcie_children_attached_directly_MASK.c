
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_5__ {int NumEntries; TYPE_1__* PortEntry; } ;
struct TYPE_4__ {scalar_t__ PortStatus; int AttachedDevHandle; } ;
typedef TYPE_2__ Mpi26EventDataPCIeTopologyChangeList_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_1,
  Mpi26EventDataPCIeTopologyChangeList_t *VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 u16 VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2->NumEntries; VAR_3++) {
  VAR_4 =
   FUNC_1(VAR_2->PortEntry[VAR_3].AttachedDevHandle);
  if (!VAR_4)
   continue;
  VAR_5 = VAR_2->PortEntry[VAR_3].PortStatus;
  if (VAR_5 ==
    VAR_0)
   FUNC_0(VAR_1, VAR_4);
 }
}
