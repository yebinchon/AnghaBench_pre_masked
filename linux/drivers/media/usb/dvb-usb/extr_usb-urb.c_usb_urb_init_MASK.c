
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_data_stream_properties {int dummy; } ;
struct TYPE_2__ {int type; int endpoint; } ;
struct usb_data_stream {TYPE_1__ props; int * complete; int udev; } ;


 int VAR_0 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,struct usb_data_stream_properties*,int) ;
 int FUNC_2 (struct usb_data_stream*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct usb_data_stream*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct usb_data_stream *VAR_1, struct usb_data_stream_properties *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_1->props, VAR_2, sizeof(*VAR_2));

 FUNC_3(VAR_1->udev,FUNC_5(VAR_1->udev,VAR_1->props.endpoint));

 if (VAR_1->complete == ((void*)0)) {
  FUNC_0("there is no data callback - this doesn't make sense.");
  return -VAR_0;
 }

 switch (VAR_1->props.type) {
  case 129:
   return FUNC_2(VAR_1);
  case 128:
   return FUNC_4(VAR_1);
  default:
   FUNC_0("unknown URB-type for data transfer.");
   return -VAR_0;
 }
}
