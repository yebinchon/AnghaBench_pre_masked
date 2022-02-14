
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct fw_event_work {scalar_t__ event_data; } ;
struct MPT3SAS_ADAPTER {int logging_level; scalar_t__ hba_mpi_version_belonged; int is_warpdrive; scalar_t__ shost_recovery; int hide_ir_msg; } ;
struct TYPE_10__ {int NumElements; int * ConfigElement; int Flags; } ;
struct TYPE_9__ {int ReasonCode; int VolDevHandle; int PhysDiskNum; int PhysDiskDevHandle; } ;
typedef TYPE_1__ Mpi2EventIrConfigElement_t ;
typedef TYPE_2__ Mpi2EventDataIrConfigChangeList_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,TYPE_2__*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,TYPE_1__*) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct MPT3SAS_ADAPTER *VAR_3,
 struct fw_event_work *VAR_4)
{
 Mpi2EventIrConfigElement_t *VAR_5;
 int VAR_6;
 u8 VAR_7;
 Mpi2EventDataIrConfigChangeList_t *VAR_8 =
  (Mpi2EventDataIrConfigChangeList_t *)
  VAR_4->event_data;

 if ((VAR_3->logging_level & VAR_2) &&
      (!VAR_3->hide_ir_msg))
  FUNC_1(VAR_3, VAR_8);

 VAR_7 = (FUNC_9(VAR_8->Flags) &
     VAR_0) ? 1 : 0;

 VAR_5 = (Mpi2EventIrConfigElement_t *)&VAR_8->ConfigElement[0];
 if (VAR_3->shost_recovery &&
     VAR_3->hba_mpi_version_belonged != VAR_1) {
  for (VAR_6 = 0; VAR_6 < VAR_8->NumElements; VAR_6++, VAR_5++) {
   if (VAR_5->ReasonCode == 134)
    FUNC_0(VAR_3,
     FUNC_8(VAR_5->PhysDiskDevHandle),
     VAR_5->PhysDiskNum);
  }
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_8->NumElements; VAR_6++, VAR_5++) {

  switch (VAR_5->ReasonCode) {
  case 129:
  case 135:
   if (!VAR_7)
    FUNC_6(VAR_3, VAR_5);
   break;
  case 128:
  case 131:
   if (!VAR_7)
    FUNC_7(VAR_3,
        FUNC_8(VAR_5->VolDevHandle));
   break;
  case 133:
   if (!VAR_3->is_warpdrive)
    FUNC_5(VAR_3, VAR_5);
   break;
  case 132:
   if (!VAR_3->is_warpdrive)
    FUNC_4(VAR_3, VAR_5);
   break;
  case 134:
   if (!VAR_3->is_warpdrive)
    FUNC_2(VAR_3, VAR_5);
   break;
  case 130:
   if (!VAR_3->is_warpdrive)
    FUNC_3(VAR_3, VAR_5);
   break;
  }
 }
}
