
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {scalar_t__ hotplug_disabled; int wimax_rfkill; int wwan3g_rfkill; int bluetooth_rfkill; int wlan_rfkill; int hotplug_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct eeepc_laptop*,int *,char*,int ,int ) ;
 int FUNC_1 (struct eeepc_laptop*,int ) ;
 int FUNC_2 (struct eeepc_laptop*) ;
 int FUNC_3 (struct eeepc_laptop*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct eeepc_laptop *VAR_13)
{
 int VAR_14 = 0;

 FUNC_4(&VAR_13->hotplug_lock);

 VAR_14 = FUNC_0(VAR_13, &VAR_13->wlan_rfkill,
      "eeepc-wlan", VAR_11,
      VAR_3);

 if (VAR_14 && VAR_14 != -VAR_8)
  goto exit;

 VAR_14 = FUNC_0(VAR_13, &VAR_13->bluetooth_rfkill,
      "eeepc-bluetooth", VAR_9,
      VAR_1);

 if (VAR_14 && VAR_14 != -VAR_8)
  goto exit;

 VAR_14 = FUNC_0(VAR_13, &VAR_13->wwan3g_rfkill,
      "eeepc-wwan3g", VAR_12,
      VAR_0);

 if (VAR_14 && VAR_14 != -VAR_8)
  goto exit;

 VAR_14 = FUNC_0(VAR_13, &VAR_13->wimax_rfkill,
      "eeepc-wimax", VAR_10,
      VAR_2);

 if (VAR_14 && VAR_14 != -VAR_8)
  goto exit;

 if (VAR_13->hotplug_disabled)
  return 0;

 VAR_14 = FUNC_3(VAR_13);




 if (VAR_14 == -VAR_4)
  VAR_14 = 0;

 FUNC_1(VAR_13, VAR_5);
 FUNC_1(VAR_13, VAR_6);
 FUNC_1(VAR_13, VAR_7);

exit:
 if (VAR_14 && VAR_14 != -VAR_8)
  FUNC_2(VAR_13);
 return VAR_14;
}
