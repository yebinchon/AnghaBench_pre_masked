
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
struct usb_serial_port {char* port_number; struct usb_serial* serial; } ;
struct usb_serial {char* num_ports; int disc_mutex; TYPE_4__* dev; TYPE_2__* type; } ;
struct seq_file {int dummy; } ;
struct TYPE_7__ {int idProduct; int idVendor; } ;
struct TYPE_8__ {TYPE_3__ descriptor; } ;
struct TYPE_5__ {scalar_t__ owner; } ;
struct TYPE_6__ {char* description; TYPE_1__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,char) ;
 int FUNC_5 (struct seq_file*,char*) ;
 int FUNC_6 (TYPE_4__*,char*,int) ;
 struct usb_serial_port* FUNC_7 (int) ;
 int FUNC_8 (struct usb_serial*) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_1, void *VAR_2)
{
 struct usb_serial *VAR_3;
 struct usb_serial_port *VAR_4;
 int VAR_5;
 char VAR_6[40];

 FUNC_5(VAR_1, "usbserinfo:1.0 driver:2.0\n");
 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  VAR_4 = FUNC_7(VAR_5);
  if (VAR_4 == ((void*)0))
   continue;
  VAR_3 = VAR_4->serial;

  FUNC_3(VAR_1, "%d:", VAR_5);
  if (VAR_3->type->driver.owner)
   FUNC_3(VAR_1, " module:%s",
    FUNC_1(VAR_3->type->driver.owner));
  FUNC_3(VAR_1, " name:\"%s\"",
    VAR_3->type->description);
  FUNC_3(VAR_1, " vendor:%04x product:%04x",
   FUNC_0(VAR_3->dev->descriptor.idVendor),
   FUNC_0(VAR_3->dev->descriptor.idProduct));
  FUNC_3(VAR_1, " num_ports:%d", VAR_3->num_ports);
  FUNC_3(VAR_1, " port:%d", VAR_4->port_number);
  FUNC_6(VAR_3->dev, VAR_6, sizeof(VAR_6));
  FUNC_3(VAR_1, " path:%s", VAR_6);

  FUNC_4(VAR_1, '\n');
  FUNC_8(VAR_3);
  FUNC_2(&VAR_3->disc_mutex);
 }
 return 0;
}
