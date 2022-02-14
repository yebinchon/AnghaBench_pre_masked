
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {struct device* host_dev; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct renesas_usb3* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct renesas_usb3*,int) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2,
         enum usb_role VAR_3)
{
 struct renesas_usb3 *VAR_4 = FUNC_1(VAR_2);
 struct device *VAR_5 = VAR_4->host_dev;
 enum usb_role VAR_6 = FUNC_4(VAR_2);

 if (VAR_6 == VAR_1 && VAR_3 == VAR_0) {
  FUNC_3(VAR_5);
  FUNC_5(VAR_4, 0);
 } else if (VAR_6 == VAR_0 && VAR_3 == VAR_1) {

  FUNC_5(VAR_4, 1);

  if (FUNC_2(VAR_5) < 0)
   FUNC_0(VAR_2, "device_attach(host) failed\n");
 }
}
