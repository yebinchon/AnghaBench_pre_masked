
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dev_addr; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
struct in6_validator_info {int extack; TYPE_1__* i6vi_dev; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int FUNC_0 (struct mlxsw_sp*,struct net_device*,unsigned long,int ) ;
 struct mlxsw_sp* FUNC_1 (struct net_device*) ;
 struct mlxsw_sp_rif* FUNC_2 (struct mlxsw_sp*,struct net_device*) ;
 int FUNC_3 (struct mlxsw_sp_rif*,struct net_device*,unsigned long) ;
 int FUNC_4 (struct mlxsw_sp*,struct net_device*,int ,int ) ;
 int FUNC_5 (int) ;

int FUNC_6(struct notifier_block *VAR_0,
       unsigned long VAR_1, void *VAR_2)
{
 struct in6_validator_info *VAR_3 = (struct in6_validator_info *) VAR_2;
 struct net_device *VAR_4 = VAR_3->i6vi_dev->dev;
 struct mlxsw_sp *VAR_5;
 struct mlxsw_sp_rif *VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (!FUNC_3(VAR_6, VAR_4, VAR_1))
  goto out;

 VAR_7 = FUNC_4(VAR_5, VAR_4, VAR_4->dev_addr,
        VAR_3->extack);
 if (VAR_7)
  goto out;

 VAR_7 = FUNC_0(VAR_5, VAR_4, VAR_1, VAR_3->extack);
out:
 return FUNC_5(VAR_7);
}
