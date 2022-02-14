
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {int local_port; int lag_id; scalar_t__ lagged; } ;
struct mlxsw_sp_bridge_port {int flags; int ref_count; int list; int vlans_list; int stp_state; struct mlxsw_sp_bridge_device* bridge_device; struct net_device* dev; int system_port; int lag_id; scalar_t__ lagged; } ;
struct mlxsw_sp_bridge_device {int ports_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct mlxsw_sp_bridge_port* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static struct mlxsw_sp_bridge_port *
FUNC_4(struct mlxsw_sp_bridge_device *VAR_6,
       struct net_device *VAR_7)
{
 struct mlxsw_sp_bridge_port *VAR_8;
 struct mlxsw_sp_port *VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_5);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_3(VAR_7);
 VAR_8->lagged = VAR_9->lagged;
 if (VAR_8->lagged)
  VAR_8->lag_id = VAR_9->lag_id;
 else
  VAR_8->system_port = VAR_9->local_port;
 VAR_8->dev = VAR_7;
 VAR_8->bridge_device = VAR_6;
 VAR_8->stp_state = VAR_4;
 VAR_8->flags = VAR_1 | VAR_0 | VAR_2 |
        VAR_3;
 FUNC_0(&VAR_8->vlans_list);
 FUNC_2(&VAR_8->list, &VAR_6->ports_list);
 VAR_8->ref_count = 1;

 return VAR_8;
}
