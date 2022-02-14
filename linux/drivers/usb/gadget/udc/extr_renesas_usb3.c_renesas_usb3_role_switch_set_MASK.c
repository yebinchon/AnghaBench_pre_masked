
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {scalar_t__ role_sw_by_connector; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 struct renesas_usb3* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0,
     enum usb_role VAR_1)
{
 struct renesas_usb3 *VAR_2 = FUNC_0(VAR_0);

 FUNC_3(VAR_0);

 if (VAR_2->role_sw_by_connector)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_2(VAR_0, VAR_1);

 FUNC_4(VAR_0);

 return 0;
}
