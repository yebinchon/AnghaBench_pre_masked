
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct rndis_wlan_private {int device_type; int param_power_save; int param_power_output; int param_roamtrigger; int param_roamdelta; int param_workaround_interval; void** param_country; int param_afterburner; int param_frameburst; } ;


 struct rndis_wlan_private* FUNC_0 (struct usbnet*) ;
 int VAR_0 ;
 void** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void**,char*) ;
 int FUNC_2 (void**,char*) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(struct usbnet *VAR_8, int VAR_9)
{
 struct rndis_wlan_private *VAR_10 = FUNC_0(VAR_8);

 VAR_10->device_type = VAR_9;

 VAR_10->param_country[0] = VAR_1[0];
 VAR_10->param_country[1] = VAR_1[1];
 VAR_10->param_country[2] = 0;
 VAR_10->param_frameburst = VAR_2;
 VAR_10->param_afterburner = VAR_0;
 VAR_10->param_power_save = VAR_4;
 VAR_10->param_power_output = VAR_3;
 VAR_10->param_roamtrigger = VAR_6;
 VAR_10->param_roamdelta = VAR_5;

 VAR_10->param_country[0] = FUNC_3(VAR_10->param_country[0]);
 VAR_10->param_country[1] = FUNC_3(VAR_10->param_country[1]);

 if (!FUNC_1(VAR_10->param_country, "EU"))
  FUNC_2(VAR_10->param_country, "FI");

 if (VAR_10->param_power_save < 0)
  VAR_10->param_power_save = 0;
 else if (VAR_10->param_power_save > 2)
  VAR_10->param_power_save = 2;

 if (VAR_10->param_power_output < 0)
  VAR_10->param_power_output = 0;
 else if (VAR_10->param_power_output > 3)
  VAR_10->param_power_output = 3;

 if (VAR_10->param_roamtrigger < -80)
  VAR_10->param_roamtrigger = -80;
 else if (VAR_10->param_roamtrigger > -60)
  VAR_10->param_roamtrigger = -60;

 if (VAR_10->param_roamdelta < 0)
  VAR_10->param_roamdelta = 0;
 else if (VAR_10->param_roamdelta > 2)
  VAR_10->param_roamdelta = 2;

 if (VAR_7 < 0)
  VAR_10->param_workaround_interval = 500;
 else
  VAR_10->param_workaround_interval = VAR_7;
}
