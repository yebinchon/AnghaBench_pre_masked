
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_rx_listener {int dummy; } ;
struct mlxsw_rx_listener_item {int list; void* priv; struct mlxsw_rx_listener rxl; } ;
struct mlxsw_core {int rx_listener_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mlxsw_rx_listener_item* FUNC_0 (struct mlxsw_core*,struct mlxsw_rx_listener const*,void*) ;
 struct mlxsw_rx_listener_item* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

int FUNC_3(struct mlxsw_core *VAR_3,
        const struct mlxsw_rx_listener *VAR_4,
        void *VAR_5)
{
 struct mlxsw_rx_listener_item *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return -VAR_0;
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_6->rxl = *VAR_4;
 VAR_6->priv = VAR_5;

 FUNC_2(&VAR_6->list, &VAR_3->rx_listener_list);
 return 0;
}
