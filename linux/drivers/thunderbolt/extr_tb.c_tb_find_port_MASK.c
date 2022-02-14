
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_port_number; } ;
struct tb_switch {struct tb_port* ports; TYPE_1__ config; } ;
struct TYPE_4__ {int type; } ;
struct tb_port {TYPE_2__ config; } ;
typedef enum tb_port_type { ____Placeholder_tb_port_type } tb_port_type ;



__attribute__((used)) static struct tb_port *FUNC_0(struct tb_switch *VAR_0,
        enum tb_port_type VAR_1)
{
 int VAR_2;
 for (VAR_2 = 1; VAR_2 <= VAR_0->config.max_port_number; VAR_2++)
  if (VAR_0->ports[VAR_2].config.type == VAR_1)
   return &VAR_0->ports[VAR_2];
 return ((void*)0);
}
