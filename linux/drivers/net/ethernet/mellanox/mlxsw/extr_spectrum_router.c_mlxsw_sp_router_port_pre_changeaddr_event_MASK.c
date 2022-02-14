
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct netdev_notifier_pre_changeaddr_info {int dev_addr; int info; } ;
struct mlxsw_sp_rif {int dev; int mlxsw_sp; } ;


 int FUNC_0 (int ,int ,int ,struct netlink_ext_ack*) ;
 struct netlink_ext_ack* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp_rif *VAR_0,
       struct netdev_notifier_pre_changeaddr_info *VAR_1)
{
 struct netlink_ext_ack *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->info);
 return FUNC_0(VAR_0->mlxsw_sp, VAR_0->dev,
         VAR_1->dev_addr, VAR_2);
}
