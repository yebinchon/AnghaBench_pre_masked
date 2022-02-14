
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_port_number; } ;
struct tb_switch {int * ports; TYPE_1__ config; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tb_switch *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 1; VAR_1 <= VAR_0->config.max_port_number; VAR_1++)
  FUNC_0(&VAR_0->ports[VAR_1]);
}
