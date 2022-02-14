
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_event_work {int event; scalar_t__ event_data; int device_handle; } ;
struct SL_WH_TRIGGERS_EVENT_DATA_T {int dummy; } ;
struct MPT3SAS_ADAPTER {int logging_level; int start_scan; scalar_t__ remove_host; int shost_recovery; int shost; scalar_t__ pci_error_recovery; } ;
typedef int Mpi2EventDataSasDeviceStatusChange_t ;
 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_7 (struct MPT3SAS_ADAPTER*,int *) ;
 int FUNC_8 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_9 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_10 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_11 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_12 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_13 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_14 (struct MPT3SAS_ADAPTER*,struct fw_event_work*) ;
 int FUNC_15 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_16 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_17 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_18 (struct fw_event_work*) ;
 int FUNC_19 (struct MPT3SAS_ADAPTER*,char*) ;
 int* VAR_1 ;
 int FUNC_20 (struct MPT3SAS_ADAPTER*,int,int) ;
 int FUNC_21 (struct MPT3SAS_ADAPTER*,struct SL_WH_TRIGGERS_EVENT_DATA_T*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int) ;

__attribute__((used)) static void
FUNC_24(struct MPT3SAS_ADAPTER *VAR_2, struct fw_event_work *VAR_3)
{
 FUNC_0(VAR_2, VAR_3);


 if (VAR_2->remove_host || VAR_2->pci_error_recovery) {
  FUNC_18(VAR_3);
  return;
 }

 switch (VAR_3->event) {
 case 130:
  FUNC_21(VAR_2,
   (struct SL_WH_TRIGGERS_EVENT_DATA_T *)
   VAR_3->event_data);
  break;
 case 129:
  while (FUNC_22(VAR_2->shost) ||
      VAR_2->shost_recovery) {




   if (VAR_2->remove_host)
    goto out;
   FUNC_23(1);
  }
  FUNC_4(VAR_2);
  FUNC_15(VAR_2);
  break;
 case 131:
  VAR_2->start_scan = 0;
  if (VAR_1[0] != -1 && VAR_1[1] != -1)
   FUNC_20(VAR_2, VAR_1[0],
       VAR_1[1]);
  FUNC_17(VAR_2,
      FUNC_19(VAR_2, "port enable: complete from worker thread\n"));
  break;
 case 128:
  FUNC_16(VAR_2, VAR_3->device_handle);
  break;
 case 132:
  FUNC_14(VAR_2, VAR_3);
  break;
 case 135:
  if (VAR_2->logging_level & VAR_0)
   FUNC_7(VAR_2,
       (Mpi2EventDataSasDeviceStatusChange_t *)
       VAR_3->event_data);
  break;
 case 134:
  FUNC_8(VAR_2, VAR_3);
  break;
 case 136:
  FUNC_6(VAR_2, VAR_3);
  break;
 case 137:
  FUNC_5(VAR_2, VAR_3);
  break;
 case 133:
  FUNC_9(VAR_2,
      VAR_3);
  break;
 case 144:
  FUNC_10(VAR_2, VAR_3);
  break;
 case 141:
  FUNC_13(VAR_2, VAR_3);
  break;
 case 142:
  FUNC_12(VAR_2, VAR_3);
  break;
 case 143:
  FUNC_11(VAR_2, VAR_3);
  break;
 case 140:
  FUNC_1(VAR_2, VAR_3);
  break;
 case 139:
  FUNC_2(VAR_2, VAR_3);
  break;
 case 138:
  FUNC_3(VAR_2, VAR_3);
   return;
 break;
 }
out:
 FUNC_18(VAR_3);
}
