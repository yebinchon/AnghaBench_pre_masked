
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_notifier_fdb_info {char const* addr; int info; scalar_t__ vid; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dev; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int ,struct net_device*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp_rif *VAR_1, const char *VAR_2)
{
 struct switchdev_notifier_fdb_info VAR_3;
 struct net_device *VAR_4;

 VAR_4 = FUNC_0(VAR_1->dev, VAR_2, 0);
 if (!VAR_4)
  return;

 VAR_3.addr = VAR_2;
 VAR_3.vid = 0;
 FUNC_1(VAR_0, VAR_4, &VAR_3.info,
     ((void*)0));
}
