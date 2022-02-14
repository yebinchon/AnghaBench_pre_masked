
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int sm_vars; struct port* next_port_in_aggregator; } ;
struct aggregator {struct port* lag_ports; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct aggregator *VAR_1, int VAR_2)
{
 struct port *VAR_3;

 for (VAR_3 = VAR_1->lag_ports; VAR_3;
      VAR_3 = VAR_3->next_port_in_aggregator) {
  if (VAR_2)
   VAR_3->sm_vars |= VAR_0;
  else
   VAR_3->sm_vars &= ~VAR_0;
 }
}
