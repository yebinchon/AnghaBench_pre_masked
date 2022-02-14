
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int dummy; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int VAR_0 ;
 int VAR_1 ;
 struct renesas_usb3* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct renesas_usb3*) ;

__attribute__((used)) static enum usb_role FUNC_4(struct device *VAR_2)
{
 struct renesas_usb3 *VAR_3 = FUNC_0(VAR_2);
 enum usb_role VAR_4;

 FUNC_1(VAR_2);
 VAR_4 = FUNC_3(VAR_3) ? VAR_1 : VAR_0;
 FUNC_2(VAR_2);

 return VAR_4;
}
