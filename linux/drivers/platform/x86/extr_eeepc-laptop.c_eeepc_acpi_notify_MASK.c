
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct eeepc_laptop {int backlight_device; int * event_count; } ;
struct TYPE_2__ {int device_class; } ;
struct acpi_device {int dev; TYPE_1__ pnp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 struct eeepc_laptop* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct eeepc_laptop*) ;
 int FUNC_4 (struct eeepc_laptop*,int) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_3, u32 VAR_4)
{
 struct eeepc_laptop *VAR_5 = FUNC_1(VAR_3);
 int VAR_6, VAR_7;
 u16 VAR_8;

 if (VAR_4 > VAR_0)
  return;
 VAR_8 = VAR_5->event_count[VAR_4 % 128]++;
 FUNC_0(VAR_3->pnp.device_class,
     FUNC_2(&VAR_3->dev), VAR_4,
     VAR_8);


 if (VAR_4 < VAR_2 || VAR_4 > VAR_1) {
  FUNC_4(VAR_5, VAR_4);
  return;
 }


 if (!VAR_5->backlight_device)
  return;


 VAR_6 = FUNC_3(VAR_5);


 VAR_7 = VAR_4 - VAR_2;

 if (VAR_7 < VAR_6) {
  VAR_4 = VAR_2;
 } else if (VAR_7 > VAR_6) {
  VAR_4 = VAR_1;
 } else {




 }
 FUNC_4(VAR_5, VAR_4);
}
