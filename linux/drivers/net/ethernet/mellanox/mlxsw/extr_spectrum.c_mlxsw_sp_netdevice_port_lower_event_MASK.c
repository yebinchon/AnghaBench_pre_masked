
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_notifier_changelowerstate_info {int lower_state_info; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {int lagged; } ;



 int FUNC_0 (struct mlxsw_sp_port*,int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct mlxsw_sp_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
            unsigned long VAR_1, void *VAR_2)
{
 struct netdev_notifier_changelowerstate_info *VAR_3;
 struct mlxsw_sp_port *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 VAR_3 = VAR_2;

 switch (VAR_1) {
 case 128:
  if (FUNC_3(VAR_0) && VAR_4->lagged) {
   VAR_5 = FUNC_0(VAR_4,
       VAR_3->lower_state_info);
   if (VAR_5)
    FUNC_1(VAR_0, "Failed to reflect link aggregation lower state change\n");
  }
  break;
 }

 return 0;
}
