
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dummy; } ;
struct asus_laptop {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct asus_laptop* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_2, int VAR_3)
{
 struct asus_laptop *VAR_4 = FUNC_0(VAR_2);

 if (FUNC_2(VAR_4->handle, VAR_1, VAR_3)) {
  FUNC_1("Error changing brightness\n");
  return -VAR_0;
 }
 return 0;
}
