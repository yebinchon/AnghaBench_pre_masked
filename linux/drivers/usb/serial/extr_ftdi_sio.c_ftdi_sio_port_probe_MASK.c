
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* serial; } ;
struct ftdi_sio_quirk {int (* port_probe ) (struct ftdi_private*) ;} ;
struct ftdi_private {int latency; int cfg_lock; } ;
struct TYPE_4__ {TYPE_1__* interface; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_serial_port*) ;
 struct ftdi_private* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct usb_serial_port*) ;
 int FUNC_8 (struct ftdi_private*) ;
 struct ftdi_sio_quirk* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct usb_serial_port*,struct ftdi_private*) ;
 int FUNC_11 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_12(struct usb_serial_port *VAR_2)
{
 struct ftdi_private *VAR_3;
 const struct ftdi_sio_quirk *VAR_4 = FUNC_9(VAR_2->serial);
 int VAR_5;

 VAR_3 = FUNC_5(sizeof(struct ftdi_private), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_6(&VAR_3->cfg_lock);

 if (VAR_4 && VAR_4->port_probe)
  VAR_4->port_probe(VAR_3);

 FUNC_10(VAR_2, VAR_3);

 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
 if (FUNC_7(VAR_2) < 0)
  VAR_3->latency = 16;
 FUNC_11(VAR_2);
 FUNC_0(VAR_2);

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_2->serial->interface->dev,
   "GPIO initialisation failed: %d\n",
   VAR_5);
 }

 return 0;
}
