
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dummy; } ;
struct asus_laptop {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,unsigned long long*) ;
 struct asus_laptop* FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct backlight_device *VAR_1)
{
 struct asus_laptop *VAR_2 = FUNC_2(VAR_1);
 unsigned long long VAR_3;
 acpi_status VAR_4;

 VAR_4 = FUNC_1(VAR_2->handle, VAR_0,
       ((void*)0), &VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_3("Error reading brightness\n");
  return 0;
 }

 return VAR_3;
}
