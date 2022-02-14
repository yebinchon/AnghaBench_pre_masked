
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int connection_state; int driver; struct device* host_dev; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;





 int FUNC_0 (struct device*,char*) ;
 struct renesas_usb3* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct renesas_usb3*) ;
 int FUNC_6 (struct renesas_usb3*) ;
 int FUNC_7 (struct renesas_usb3*,int) ;
 int FUNC_8 (struct renesas_usb3*,int) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_0,
         enum usb_role VAR_1)
{
 struct renesas_usb3 *VAR_2 = FUNC_1(VAR_0);
 struct device *VAR_3 = VAR_2->host_dev;
 enum usb_role VAR_4 = FUNC_4(VAR_0);

 switch (VAR_1) {
 case 128:
  VAR_2->connection_state = 128;
  if (VAR_2->driver)
   FUNC_6(VAR_2);
  FUNC_8(VAR_2, 0);
  break;
 case 130:
  if (VAR_2->connection_state == 128) {
   VAR_2->connection_state = 130;
   FUNC_7(VAR_2, 0);
   if (VAR_2->driver)
    FUNC_5(VAR_2);
  } else if (VAR_4 == 129) {
   FUNC_3(VAR_3);
   FUNC_7(VAR_2, 0);
   if (VAR_2->driver)
    FUNC_5(VAR_2);
  }
  FUNC_8(VAR_2, 0);
  break;
 case 129:
  if (VAR_2->connection_state == 128) {
   if (VAR_2->driver)
    FUNC_6(VAR_2);

   VAR_2->connection_state = 129;
   FUNC_7(VAR_2, 1);
   FUNC_8(VAR_2, 1);
   if (FUNC_2(VAR_3) < 0)
    FUNC_0(VAR_0, "device_attach(host) failed\n");
  } else if (VAR_4 == 130) {
   FUNC_6(VAR_2);

   FUNC_7(VAR_2, 1);

   if (FUNC_2(VAR_3) < 0)
    FUNC_0(VAR_0, "device_attach(host) failed\n");
  }
  break;
 default:
  break;
 }
}
