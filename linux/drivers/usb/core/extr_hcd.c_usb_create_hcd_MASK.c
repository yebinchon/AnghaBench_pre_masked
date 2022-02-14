
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct hc_driver {int dummy; } ;
struct device {int dummy; } ;


 struct usb_hcd* FUNC_0 (struct hc_driver const*,struct device*,struct device*,char const*,int *) ;

struct usb_hcd *FUNC_1(const struct hc_driver *VAR_0,
  struct device *VAR_1, const char *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1, VAR_2, ((void*)0));
}
