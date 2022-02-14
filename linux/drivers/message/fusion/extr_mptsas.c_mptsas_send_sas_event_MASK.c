
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mptsas_hotplug_event {int device_info; int event_type; int sas_address; int phy_id; int id; int channel; int handle; } ;
struct fw_event_work {scalar_t__ event_data; int * ioc; } ;
struct TYPE_2__ {int ReasonCode; int SASAddress; int PhyNum; int TargetID; int Bus; int DevHandle; int DeviceInfo; } ;
typedef int MPT_ADAPTER ;
typedef TYPE_1__ EVENT_DATA_SAS_DEVICE_STATUS_CHANGE ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct mptsas_hotplug_event*,int ,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,struct fw_event_work*) ;
 int FUNC_7 (int *,struct fw_event_work*,struct mptsas_hotplug_event*) ;

__attribute__((used)) static void
FUNC_8(struct fw_event_work *VAR_6)
{
 MPT_ADAPTER *VAR_7;
 struct mptsas_hotplug_event VAR_8;
 EVENT_DATA_SAS_DEVICE_STATUS_CHANGE *VAR_9;
 u32 VAR_10;
 u64 VAR_11;

 VAR_7 = VAR_6->ioc;
 VAR_9 = (EVENT_DATA_SAS_DEVICE_STATUS_CHANGE *)
     VAR_6->event_data;
 VAR_10 = FUNC_1(VAR_9->DeviceInfo);

 if ((VAR_10 &
  (VAR_1 |
  VAR_2 |
  VAR_0)) == 0) {
  FUNC_6(VAR_7, VAR_6);
  return;
 }

 if (VAR_9->ReasonCode ==
  129) {
  FUNC_5(VAR_7,
  VAR_3);
  FUNC_6(VAR_7, VAR_6);
  return;
 }

 switch (VAR_9->ReasonCode) {
 case 130:
 case 132:
  FUNC_4(&VAR_8, 0, sizeof(struct mptsas_hotplug_event));
  VAR_8.handle = FUNC_0(VAR_9->DevHandle);
  VAR_8.channel = VAR_9->Bus;
  VAR_8.id = VAR_9->TargetID;
  VAR_8.phy_id = VAR_9->PhyNum;
  FUNC_3(&VAR_11, &VAR_9->SASAddress,
      sizeof(u64));
  VAR_8.sas_address = FUNC_2(VAR_11);
  VAR_8.device_info = VAR_10;
  if (VAR_9->ReasonCode &
      132)
   VAR_8.event_type = VAR_4;
  else
   VAR_8.event_type = VAR_5;
  FUNC_7(VAR_7, VAR_6, &VAR_8);
  break;

 case 129:
  FUNC_5(VAR_7,
      VAR_3);
  FUNC_6(VAR_7, VAR_6);
  break;

 case 128:

 case 131:

 default:
  FUNC_6(VAR_7, VAR_6);
  break;
 }
}
