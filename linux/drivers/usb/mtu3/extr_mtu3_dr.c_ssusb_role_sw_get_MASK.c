
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {scalar_t__ is_host; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int VAR_0 ;
 int VAR_1 ;
 struct ssusb_mtk* FUNC_0 (struct device*) ;

__attribute__((used)) static enum usb_role FUNC_1(struct device *VAR_2)
{
 struct ssusb_mtk *VAR_3 = FUNC_0(VAR_2);
 enum usb_role VAR_4;

 VAR_4 = VAR_3->is_host ? VAR_1 : VAR_0;

 return VAR_4;
}
