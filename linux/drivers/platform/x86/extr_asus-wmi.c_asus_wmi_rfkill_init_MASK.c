
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asus_wmi {TYPE_2__* driver; int uwb; int gps; int wwan3g; int wimax; int bluetooth; int wlan; int wmi_lock; int hotplug_lock; } ;
struct TYPE_4__ {TYPE_1__* quirks; } ;
struct TYPE_3__ {int hotplug_wireless; } ;


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
 int VAR_13 ;
 int FUNC_0 (struct asus_wmi*,int *,char*,int ,int ) ;
 int FUNC_1 (struct asus_wmi*,char*) ;
 int FUNC_2 (struct asus_wmi*) ;
 int FUNC_3 (struct asus_wmi*) ;
 int FUNC_4 (struct asus_wmi*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct asus_wmi *VAR_14)
{
 int VAR_15 = 0;

 FUNC_5(&VAR_14->hotplug_lock);
 FUNC_5(&VAR_14->wmi_lock);

 VAR_15 = FUNC_0(VAR_14, &VAR_14->wlan, "asus-wlan",
     VAR_12, VAR_4);

 if (VAR_15 && VAR_15 != -VAR_7)
  goto exit;

 VAR_15 = FUNC_0(VAR_14, &VAR_14->bluetooth,
     "asus-bluetooth", VAR_8,
     VAR_0);

 if (VAR_15 && VAR_15 != -VAR_7)
  goto exit;

 VAR_15 = FUNC_0(VAR_14, &VAR_14->wimax, "asus-wimax",
     VAR_11, VAR_3);

 if (VAR_15 && VAR_15 != -VAR_7)
  goto exit;

 VAR_15 = FUNC_0(VAR_14, &VAR_14->wwan3g, "asus-wwan3g",
     VAR_13, VAR_5);

 if (VAR_15 && VAR_15 != -VAR_7)
  goto exit;

 VAR_15 = FUNC_0(VAR_14, &VAR_14->gps, "asus-gps",
     VAR_9, VAR_1);

 if (VAR_15 && VAR_15 != -VAR_7)
  goto exit;

 VAR_15 = FUNC_0(VAR_14, &VAR_14->uwb, "asus-uwb",
     VAR_10, VAR_2);

 if (VAR_15 && VAR_15 != -VAR_7)
  goto exit;

 if (!VAR_14->driver->quirks->hotplug_wireless)
  goto exit;

 VAR_15 = FUNC_3(VAR_14);




 if (VAR_15 == -VAR_6)
  VAR_15 = 0;

 FUNC_1(VAR_14, "\\_SB.PCI0.P0P5");
 FUNC_1(VAR_14, "\\_SB.PCI0.P0P6");
 FUNC_1(VAR_14, "\\_SB.PCI0.P0P7");




 FUNC_2(VAR_14);

exit:
 if (VAR_15 && VAR_15 != -VAR_7)
  FUNC_4(VAR_14);

 if (VAR_15 == -VAR_7)
  VAR_15 = 0;

 return VAR_15;
}
