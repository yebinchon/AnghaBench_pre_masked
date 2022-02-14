
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int vid; int added_by_user; } ;
struct mlxsw_sp_switchdev_event_work {scalar_t__ event; TYPE_2__ fdb_info; struct net_device* dev; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_device {TYPE_1__* ops; } ;
struct mlxsw_sp {int bridge; } ;
typedef int __be32 ;
struct TYPE_3__ {struct mlxsw_sp_fid* (* fid_lookup ) (struct mlxsw_sp_bridge_device*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mlxsw_sp_bridge_device* FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct mlxsw_sp_fid*) ;
 int FUNC_2 (struct mlxsw_sp_fid*,int *) ;
 struct mlxsw_sp* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_switchdev_event_work*,struct mlxsw_sp_fid*,int ) ;
 struct net_device* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 struct mlxsw_sp_fid* FUNC_8 (struct mlxsw_sp_bridge_device*,int ) ;

__attribute__((used)) static void
FUNC_9(struct mlxsw_sp_switchdev_event_work *
     VAR_2)
{
 struct mlxsw_sp_bridge_device *VAR_3;
 struct net_device *VAR_4 = VAR_2->dev;
 struct net_device *VAR_5;
 struct mlxsw_sp *VAR_6;
 struct mlxsw_sp_fid *VAR_7;
 __be32 VAR_8;
 int VAR_9;

 if (VAR_2->event != VAR_0 &&
     VAR_2->event != VAR_1)
  return;

 if (VAR_2->event == VAR_0 &&
     !VAR_2->fdb_info.added_by_user)
  return;

 if (!FUNC_7(VAR_4))
  return;
 VAR_5 = FUNC_5(VAR_4);
 if (!VAR_5)
  return;
 if (!FUNC_6(VAR_5))
  return;
 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6)
  return;
 VAR_3 = FUNC_0(VAR_6->bridge, VAR_5);
 if (!VAR_3)
  return;

 VAR_7 = VAR_3->ops->fid_lookup(VAR_3,
          VAR_2->fdb_info.vid);
 if (!VAR_7)
  return;

 VAR_9 = FUNC_2(VAR_7, &VAR_8);
 if (VAR_9)
  goto out;

 FUNC_4(VAR_6, VAR_2, VAR_7,
        VAR_8);

out:
 FUNC_1(VAR_7);
}
