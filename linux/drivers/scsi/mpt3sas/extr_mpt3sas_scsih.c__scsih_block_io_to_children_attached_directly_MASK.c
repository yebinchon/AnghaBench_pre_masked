
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_5__ {int NumEntries; TYPE_1__* PHY; } ;
struct TYPE_4__ {int PhyStatus; int AttachedDevHandle; } ;
typedef TYPE_2__ Mpi2EventDataSasTopologyChangeList_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_2,
 Mpi2EventDataSasTopologyChangeList_t *VAR_3)
{
 int VAR_4;
 u16 VAR_5;
 u16 VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3->NumEntries; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3->PHY[VAR_4].AttachedDevHandle);
  if (!VAR_5)
   continue;
  VAR_6 = VAR_3->PHY[VAR_4].PhyStatus &
      VAR_1;
  if (VAR_6 == VAR_0)
   FUNC_0(VAR_2, VAR_5);
 }
}
