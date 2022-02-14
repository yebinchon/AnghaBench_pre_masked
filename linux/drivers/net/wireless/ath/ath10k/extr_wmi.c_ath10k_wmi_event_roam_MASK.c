
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_roam_ev_arg {int rssi; int reason; int vdev_id; } ;
struct sk_buff {int dummy; } ;
struct ath10k {int dummy; } ;
typedef void* s32 ;


 int VAR_0 ;




 int VAR_1 ;

 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,int,int,void*) ;
 int FUNC_2 (struct ath10k*,int) ;
 int FUNC_3 (struct ath10k*,char*,int,...) ;
 int FUNC_4 (struct ath10k*,struct sk_buff*,struct wmi_roam_ev_arg*) ;

void FUNC_5(struct ath10k *VAR_3, struct sk_buff *VAR_4)
{
 struct wmi_roam_ev_arg VAR_5 = {};
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 s32 VAR_9;

 VAR_6 = FUNC_4(VAR_3, VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3, "failed to parse roam event: %d\n", VAR_6);
  return;
 }

 VAR_7 = FUNC_0(VAR_5.vdev_id);
 VAR_8 = FUNC_0(VAR_5.reason);
 VAR_9 = FUNC_0(VAR_5.rssi);
 VAR_9 += VAR_2;

 FUNC_1(VAR_3, VAR_0,
     "wmi roam event vdev %u reason 0x%08x rssi %d\n",
     VAR_7, VAR_8, VAR_9);

 if (VAR_8 >= VAR_1)
  FUNC_3(VAR_3, "ignoring unknown roam event reason %d on vdev %i\n",
       VAR_8, VAR_7);

 switch (VAR_8) {
 case 132:
  FUNC_2(VAR_3, VAR_7);
  break;
 case 131:
 case 129:
 case 128:
 case 130:
  FUNC_3(VAR_3, "ignoring not implemented roam event reason %d on vdev %i\n",
       VAR_8, VAR_7);
  break;
 }
}
