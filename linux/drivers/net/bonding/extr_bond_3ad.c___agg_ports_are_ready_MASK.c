
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int sm_vars; struct port* next_port_in_aggregator; } ;
struct aggregator {struct port* lag_ports; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct aggregator *VAR_1)
{
 struct port *VAR_2;
 int VAR_3 = 1;

 if (VAR_1) {



  for (VAR_2 = VAR_1->lag_ports;
       VAR_2;
       VAR_2 = VAR_2->next_port_in_aggregator) {
   if (!(VAR_2->sm_vars & VAR_0)) {
    VAR_3 = 0;
    break;
   }
  }
 }

 return VAR_3;
}
