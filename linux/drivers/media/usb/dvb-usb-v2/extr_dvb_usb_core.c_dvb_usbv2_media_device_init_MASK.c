
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct media_device {int dummy; } ;
struct dvb_usb_device {struct usb_device* udev; int name; } ;
struct dvb_usb_adapter {int dvb_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct media_device*) ;
 struct media_device* FUNC_3 (int,int ) ;
 int FUNC_4 (struct media_device*,struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_2)
{
 return 0;
}
