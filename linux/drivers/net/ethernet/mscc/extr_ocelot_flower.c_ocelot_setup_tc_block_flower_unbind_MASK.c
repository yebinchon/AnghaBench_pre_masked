
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int dummy; } ;
struct flow_block_offload {int block; } ;
struct flow_block_cb {int driver_list; } ;


 int FUNC_0 (struct flow_block_cb*) ;
 struct flow_block_cb* FUNC_1 (int ,int ,struct ocelot_port*) ;
 int FUNC_2 (struct flow_block_cb*,struct flow_block_offload*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct ocelot_port *VAR_1,
      struct flow_block_offload *VAR_2)
{
 struct flow_block_cb *VAR_3;

 VAR_3 = FUNC_1(VAR_2->block,
     VAR_0, VAR_1);
 if (!VAR_3)
  return;

 if (!FUNC_0(VAR_3)) {
  FUNC_2(VAR_3, VAR_2);
  FUNC_3(&VAR_3->driver_list);
 }
}
