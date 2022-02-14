
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_3)
{

 acpi_status VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, "_Q63", ((void*)0), ((void*)0));
  if (FUNC_0(VAR_4))
   return -VAR_0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->props.brightness; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, "_Q64", ((void*)0), ((void*)0));
  if (FUNC_0(VAR_4))
   return -VAR_0;
 }

 return 0;
}
