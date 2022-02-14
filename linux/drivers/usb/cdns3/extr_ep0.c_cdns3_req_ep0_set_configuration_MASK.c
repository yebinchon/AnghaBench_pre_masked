
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int wValue; } ;
struct cdns3_endpoint {int flags; } ;
struct TYPE_2__ {int state; } ;
struct cdns3_device {TYPE_1__ gadget; struct cdns3_endpoint** eps; } ;
typedef enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct cdns3_device*,struct usb_ctrlrequest*) ;
 int FUNC_1 (struct cdns3_endpoint*) ;
 int FUNC_2 (struct cdns3_device*) ;
 int FUNC_3 (struct cdns3_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int const) ;

__attribute__((used)) static int FUNC_6(struct cdns3_device *VAR_3,
        struct usb_ctrlrequest *VAR_4)
{
 enum usb_device_state VAR_5 = VAR_3->gadget.state;
 struct cdns3_endpoint *VAR_6;
 u32 VAR_7 = FUNC_4(VAR_4->wValue);
 int VAR_8 = 0;
 int VAR_9;

 switch (VAR_5) {
 case 129:

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_6 = VAR_3->eps[VAR_9];
   if (!VAR_6)
    continue;

   if (VAR_6->flags & VAR_2)
    FUNC_1(VAR_6);
  }

  VAR_8 = FUNC_0(VAR_3, VAR_4);

  if (VAR_8)
   return VAR_8;

  if (VAR_7) {
   FUNC_3(VAR_3);
  } else {
   FUNC_2(VAR_3);
   FUNC_5(&VAR_3->gadget,
          129);
  }
  break;
 case 128:
  VAR_8 = FUNC_0(VAR_3, VAR_4);

  if (!VAR_7 && !VAR_8) {
   FUNC_2(VAR_3);
   FUNC_5(&VAR_3->gadget,
          129);
  }
  break;
 default:
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
