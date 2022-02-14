
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int wLength; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct cdns3_device {int setup_dma; int dev; TYPE_1__ gadget; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cdns3_device*,int ,int,int,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct cdns3_device *VAR_2,
     struct usb_ctrlrequest *VAR_3)
{
 if (VAR_2->gadget.state < VAR_1)
  return -VAR_0;

 if (VAR_3->wLength != 6) {
  FUNC_1(VAR_2->dev, "Set SEL should be 6 bytes, got %d\n",
   VAR_3->wLength);
  return -VAR_0;
 }

 FUNC_0(VAR_2, VAR_2->setup_dma, 6, 1, 0);
 return 0;
}
