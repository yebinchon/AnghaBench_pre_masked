
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {void* rc_codes; void* rc_query; } ;
struct TYPE_6__ {TYPE_1__ core; } ;
struct dvb_usb_device_properties {int num_device_descs; TYPE_4__* adapter; int * devices; TYPE_2__ rc; int firmware; } ;
struct TYPE_8__ {TYPE_3__* fe; } ;
struct TYPE_7__ {int frontend_attach; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct usb_interface*,struct dvb_usb_device_properties*,int ,int *,int ) ;
 struct dvb_usb_device_properties VAR_17 ;
 struct dvb_usb_device_properties VAR_18 ;
 struct dvb_usb_device_properties VAR_19 ;
 int FUNC_1 (struct dvb_usb_device_properties*) ;
 struct dvb_usb_device_properties* FUNC_2 (struct dvb_usb_device_properties*,int,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 struct dvb_usb_device_properties VAR_23 ;
 int VAR_24 ;
 struct dvb_usb_device_properties VAR_25 ;
 struct dvb_usb_device_properties VAR_26 ;
 struct dvb_usb_device_properties VAR_27 ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_28,
  const struct usb_device_id *VAR_29)
{
 int VAR_30 = -VAR_1;
 struct dvb_usb_device_properties *VAR_31;
 struct dvb_usb_device_properties *VAR_32;
 struct dvb_usb_device_properties *VAR_33;
 struct dvb_usb_device_properties *VAR_34;

 VAR_31 = FUNC_2(&VAR_23,
   sizeof(struct dvb_usb_device_properties), VAR_2);
 if (!VAR_31)
  goto err0;



 VAR_31->firmware = VAR_3;
 VAR_31->devices[0] = VAR_9;
 VAR_31->rc.core.rc_query = VAR_22;
 VAR_31->rc.core.rc_codes = VAR_5;
 VAR_31->adapter->fe[0].frontend_attach = VAR_24;

 VAR_32 = FUNC_2(&VAR_23,
         sizeof(struct dvb_usb_device_properties), VAR_2);
 if (!VAR_32)
  goto err1;

 VAR_32->firmware = VAR_6;
 VAR_32->num_device_descs = 3;
 VAR_32->devices[0] = VAR_14;
 VAR_32->devices[1] = VAR_11;
 VAR_32->devices[2] = VAR_12;
 VAR_32->adapter->fe[0].frontend_attach = VAR_16;

 VAR_33 = FUNC_2(&VAR_23,
   sizeof(struct dvb_usb_device_properties), VAR_2);
 if (!VAR_33)
  goto err2;

 VAR_33->firmware = VAR_4;
 VAR_33->devices[0] = VAR_15;
 VAR_33->rc.core.rc_query = VAR_22;
 VAR_33->rc.core.rc_codes = VAR_5;
 VAR_33->adapter->fe[0].frontend_attach = VAR_21;


 VAR_34 = FUNC_2(&VAR_25,
         sizeof(struct dvb_usb_device_properties), VAR_2);
 if (!VAR_34)
  goto err3;

 VAR_34->num_device_descs = 2;
 VAR_34->devices[0] = VAR_10;
 VAR_34->devices[1] = VAR_13;
 VAR_34->adapter->fe[0].frontend_attach = VAR_20;

 if (0 == FUNC_0(VAR_28, &VAR_17,
   VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, &VAR_18,
   VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, &VAR_19,
   VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, &VAR_23,
   VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, VAR_31,
   VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, VAR_32,
   VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, VAR_33,
   VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, VAR_34,
   VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, &VAR_25,
    VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, &VAR_26,
    VAR_7, ((void*)0), VAR_8) ||
     0 == FUNC_0(VAR_28, &VAR_27,
    VAR_7, ((void*)0), VAR_8)) {


  FUNC_1(VAR_34);
  FUNC_1(VAR_33);
  FUNC_1(VAR_32);
  FUNC_1(VAR_31);

  return 0;
 }

 VAR_30 = -VAR_0;
 FUNC_1(VAR_34);
err3:
 FUNC_1(VAR_33);
err2:
 FUNC_1(VAR_32);
err1:
 FUNC_1(VAR_31);
err0:
 return VAR_30;
}
