
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct icom_port {int port; void* status; void* imbed_modem; } ;
struct icom_adapter {scalar_t__ subsystem_id; scalar_t__ version; int numb_ports; struct icom_port* port_info; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_0(struct icom_adapter *VAR_8)
{
 u32 VAR_9 = VAR_8->subsystem_id;
 int VAR_10;
 struct icom_port *VAR_11;

 if (VAR_8->version == VAR_0) {
  VAR_8->numb_ports = 2;

  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_11 = &VAR_8->port_info[VAR_10];
   VAR_11->port = VAR_10;
   VAR_11->status = VAR_2;
   VAR_11->imbed_modem = VAR_5;
  }
 } else {
  if (VAR_9 == VAR_6) {
   VAR_8->numb_ports = 4;

   for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
    VAR_11 = &VAR_8->port_info[VAR_10];

    VAR_11->port = VAR_10;
    VAR_11->status = VAR_2;
    VAR_11->imbed_modem = VAR_1;
   }
  } else {
   VAR_8->numb_ports = 4;

   VAR_8->port_info[0].port = 0;
   VAR_8->port_info[0].status = VAR_2;

   if (VAR_9 ==
       VAR_7) {
    VAR_8->port_info[0].imbed_modem = VAR_1;
   } else {
    VAR_8->port_info[0].imbed_modem = VAR_4;
   }

   VAR_8->port_info[1].status = VAR_3;

   VAR_8->port_info[2].port = 2;
   VAR_8->port_info[2].status = VAR_2;
   VAR_8->port_info[2].imbed_modem = VAR_4;
   VAR_8->port_info[3].status = VAR_3;
  }
 }

 return 0;
}
