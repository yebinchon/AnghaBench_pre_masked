
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ice_netdev_priv {TYPE_1__* vsi; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {int port_info; } ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct ice_netdev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static u64 FUNC_4(struct net_device *VAR_0)
{
 struct ice_netdev_priv *VAR_1 = FUNC_3(VAR_0);
 enum ice_status VAR_2;
 bool VAR_3 = 0;

 FUNC_2(VAR_0, "link test\n");
 VAR_2 = FUNC_0(VAR_1->vsi->port_info, &VAR_3);
 if (VAR_2) {
  FUNC_1(VAR_0, "link query error, status = %d\n", VAR_2);
  return 1;
 }

 if (!VAR_3)
  return 2;

 return 0;
}
