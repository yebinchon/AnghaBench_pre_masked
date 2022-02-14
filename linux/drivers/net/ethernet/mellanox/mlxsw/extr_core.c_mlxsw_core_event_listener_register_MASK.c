
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_rx_listener {int trap_id; int local_port; int func; } ;
struct mlxsw_event_listener {int trap_id; } ;
struct mlxsw_event_listener_item {int list; void* priv; struct mlxsw_event_listener el; } ;
struct mlxsw_core {int event_listener_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlxsw_event_listener_item* FUNC_0 (struct mlxsw_core*,struct mlxsw_event_listener const*,void*) ;
 int FUNC_1 (struct mlxsw_event_listener_item*) ;
 struct mlxsw_event_listener_item* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (struct mlxsw_core*,struct mlxsw_rx_listener const*,struct mlxsw_event_listener_item*) ;

int FUNC_5(struct mlxsw_core *VAR_5,
           const struct mlxsw_event_listener *VAR_6,
           void *VAR_7)
{
 int VAR_8;
 struct mlxsw_event_listener_item *VAR_9;
 const struct mlxsw_rx_listener VAR_10 = {
  .func = VAR_4,
  .local_port = VAR_3,
  .trap_id = VAR_6->trap_id,
 };

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  return -VAR_0;
 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->el = *VAR_6;
 VAR_9->priv = VAR_7;

 VAR_8 = FUNC_4(VAR_5, &VAR_10, VAR_9);
 if (VAR_8)
  goto err_rx_listener_register;




 FUNC_3(&VAR_9->list, &VAR_5->event_listener_list);

 return 0;

err_rx_listener_register:
 FUNC_1(VAR_9);
 return VAR_8;
}
