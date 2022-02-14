
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocelot_port_block {TYPE_2__* port; } ;
struct ocelot_ace_rule {int dummy; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_3__ {int offload_cnt; } ;
struct TYPE_4__ {TYPE_1__ tc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocelot_ace_rule*) ;
 struct ocelot_ace_rule* FUNC_1 (struct flow_cls_offload*,struct ocelot_port_block*) ;
 int FUNC_2 (struct ocelot_ace_rule*) ;
 int FUNC_3 (struct flow_cls_offload*,struct ocelot_ace_rule*) ;

__attribute__((used)) static int FUNC_4(struct flow_cls_offload *VAR_1,
     struct ocelot_port_block *VAR_2)
{
 struct ocelot_ace_rule *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_3);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_2->port->tc.offload_cnt++;
 return 0;
}
