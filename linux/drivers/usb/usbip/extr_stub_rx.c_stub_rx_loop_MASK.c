
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct usbip_device*) ;
 scalar_t__ FUNC_2 (struct usbip_device*) ;

int FUNC_3(void *VAR_0)
{
 struct usbip_device *VAR_1 = VAR_0;

 while (!FUNC_0()) {
  if (FUNC_2(VAR_1))
   break;

  FUNC_1(VAR_1);
 }

 return 0;
}
