
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_port {int dev; struct usb_device* child; } ;
struct usb_hub {int mA_per_port; int intfdev; struct usb_port** ports; TYPE_1__* descriptor; int limited_power; struct usb_device* hdev; } ;
struct usb_device {int bus_mA; int maxchild; scalar_t__ parent; TYPE_2__* bus; scalar_t__ actconfig; } ;
struct TYPE_4__ {int otg_port; } ;
struct TYPE_3__ {int bHubContrCurrent; } ;


 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (struct usb_device*) ;
 int FUNC_2 (struct usb_device*,scalar_t__) ;

__attribute__((used)) static unsigned
FUNC_3(struct usb_hub *VAR_0)
{
 struct usb_device *VAR_1 = VAR_0->hdev;
 int VAR_2;
 int VAR_3;

 if (!VAR_0->limited_power)
  return 0;

 VAR_2 = VAR_1->bus_mA - VAR_0->descriptor->bHubContrCurrent;
 for (VAR_3 = 1; VAR_3 <= VAR_1->maxchild; ++VAR_3) {
  struct usb_port *VAR_4 = VAR_0->ports[VAR_3 - 1];
  struct usb_device *VAR_5 = VAR_4->child;
  unsigned VAR_6;
  int VAR_7;

  if (!VAR_5)
   continue;
  if (FUNC_1(VAR_5))
   VAR_6 = 150;
  else
   VAR_6 = 100;





  if (VAR_5->actconfig)
   VAR_7 = FUNC_2(VAR_5, VAR_5->actconfig);
  else if (VAR_3 != VAR_5->bus->otg_port || VAR_1->parent)
   VAR_7 = VAR_6;
  else
   VAR_7 = 8;
  if (VAR_7 > VAR_0->mA_per_port)
   FUNC_0(VAR_4->dev, "%dmA is over %umA budget!\n",
     VAR_7, VAR_0->mA_per_port);
  VAR_2 -= VAR_7;
 }
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->intfdev, "%dmA over power budget!\n",
   -VAR_2);
  VAR_2 = 0;
 }
 return VAR_2;
}
