
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface_descriptor {int bNumEndpoints; int bInterfaceNumber; } ;
struct usb_interface {struct usb_host_interface* altsetting; } ;
struct usb_host_interface {TYPE_1__* endpoint; struct usb_interface_descriptor desc; } ;
struct usb_config_descriptor {int bNumInterfaces; } ;
struct usb_host_config {struct usb_config_descriptor desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device {scalar_t__ speed; struct usb_host_config* actconfig; } ;
struct dvobj_priv {size_t RtNumInPipes; size_t RtNumOutPipes; int* RtInPipe; int* RtOutPipe; int ishighspeed; int usb_vendor_req_mutex; int InterfaceNumber; int NumInterfaces; struct usb_device* pusbdev; struct usb_interface* pusbintf; } ;
struct TYPE_2__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 struct dvobj_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_endpoint_descriptor*) ;
 int FUNC_6 (struct usb_endpoint_descriptor*) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_interface*,struct dvobj_priv*) ;

__attribute__((used)) static struct dvobj_priv *FUNC_9(struct usb_interface *VAR_2)
{
 int VAR_3;
 struct dvobj_priv *VAR_4;
 struct usb_host_config *VAR_5;
 struct usb_config_descriptor *VAR_6;
 struct usb_host_interface *VAR_7;
 struct usb_interface_descriptor *VAR_8;
 struct usb_endpoint_descriptor *VAR_9;
 struct usb_device *VAR_10;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->pusbintf = VAR_2;
 VAR_10 = FUNC_0(VAR_2);
 VAR_4->pusbdev = VAR_10;
 FUNC_8(VAR_2, VAR_4);

 VAR_4->RtNumInPipes = 0;
 VAR_4->RtNumOutPipes = 0;

 VAR_5 = VAR_10->actconfig;
 VAR_6 = &VAR_5->desc;

 VAR_7 = &VAR_2->altsetting[0];
 VAR_8 = &VAR_7->desc;

 VAR_4->NumInterfaces = VAR_6->bNumInterfaces;
 VAR_4->InterfaceNumber = VAR_8->bInterfaceNumber;

 for (VAR_3 = 0; VAR_3 < VAR_8->bNumEndpoints; VAR_3++) {
  int VAR_11;

  VAR_9 = &VAR_7->endpoint[VAR_3].desc;

  VAR_11 = FUNC_6(VAR_9);

  if (FUNC_3(VAR_9)) {
   VAR_4->RtInPipe[VAR_4->RtNumInPipes] = VAR_11;
   VAR_4->RtNumInPipes++;
  } else if (FUNC_5(VAR_9)) {
   VAR_4->RtInPipe[VAR_4->RtNumInPipes] = VAR_11;
   VAR_4->RtNumInPipes++;
  } else if (FUNC_4(VAR_9)) {
   VAR_4->RtOutPipe[VAR_4->RtNumOutPipes] =
    VAR_11;
   VAR_4->RtNumOutPipes++;
  }
 }

 if (VAR_10->speed == VAR_1)
  VAR_4->ishighspeed = 1;
 else
  VAR_4->ishighspeed = 0;

 FUNC_2(&VAR_4->usb_vendor_req_mutex);
 FUNC_7(VAR_10);

 return VAR_4;
}
