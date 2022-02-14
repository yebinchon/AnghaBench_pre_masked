
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_host_endpoint {int dummy; } ;
struct TYPE_4__ {TYPE_1__* root_hub; } ;
struct usb_hcd {TYPE_2__ self; } ;
struct usb_device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct usb_hcd *VAR_0, struct usb_device *VAR_1,
 struct usb_host_endpoint **VAR_2, unsigned int VAR_3,
 unsigned int VAR_4, gfp_t VAR_5)
{
 FUNC_0(&VAR_0->self.root_hub->dev, "vhci_alloc_streams not implemented\n");
 return 0;
}
