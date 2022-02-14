
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_rx_listener {int trap_id; int local_port; int func; } ;
struct mlxsw_event_listener_item {int list; } ;
struct mlxsw_event_listener {int trap_id; } ;
struct mlxsw_core {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_event_listener_item* FUNC_0 (struct mlxsw_core*,struct mlxsw_event_listener const*,void*) ;
 int FUNC_1 (struct mlxsw_event_listener_item*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct mlxsw_core*,struct mlxsw_rx_listener const*,struct mlxsw_event_listener_item*) ;

void FUNC_4(struct mlxsw_core *VAR_2,
       const struct mlxsw_event_listener *VAR_3,
       void *VAR_4)
{
 struct mlxsw_event_listener_item *VAR_5;
 const struct mlxsw_rx_listener VAR_6 = {
  .func = VAR_1,
  .local_port = VAR_0,
  .trap_id = VAR_3->trap_id,
 };

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return;
 FUNC_3(VAR_2, &VAR_6, VAR_5);
 FUNC_2(&VAR_5->list);
 FUNC_1(VAR_5);
}
