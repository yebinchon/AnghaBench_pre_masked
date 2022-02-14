
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attr; } ;
struct usbport_trig_port {struct usbport_trig_port* port_name; TYPE_2__ attr; int list; } ;
struct usbport_trig_data {struct led_classdev* led_cdev; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int kobj; } ;


 int FUNC_0 (struct usbport_trig_port*) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct usbport_trig_data *VAR_1,
         struct usbport_trig_port *VAR_2)
{
 struct led_classdev *VAR_3 = VAR_1->led_cdev;

 FUNC_1(&VAR_2->list);
 FUNC_2(&VAR_3->dev->kobj, &VAR_2->attr.attr,
         VAR_0.name);
 FUNC_0(VAR_2->port_name);
 FUNC_0(VAR_2);
}
