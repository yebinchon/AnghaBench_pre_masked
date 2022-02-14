
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_port {int logical_port_id; } ;
struct ehea_adapter {struct ehea_port** port; } ;


 int VAR_0 ;

__attribute__((used)) static struct ehea_port *FUNC_0(struct ehea_adapter *VAR_1,
           int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1->port[VAR_3])
   if (VAR_1->port[VAR_3]->logical_port_id == VAR_2)
    return VAR_1->port[VAR_3];
 return ((void*)0);
}
