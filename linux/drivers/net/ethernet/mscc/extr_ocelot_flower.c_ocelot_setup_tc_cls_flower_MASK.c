
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port_block {int dummy; } ;
struct flow_cls_offload {int command; } ;


 int VAR_0 ;



 int FUNC_0 (struct flow_cls_offload*,struct ocelot_port_block*) ;
 int FUNC_1 (struct flow_cls_offload*,struct ocelot_port_block*) ;
 int FUNC_2 (struct flow_cls_offload*,struct ocelot_port_block*) ;

__attribute__((used)) static int FUNC_3(struct flow_cls_offload *VAR_1,
          struct ocelot_port_block *VAR_2)
{
 switch (VAR_1->command) {
 case 129:
  return FUNC_1(VAR_1, VAR_2);
 case 130:
  return FUNC_0(VAR_1, VAR_2);
 case 128:
  return FUNC_2(VAR_1, VAR_2);
 default:
  return -VAR_0;
 }
}
