
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct asus_wmi {TYPE_1__ kbd_led; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct asus_wmi*) ;
 scalar_t__ FUNC_2 (struct asus_wmi*) ;
 struct asus_wmi* FUNC_3 (struct device*) ;
 int FUNC_4 (struct asus_wmi*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct asus_wmi *VAR_1 = FUNC_3(VAR_0);

 if (!FUNC_0(VAR_1->kbd_led.dev))
  FUNC_4(VAR_1);

 if (FUNC_2(VAR_1))
  FUNC_1(VAR_1);
 return 0;
}
