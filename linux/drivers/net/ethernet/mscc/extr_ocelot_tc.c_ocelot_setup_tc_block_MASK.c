
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_shared; } ;
struct ocelot_port {TYPE_1__ tc; int dev; } ;
struct flow_block_offload {int command; scalar_t__ binder_type; int block; int * driver_block_list; int block_shared; } ;
struct flow_block_cb {int driver_list; } ;
typedef int flow_setup_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int FUNC_0 (struct flow_block_cb*) ;
 int FUNC_1 (struct flow_block_cb*) ;
 int FUNC_2 (struct flow_block_cb*,struct flow_block_offload*) ;
 struct flow_block_cb* FUNC_3 (int *,struct ocelot_port*,struct ocelot_port*,int *) ;
 int FUNC_4 (struct flow_block_cb*) ;
 int FUNC_5 (int *,struct ocelot_port*,int *) ;
 struct flow_block_cb* FUNC_6 (int ,int *,struct ocelot_port*) ;
 int FUNC_7 (struct flow_block_cb*,struct flow_block_offload*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int,scalar_t__) ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_11 (struct ocelot_port*,struct flow_block_offload*) ;
 int FUNC_12 (struct ocelot_port*,struct flow_block_offload*) ;

__attribute__((used)) static int FUNC_13(struct ocelot_port *VAR_8,
     struct flow_block_offload *VAR_9)
{
 struct flow_block_cb *VAR_10;
 flow_setup_cb_t *VAR_11;
 int VAR_12;

 FUNC_10(VAR_8->dev, "tc_block command %d, binder_type %d\n",
     VAR_9->command, VAR_9->binder_type);

 if (VAR_9->binder_type == VAR_4) {
  VAR_11 = VAR_7;
  VAR_8->tc.block_shared = VAR_9->block_shared;
 } else if (VAR_9->binder_type == VAR_3) {
  VAR_11 = VAR_6;
 } else {
  return -VAR_2;
 }

 VAR_9->driver_block_list = &VAR_5;

 switch (VAR_9->command) {
 case 129:
  if (FUNC_5(VAR_11, VAR_8, &VAR_5))
   return -VAR_0;

  VAR_10 = FUNC_3(VAR_11, VAR_8, VAR_8, ((void*)0));
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);

  VAR_12 = FUNC_11(VAR_8, VAR_9);
  if (VAR_12 < 0) {
   FUNC_4(VAR_10);
   return VAR_12;
  }
  FUNC_2(VAR_10, VAR_9);
  FUNC_8(&VAR_10->driver_list, VAR_9->driver_block_list);
  return 0;
 case 128:
  VAR_10 = FUNC_6(VAR_9->block, VAR_11, VAR_8);
  if (!VAR_10)
   return -VAR_1;

  FUNC_12(VAR_8, VAR_9);
  FUNC_7(VAR_10, VAR_9);
  FUNC_9(&VAR_10->driver_list);
  return 0;
 default:
  return -VAR_2;
 }
}
