
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {scalar_t__ is_enabled; struct port* next_port_in_aggregator; } ;
struct aggregator {struct port* lag_ports; } ;



__attribute__((used)) static int FUNC_0(struct aggregator *VAR_0)
{
 struct port *VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = VAR_0->lag_ports; VAR_1;
      VAR_1 = VAR_1->next_port_in_aggregator) {
  if (VAR_1->is_enabled)
   VAR_2++;
 }

 return VAR_2;
}
