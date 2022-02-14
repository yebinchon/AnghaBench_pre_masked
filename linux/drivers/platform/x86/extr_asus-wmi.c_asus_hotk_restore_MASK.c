
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_13__ {scalar_t__ rfkill; } ;
struct TYPE_12__ {scalar_t__ rfkill; } ;
struct TYPE_11__ {scalar_t__ rfkill; } ;
struct TYPE_10__ {scalar_t__ rfkill; } ;
struct TYPE_9__ {scalar_t__ rfkill; } ;
struct TYPE_8__ {scalar_t__ rfkill; } ;
struct asus_wmi {TYPE_7__ kbd_led; TYPE_6__ uwb; TYPE_5__ gps; TYPE_4__ wwan3g; TYPE_3__ wimax; TYPE_2__ bluetooth; TYPE_1__ wlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct asus_wmi*) ;
 int FUNC_2 (struct asus_wmi*) ;
 int FUNC_3 (struct asus_wmi*,int ) ;
 scalar_t__ FUNC_4 (struct asus_wmi*) ;
 struct asus_wmi* FUNC_5 (struct device*) ;
 int FUNC_6 (struct asus_wmi*) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_5)
{
 struct asus_wmi *VAR_6 = FUNC_5(VAR_5);
 int VAR_7;


 if (VAR_6->wlan.rfkill)
  FUNC_1(VAR_6);

 if (VAR_6->bluetooth.rfkill) {
  VAR_7 = !FUNC_3(VAR_6,
         VAR_0);
  FUNC_7(VAR_6->bluetooth.rfkill, VAR_7);
 }
 if (VAR_6->wimax.rfkill) {
  VAR_7 = !FUNC_3(VAR_6, VAR_3);
  FUNC_7(VAR_6->wimax.rfkill, VAR_7);
 }
 if (VAR_6->wwan3g.rfkill) {
  VAR_7 = !FUNC_3(VAR_6, VAR_4);
  FUNC_7(VAR_6->wwan3g.rfkill, VAR_7);
 }
 if (VAR_6->gps.rfkill) {
  VAR_7 = !FUNC_3(VAR_6, VAR_1);
  FUNC_7(VAR_6->gps.rfkill, VAR_7);
 }
 if (VAR_6->uwb.rfkill) {
  VAR_7 = !FUNC_3(VAR_6, VAR_2);
  FUNC_7(VAR_6->uwb.rfkill, VAR_7);
 }
 if (!FUNC_0(VAR_6->kbd_led.dev))
  FUNC_6(VAR_6);

 if (FUNC_4(VAR_6))
  FUNC_2(VAR_6);
 return 0;
}
