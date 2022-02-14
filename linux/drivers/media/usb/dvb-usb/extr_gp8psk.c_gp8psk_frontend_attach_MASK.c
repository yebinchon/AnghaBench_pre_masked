
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_usb_device {TYPE_2__* udev; } ;
struct dvb_usb_adapter {TYPE_3__* fe_adap; struct dvb_usb_device* dev; } ;
struct TYPE_6__ {int fe; } ;
struct TYPE_4__ {int idProduct; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct dvb_usb_device*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_3)
{
 struct dvb_usb_device *VAR_4 = VAR_3->dev;
 int VAR_5 = FUNC_1(VAR_4->udev->descriptor.idProduct);
 int VAR_6;

 VAR_6 = (VAR_5 == VAR_0) ? 1 : 0;

 VAR_3->fe_adap[0].fe = FUNC_0(VAR_1,
      &VAR_2, VAR_4, VAR_6);
 return 0;
}
