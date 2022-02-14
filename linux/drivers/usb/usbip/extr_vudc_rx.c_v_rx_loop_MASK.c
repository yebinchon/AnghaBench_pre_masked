
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct usbip_device*) ;
 int FUNC_3 (struct usbip_device*) ;

int FUNC_4(void *VAR_0)
{
 struct usbip_device *VAR_1 = VAR_0;
 int VAR_2 = 0;

 while (!FUNC_0()) {
  if (FUNC_2(VAR_1))
   break;
  VAR_2 = FUNC_3(VAR_1);
  if (VAR_2 < 0) {
   FUNC_1("v_rx exit with error %d", VAR_2);
   break;
  }
 }
 return VAR_2;
}
