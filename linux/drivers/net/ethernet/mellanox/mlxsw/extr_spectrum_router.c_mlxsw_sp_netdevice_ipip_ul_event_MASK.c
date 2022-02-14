
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_notifier_info {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_entry {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*,struct net_device*,unsigned long,struct netdev_notifier_info*) ;
 int FUNC_1 (struct mlxsw_sp*,struct net_device*) ;
 struct mlxsw_sp_ipip_entry* FUNC_2 (struct mlxsw_sp*,struct net_device*,struct mlxsw_sp_ipip_entry*) ;

int
FUNC_3(struct mlxsw_sp *VAR_0,
     struct net_device *VAR_1,
     unsigned long VAR_2,
     struct netdev_notifier_info *VAR_3)
{
 struct mlxsw_sp_ipip_entry *VAR_4 = ((void*)0);
 int VAR_5;

 while ((VAR_4 = FUNC_2(VAR_0,
        VAR_1,
        VAR_4))) {
  VAR_5 = FUNC_0(VAR_0, VAR_4,
        VAR_1, VAR_2, VAR_3);
  if (VAR_5) {
   FUNC_1(VAR_0,
         VAR_1);
   return VAR_5;
  }
 }

 return 0;
}
