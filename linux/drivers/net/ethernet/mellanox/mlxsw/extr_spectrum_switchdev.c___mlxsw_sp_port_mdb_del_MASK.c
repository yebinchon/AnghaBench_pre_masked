
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct net_device* dev; } ;
struct mlxsw_sp_mid {int mid; } ;
struct mlxsw_sp_bridge_port {int mrouter; TYPE_1__* bridge_device; } ;
struct TYPE_2__ {scalar_t__ multicast_enabled; } ;


 int FUNC_0 (struct mlxsw_sp_port*,struct mlxsw_sp_mid*) ;
 int FUNC_1 (struct mlxsw_sp_port*,int ,int) ;
 int FUNC_2 (struct net_device*,char*) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_port *VAR_0,
   struct mlxsw_sp_bridge_port *VAR_1,
   struct mlxsw_sp_mid *VAR_2)
{
 struct net_device *VAR_3 = VAR_0->dev;
 int VAR_4;

 if (VAR_1->bridge_device->multicast_enabled &&
     !VAR_1->mrouter) {
  VAR_4 = FUNC_1(VAR_0, VAR_2->mid, 0);
  if (VAR_4)
   FUNC_2(VAR_3, "Unable to remove port from SMID\n");
 }

 VAR_4 = FUNC_0(VAR_0, VAR_2);
 if (VAR_4)
  FUNC_2(VAR_3, "Unable to remove MC SFD\n");

 return VAR_4;
}
