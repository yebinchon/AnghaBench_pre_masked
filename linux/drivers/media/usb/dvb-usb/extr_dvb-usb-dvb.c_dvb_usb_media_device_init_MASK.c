
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dev; } ;
struct media_device {int dummy; } ;
struct dvb_usb_device {struct usb_device* udev; TYPE_1__* desc; } ;
struct dvb_usb_adapter {int dvb_adap; struct dvb_usb_device* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct media_device*) ;
 struct media_device* FUNC_2 (int,int ) ;
 int FUNC_3 (struct media_device*,struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_2)
{
 return 0;
}
