
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehea_port {int num_def_qps; TYPE_1__* port_res; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ehea_port *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_def_qps; VAR_1++)
  FUNC_0(&VAR_0->port_res[VAR_1].napi);
}
