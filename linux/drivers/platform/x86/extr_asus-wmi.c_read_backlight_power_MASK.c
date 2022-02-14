
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asus_wmi {TYPE_2__* driver; } ;
struct TYPE_4__ {int panel_power; TYPE_1__* quirks; } ;
struct TYPE_3__ {scalar_t__ store_backlight_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asus_wmi*,int ) ;

__attribute__((used)) static int FUNC_1(struct asus_wmi *VAR_3)
{
 int VAR_4;

 if (VAR_3->driver->quirks->store_backlight_power)
  VAR_4 = !VAR_3->driver->panel_power;
 else
  VAR_4 = FUNC_0(VAR_3,
         VAR_0);

 if (VAR_4 < 0)
  return VAR_4;

 return VAR_4 ? VAR_2 : VAR_1;
}
