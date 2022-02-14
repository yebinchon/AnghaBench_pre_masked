
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switchdev_notifier_fdb_info {char const* addr; int info; int vid; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_rif {struct net_device* dev; int fid; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net_device*,char const*,int ) ;
 int FUNC_1 (int ,struct net_device*,int *,int *) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct net_device* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp_rif *VAR_1, const char *VAR_2)
{
 u16 VAR_3 = FUNC_3(VAR_1->fid);
 struct switchdev_notifier_fdb_info VAR_4;
 struct net_device *VAR_5;
 struct net_device *VAR_6;

 VAR_5 = FUNC_2(VAR_1->dev) ? FUNC_4(VAR_1->dev) : VAR_1->dev;
 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
 if (!VAR_6)
  return;

 VAR_4.addr = VAR_2;
 VAR_4.vid = VAR_3;
 FUNC_1(VAR_0, VAR_6, &VAR_4.info,
     ((void*)0));
}
