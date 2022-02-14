
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct mlx5_esw_flow_attr {int dummy; } ;
struct TYPE_2__ {int prio; int proto; int vid; } ;
struct flow_action_entry {TYPE_1__ vlan; int id; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mlx5e_priv*,struct flow_action_entry*,struct mlx5_esw_flow_attr*,int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct mlx5e_priv *VAR_1,
    struct mlx5_esw_flow_attr *VAR_2,
    struct net_device **VAR_3,
    u32 *VAR_4)
{
 struct net_device *VAR_5 = *VAR_3;
 struct flow_action_entry VAR_6 = {
  .id = VAR_0,
  .vlan.vid = FUNC_5(VAR_5),
  .vlan.proto = FUNC_6(VAR_5),
  .vlan.prio = 0,
 };
 int VAR_7;

 VAR_7 = FUNC_4(VAR_1, &VAR_6, VAR_2, VAR_4);
 if (VAR_7)
  return VAR_7;

 *VAR_3 = FUNC_0(FUNC_2(VAR_5),
     FUNC_1(VAR_5));
 if (FUNC_3(*VAR_3))
  VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_7;
}
