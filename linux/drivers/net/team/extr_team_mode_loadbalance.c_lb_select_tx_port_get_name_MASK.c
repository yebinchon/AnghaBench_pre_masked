
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lb_select_tx_port {char* name; int * func; } ;
typedef int lb_select_tx_port_func_t ;


 int VAR_0 ;
 struct lb_select_tx_port* VAR_1 ;

__attribute__((used)) static char *FUNC_0(lb_select_tx_port_func_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  const struct lb_select_tx_port *VAR_4;

  VAR_4 = &VAR_1[VAR_3];
  if (VAR_4->func == VAR_2)
   return VAR_4->name;
 }
 return ((void*)0);
}
