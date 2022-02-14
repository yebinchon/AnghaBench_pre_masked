
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct asus_wmi {int platform_device; TYPE_1__* driver; } ;
struct TYPE_2__ {int event_guid; } ;


 int FUNC_0 (struct asus_wmi*) ;
 int FUNC_1 (struct asus_wmi*) ;
 int FUNC_2 (struct asus_wmi*) ;
 int FUNC_3 (struct asus_wmi*) ;
 int FUNC_4 (struct asus_wmi*) ;
 int FUNC_5 (struct asus_wmi*) ;
 int FUNC_6 (struct asus_wmi*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct asus_wmi*) ;
 struct asus_wmi* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct asus_wmi *VAR_1;

 VAR_1 = FUNC_9(VAR_0);
 FUNC_10(VAR_1->driver->event_guid);
 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);
 FUNC_7(VAR_1->platform_device);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);

 FUNC_8(VAR_1);
 return 0;
}
