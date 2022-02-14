
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_device_id {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct dvb_usb_adapter {TYPE_3__* dev; TYPE_1__* fe_adap; } ;
struct TYPE_6__ {TYPE_2__* desc; int i2c_adap; } ;
struct TYPE_5__ {struct usb_device_id** warm_ids; } ;
struct TYPE_4__ {int * fe; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dvb_usb_adapter*) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_6)
{
 struct usb_device_id *VAR_7;

 VAR_6->fe_adap[0].fe = FUNC_0(VAR_4, &VAR_5,
      &VAR_6->dev->i2c_adap);
 if (!VAR_6->fe_adap[0].fe)
  return -VAR_0;
 if ((FUNC_0(VAR_3, VAR_6->fe_adap[0].fe,
     &VAR_6->dev->i2c_adap)) == ((void*)0))
  FUNC_1("Cannot attach lnbp22\n");

 VAR_7 = VAR_6->dev->desc->warm_ids[0];
 if (VAR_2 == VAR_7->idVendor
     && VAR_1 == VAR_7->idProduct)

  FUNC_2(VAR_6);

 return 0;
}
