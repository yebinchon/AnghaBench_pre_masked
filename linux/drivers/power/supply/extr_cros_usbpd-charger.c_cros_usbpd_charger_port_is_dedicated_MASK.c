
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_data {scalar_t__ port_number; TYPE_1__* charger; } ;
struct TYPE_2__ {scalar_t__ num_usbpd_ports; } ;



__attribute__((used)) static bool FUNC_0(struct port_data *VAR_0)
{
 return VAR_0->port_number >= VAR_0->charger->num_usbpd_ports;
}
