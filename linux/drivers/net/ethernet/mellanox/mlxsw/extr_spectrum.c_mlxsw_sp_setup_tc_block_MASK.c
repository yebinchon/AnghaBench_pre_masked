
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int dummy; } ;
struct flow_block_offload {scalar_t__ binder_type; int command; int block; int * driver_block_list; } ;
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
 struct flow_block_cb* FUNC_3 (int *,struct mlxsw_sp_port*,struct mlxsw_sp_port*,int *) ;
 int FUNC_4 (struct flow_block_cb*) ;
 int FUNC_5 (int *,struct mlxsw_sp_port*,int *) ;
 struct flow_block_cb* FUNC_6 (int ,int *,struct mlxsw_sp_port*) ;
 int FUNC_7 (struct flow_block_cb*,struct flow_block_offload*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_10 (struct mlxsw_sp_port*,struct flow_block_offload*,int) ;
 int FUNC_11 (struct mlxsw_sp_port*,struct flow_block_offload*,int) ;

__attribute__((used)) static int FUNC_12(struct mlxsw_sp_port *VAR_8,
       struct flow_block_offload *VAR_9)
{
 struct flow_block_cb *VAR_10;
 flow_setup_cb_t *VAR_11;
 bool VAR_12;
 int VAR_13;

 if (VAR_9->binder_type == VAR_4) {
  VAR_11 = VAR_7;
  VAR_12 = 1;
 } else if (VAR_9->binder_type == VAR_3) {
  VAR_11 = VAR_6;
  VAR_12 = 0;
 } else {
  return -VAR_2;
 }

 VAR_9->driver_block_list = &VAR_5;

 switch (VAR_9->command) {
 case 129:
  if (FUNC_5(VAR_11, VAR_8,
       &VAR_5))
   return -VAR_0;

  VAR_10 = FUNC_3(VAR_11, VAR_8,
            VAR_8, ((void*)0));
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);
  VAR_13 = FUNC_10(VAR_8, VAR_9,
         VAR_12);
  if (VAR_13) {
   FUNC_4(VAR_10);
   return VAR_13;
  }
  FUNC_2(VAR_10, VAR_9);
  FUNC_8(&VAR_10->driver_list, &VAR_5);
  return 0;
 case 128:
  FUNC_11(VAR_8,
            VAR_9, VAR_12);
  VAR_10 = FUNC_6(VAR_9->block, VAR_11, VAR_8);
  if (!VAR_10)
   return -VAR_1;

  FUNC_7(VAR_10, VAR_9);
  FUNC_9(&VAR_10->driver_list);
  return 0;
 default:
  return -VAR_2;
 }
}
