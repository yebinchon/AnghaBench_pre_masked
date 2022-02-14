
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_laptop {scalar_t__ wimax_rfkill; scalar_t__ wwan3g_rfkill; scalar_t__ bluetooth_rfkill; scalar_t__ wlan_rfkill; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct eeepc_laptop* FUNC_0 (struct device*) ;
 int FUNC_1 (struct eeepc_laptop*,int ) ;
 int FUNC_2 (struct eeepc_laptop*,int ) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_6)
{
 struct eeepc_laptop *VAR_7 = FUNC_0(VAR_6);


 if (VAR_7->wlan_rfkill) {
  FUNC_1(VAR_7, VAR_3);
  FUNC_1(VAR_7, VAR_4);
  FUNC_1(VAR_7, VAR_5);
 }

 if (VAR_7->bluetooth_rfkill)
  FUNC_3(VAR_7->bluetooth_rfkill,
        FUNC_2(VAR_7, VAR_1) != 1);
 if (VAR_7->wwan3g_rfkill)
  FUNC_3(VAR_7->wwan3g_rfkill,
        FUNC_2(VAR_7, VAR_0) != 1);
 if (VAR_7->wimax_rfkill)
  FUNC_3(VAR_7->wimax_rfkill,
        FUNC_2(VAR_7, VAR_2) != 1);

 return 0;
}
