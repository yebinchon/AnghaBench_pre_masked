
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocelot_port_block {TYPE_1__* port; } ;
struct ocelot_ace_rule {int chip_port; TYPE_1__* port; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_2__ {int chip_port; } ;


 int VAR_0 ;
 struct ocelot_ace_rule* FUNC_0 (int,int ) ;

__attribute__((used)) static
struct ocelot_ace_rule *FUNC_1(struct flow_cls_offload *VAR_1,
            struct ocelot_port_block *VAR_2)
{
 struct ocelot_ace_rule *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->port = VAR_2->port;
 VAR_3->chip_port = VAR_2->port->chip_port;
 return VAR_3;
}
