
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct asus_laptop {TYPE_5__* pega_accel_poll; int * backlight_device; TYPE_2__* device; int * event_count; } ;
struct acpi_device {int dummy; } ;
struct TYPE_10__ {TYPE_4__* input; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_9__ {TYPE_3__ dev; } ;
struct TYPE_6__ {int device_class; } ;
struct TYPE_7__ {int dev; TYPE_1__ pnp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,scalar_t__) ;
 struct asus_laptop* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct asus_laptop*) ;
 int FUNC_3 (struct asus_laptop*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct acpi_device *VAR_7, u32 VAR_8)
{
 struct asus_laptop *VAR_9 = FUNC_1(VAR_7);
 u16 VAR_10;


 VAR_10 = VAR_9->event_count[VAR_8 % 128]++;
 FUNC_0(VAR_9->device->pnp.device_class,
     FUNC_4(&VAR_9->device->dev), VAR_8,
     VAR_10);

 if (VAR_8 >= VAR_5 && VAR_8 <= VAR_4)
  VAR_8 = VAR_3;
 else if (VAR_8 >= VAR_2 &&
   VAR_8 <= VAR_1)
  VAR_8 = VAR_0;


 if (VAR_8 == VAR_0 || VAR_8 == VAR_3) {
  if (VAR_9->backlight_device != ((void*)0)) {

   FUNC_2(VAR_9);
   return ;
  }
 }


 if (VAR_9->pega_accel_poll && VAR_8 == 0xEA) {
  FUNC_5(&VAR_9->pega_accel_poll->input->dev.kobj,
          VAR_6);
  return ;
 }

 FUNC_3(VAR_9, VAR_8);
}
