
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int dev; } ;
struct TYPE_6__ {int buffersize; } ;
struct TYPE_7__ {TYPE_2__ bulk; } ;
struct usb_data_stream_properties {TYPE_3__ u; } ;
struct dvb_usb_device {TYPE_1__* udev; struct usb_interface* intf; } ;
struct dvb_frontend {int dummy; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_5__ {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 TYPE_4__* FUNC_1 (struct dvb_frontend*) ;
 struct dvb_usb_device* FUNC_2 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1, u8 *VAR_2,
  struct usb_data_stream_properties *VAR_3)
{
 struct dvb_usb_device *VAR_4 = FUNC_2(VAR_1);
 struct usb_interface *VAR_5 = VAR_4->intf;

 FUNC_0(&VAR_5->dev, "adap=%d\n", FUNC_1(VAR_1)->id);

 if (VAR_4->udev->speed == VAR_0)
  VAR_3->u.bulk.buffersize = 5 * 188;

 return 0;
}
