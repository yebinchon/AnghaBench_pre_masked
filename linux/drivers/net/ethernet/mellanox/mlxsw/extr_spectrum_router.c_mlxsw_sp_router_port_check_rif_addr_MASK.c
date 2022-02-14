
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dev_addr; } ;
struct mlxsw_sp_rif {struct net_device* dev; } ;
struct mlxsw_sp {int mac_mask; TYPE_1__* router; int core; } ;
struct TYPE_2__ {struct mlxsw_sp_rif** rifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (int ,unsigned char const*,int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_2,
            struct net_device *VAR_3,
            const unsigned char *VAR_4,
            struct netlink_ext_ack *VAR_5)
{
 struct mlxsw_sp_rif *VAR_6;
 int VAR_7;




 if (FUNC_4(VAR_3) || FUNC_3(VAR_3))
  return 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2->core, VAR_1); VAR_7++) {
  VAR_6 = VAR_2->router->rifs[VAR_7];
  if (VAR_6 && VAR_6->dev && VAR_6->dev != VAR_3 &&
      !FUNC_2(VAR_6->dev->dev_addr, VAR_4,
          VAR_2->mac_mask)) {
   FUNC_1(VAR_5, "All router interface MAC addresses must have the same prefix");
   return -VAR_0;
  }
 }

 return 0;
}
