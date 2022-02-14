
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port_block {int dummy; } ;
struct ocelot_port {int dummy; } ;
struct flow_block_offload {scalar_t__ binder_type; int driver_block_list; int block; } ;
struct flow_block_cb {int driver_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct flow_block_cb*) ;
 int FUNC_1 (struct flow_block_cb*) ;
 int FUNC_2 (struct flow_block_cb*,struct flow_block_offload*) ;
 struct flow_block_cb* FUNC_3 (int ,struct ocelot_port*,struct ocelot_port_block*,int ) ;
 int FUNC_4 (struct flow_block_cb*) ;
 struct flow_block_cb* FUNC_5 (int ,int ,struct ocelot_port*) ;
 struct ocelot_port_block* FUNC_6 (struct flow_block_cb*) ;
 int FUNC_7 (int *,int ) ;
 struct ocelot_port_block* FUNC_8 (struct ocelot_port*) ;
 int FUNC_9 (struct ocelot_port_block*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_10(struct ocelot_port *VAR_5,
          struct flow_block_offload *VAR_6)
{
 struct ocelot_port_block *VAR_7;
 struct flow_block_cb *VAR_8;
 int VAR_9;

 if (VAR_6->binder_type == VAR_2)
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_6->block,
     VAR_3, VAR_5);
 if (!VAR_8) {
  VAR_7 = FUNC_8(VAR_5);
  if (!VAR_7)
   return -VAR_0;

  VAR_8 = FUNC_3(VAR_3,
            VAR_5, VAR_7,
            VAR_4);
  if (FUNC_0(VAR_8)) {
   VAR_9 = FUNC_1(VAR_8);
   goto err_cb_register;
  }
  FUNC_2(VAR_8, VAR_6);
  FUNC_7(&VAR_8->driver_list, VAR_6->driver_block_list);
 } else {
  VAR_7 = FUNC_6(VAR_8);
 }

 FUNC_4(VAR_8);
 return 0;

err_cb_register:
 FUNC_9(VAR_7);

 return VAR_9;
}
