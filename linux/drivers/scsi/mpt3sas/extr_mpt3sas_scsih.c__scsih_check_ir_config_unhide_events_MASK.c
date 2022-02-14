
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct _tr_list {int list; scalar_t__ handle; } ;
struct MPT3SAS_ADAPTER {int delayed_tr_list; int pd_handles; scalar_t__ is_warpdrive; } ;
struct TYPE_5__ {int NumElements; int * ConfigElement; int Flags; } ;
struct TYPE_4__ {scalar_t__ ReasonCode; int VolDevHandle; int PhysDiskDevHandle; } ;
typedef TYPE_1__ Mpi2EventIrConfigElement_t ;
typedef TYPE_2__ Mpi2EventDataIrConfigChangeList_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_8 (struct MPT3SAS_ADAPTER*,char*,scalar_t__) ;
 struct _tr_list* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static void
FUNC_13(struct MPT3SAS_ADAPTER *VAR_5,
 Mpi2EventDataIrConfigChangeList_t *VAR_6)
{
 Mpi2EventIrConfigElement_t *VAR_7;
 int VAR_8;
 u16 VAR_9, VAR_10, VAR_11, VAR_12;
 struct _tr_list *VAR_13;

 VAR_11 = 0;
 VAR_12 = 0;

 if (VAR_5->is_warpdrive)
  return;


 VAR_7 = (Mpi2EventIrConfigElement_t *)&VAR_6->ConfigElement[0];
 for (VAR_8 = 0; VAR_8 < VAR_6->NumElements; VAR_8++, VAR_7++) {
  if (FUNC_11(VAR_6->Flags) &
      VAR_1)
   continue;
  if (VAR_7->ReasonCode ==
      VAR_4 ||
      VAR_7->ReasonCode ==
      VAR_2) {
   VAR_10 = FUNC_10(VAR_7->VolDevHandle);
   FUNC_2(VAR_5, VAR_10);
   FUNC_3(VAR_10, &VAR_11, &VAR_12);
  }
 }


 VAR_7 = (Mpi2EventIrConfigElement_t *)&VAR_6->ConfigElement[0];
 for (VAR_8 = 0; VAR_8 < VAR_6->NumElements; VAR_8++, VAR_7++) {
  if (FUNC_11(VAR_6->Flags) &
      VAR_1)
   continue;
  if (VAR_7->ReasonCode == VAR_3) {
   VAR_10 = FUNC_10(VAR_7->VolDevHandle);
   FUNC_3(VAR_10, &VAR_11, &VAR_12);
  }
 }

 if (VAR_11)
  FUNC_5(VAR_5, VAR_11);
 if (VAR_12)
  FUNC_5(VAR_5, VAR_12);


 VAR_7 = (Mpi2EventIrConfigElement_t *)&VAR_6->ConfigElement[0];
 for (VAR_8 = 0; VAR_8 < VAR_6->NumElements; VAR_8++, VAR_7++) {
  if (VAR_7->ReasonCode != VAR_3)
   continue;
  VAR_9 = FUNC_10(VAR_7->PhysDiskDevHandle);
  VAR_10 = FUNC_10(VAR_7->VolDevHandle);
  FUNC_6(VAR_9, VAR_5->pd_handles);
  if (!VAR_10)
   FUNC_4(VAR_5, VAR_9);
  else if (VAR_10 == VAR_11 || VAR_10 == VAR_12) {
   VAR_13 = FUNC_9(sizeof(*VAR_13), VAR_0);
   FUNC_0(!VAR_13);
   FUNC_1(&VAR_13->list);
   VAR_13->handle = VAR_9;
   FUNC_12(&VAR_13->list, &VAR_5->delayed_tr_list);
   FUNC_7(VAR_5,
       FUNC_8(VAR_5, "DELAYED:tr:handle(0x%04x), (open)\n",
         VAR_9));
  } else
   FUNC_4(VAR_5, VAR_9);
 }
}
