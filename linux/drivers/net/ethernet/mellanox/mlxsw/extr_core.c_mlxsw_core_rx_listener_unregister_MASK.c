
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_rx_listener_item {int list; } ;
struct mlxsw_rx_listener {int dummy; } ;
struct mlxsw_core {int dummy; } ;


 struct mlxsw_rx_listener_item* FUNC_0 (struct mlxsw_core*,struct mlxsw_rx_listener const*,void*) ;
 int FUNC_1 (struct mlxsw_rx_listener_item*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void FUNC_4(struct mlxsw_core *VAR_0,
           const struct mlxsw_rx_listener *VAR_1,
           void *VAR_2)
{
 struct mlxsw_rx_listener_item *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return;
 FUNC_2(&VAR_3->list);
 FUNC_3();
 FUNC_1(VAR_3);
}
