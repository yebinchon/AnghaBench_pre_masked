
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int name; } ;
struct cdns3_endpoint {int flags; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ep*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 struct cdns3_endpoint* FUNC_2 (struct usb_ep*) ;

int FUNC_3(struct usb_ep *VAR_1)
{
 struct cdns3_endpoint *VAR_2 = FUNC_2(VAR_1);
 struct cdns3_device *VAR_3 = VAR_2->cdns3_dev;

 FUNC_1(VAR_3->dev, "Wedge for %s\n", VAR_1->name);
 FUNC_0(VAR_1, 1);
 VAR_2->flags |= VAR_0;

 return 0;
}
