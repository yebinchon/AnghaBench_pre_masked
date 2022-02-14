
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {TYPE_1__* desc; } ;
struct cdns3_endpoint {int flags; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {int lock; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cdns3_endpoint*) ;
 int FUNC_1 (struct cdns3_endpoint*) ;
 int FUNC_2 (struct cdns3_device*,int ) ;
 struct cdns3_endpoint* FUNC_3 (struct usb_ep*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct usb_ep *VAR_3, int VAR_4)
{
 struct cdns3_endpoint *VAR_5 = FUNC_3(VAR_3);
 struct cdns3_device *VAR_6 = VAR_5->cdns3_dev;
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (!(VAR_5->flags & VAR_1))
  return -VAR_0;

 FUNC_4(&VAR_6->lock, VAR_7);

 FUNC_2(VAR_6, VAR_3->desc->bEndpointAddress);

 if (!VAR_4) {
  VAR_5->flags &= ~VAR_2;
  VAR_8 = FUNC_0(VAR_5);
 } else {
  FUNC_1(VAR_5);
 }

 FUNC_5(&VAR_6->lock, VAR_7);

 return VAR_8;
}
