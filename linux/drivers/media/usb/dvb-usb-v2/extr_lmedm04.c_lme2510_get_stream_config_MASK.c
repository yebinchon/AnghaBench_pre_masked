
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_data_stream_properties {int endpoint; } ;
struct dvb_usb_device {TYPE_2__* udev; } ;
struct dvb_usb_adapter {int pid_filtering; int max_feed_count; } ;
struct dvb_frontend {int dummy; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct dvb_usb_adapter* FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, u8 *VAR_2,
  struct usb_data_stream_properties *VAR_3)
{
 struct dvb_usb_adapter *VAR_4 = FUNC_1(VAR_1);
 struct dvb_usb_device *VAR_5;

 if (VAR_4 == ((void*)0))
  return 0;

 VAR_5 = FUNC_0(VAR_4);


 if (VAR_0 == 2) {
  VAR_4->pid_filtering = 1;
  VAR_4->max_feed_count = 15;
 }

 if (!(FUNC_2(VAR_5->udev->descriptor.idProduct)
  == 0x1122))
  VAR_3->endpoint = 0x8;

 return 0;
}
