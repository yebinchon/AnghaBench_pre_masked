
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int mode; struct usbport_trig_port* name; } ;
struct TYPE_7__ {TYPE_3__ attr; int store; int show; } ;
struct usbport_trig_port {int portnum; struct usbport_trig_port* port_name; int list; TYPE_2__ attr; int observed; struct usb_device* hub; struct usbport_trig_data* data; } ;
struct usbport_trig_data {int ports; struct led_classdev* led_cdev; } ;
struct usb_device {int dummy; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_6__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbport_trig_port*) ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int *) ;
 TYPE_5__ VAR_4 ;
 int FUNC_3 (struct usbport_trig_port*,size_t,char*,char const*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct usbport_trig_data*,struct usb_device*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct usbport_trig_data *VAR_7,
     struct usb_device *VAR_8,
     const char *VAR_9, int VAR_10)
{
 struct led_classdev *VAR_11 = VAR_7->led_cdev;
 struct usbport_trig_port *VAR_12;
 size_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_1);
 if (!VAR_12) {
  VAR_14 = -VAR_0;
  goto err_out;
 }

 VAR_12->data = VAR_7;
 VAR_12->hub = VAR_8;
 VAR_12->portnum = VAR_10;
 VAR_12->observed = FUNC_7(VAR_7, VAR_8,
          VAR_10);

 VAR_13 = FUNC_4(VAR_9) + 8;
 VAR_12->port_name = FUNC_1(VAR_13, VAR_1);
 if (!VAR_12->port_name) {
  VAR_14 = -VAR_0;
  goto err_free_port;
 }
 FUNC_3(VAR_12->port_name, VAR_13, "%s-port%d", VAR_9, VAR_10);

 FUNC_6(&VAR_12->attr.attr);
 VAR_12->attr.attr.name = VAR_12->port_name;
 VAR_12->attr.attr.mode = VAR_2 | VAR_3;
 VAR_12->attr.show = VAR_5;
 VAR_12->attr.store = VAR_6;

 VAR_14 = FUNC_5(&VAR_11->dev->kobj, &VAR_12->attr.attr,
          VAR_4.name);
 if (VAR_14)
  goto err_free_port_name;

 FUNC_2(&VAR_12->list, &VAR_7->ports);

 return 0;

err_free_port_name:
 FUNC_0(VAR_12->port_name);
err_free_port:
 FUNC_0(VAR_12);
err_out:
 return VAR_14;
}
