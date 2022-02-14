
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {scalar_t__ ttport; TYPE_1__* tt; } ;
struct TYPE_2__ {scalar_t__ multi; } ;



__attribute__((used)) static int FUNC_0(struct usb_device *VAR_0, struct usb_device *VAR_1)
{
 if (!VAR_0->tt || !VAR_1->tt)
  return 0;
 if (VAR_0->tt != VAR_1->tt)
  return 0;
 if (VAR_0->tt->multi)
  return VAR_0->ttport == VAR_1->ttport;
 else
  return 1;
}
