
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esw_mc_addr {scalar_t__ uplink_rule; } ;
struct mlx5_eswitch {struct esw_mc_addr mc_promisc; } ;


 int FUNC_0 (struct mlx5_eswitch*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mlx5_eswitch*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_eswitch *VAR_0)
{
 struct esw_mc_addr *VAR_1;

 FUNC_2(VAR_0);

 VAR_1 = &VAR_0->mc_promisc;
 if (VAR_1->uplink_rule)
  FUNC_1(VAR_1->uplink_rule);

 FUNC_0(VAR_0);
}
