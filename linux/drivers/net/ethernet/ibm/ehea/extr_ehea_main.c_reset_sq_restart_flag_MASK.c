
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_port_res {scalar_t__ sq_restart_flag; } ;
struct ehea_port {int num_def_qps; int restart_wq; struct ehea_port_res* port_res; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ehea_port *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_def_qps; VAR_1++) {
  struct ehea_port_res *VAR_2 = &VAR_0->port_res[VAR_1];
  VAR_2->sq_restart_flag = 0;
 }
 FUNC_0(&VAR_0->restart_wq);
}
