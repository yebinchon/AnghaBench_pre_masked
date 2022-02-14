
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dev; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_lag_upper_info {int tx_type; int hash_type; } ;
struct bonding {int dev; } ;
typedef enum netdev_lag_tx_type { ____Placeholder_netdev_lag_tx_type } netdev_lag_tx_type ;


 int FUNC_0 (struct bonding*,int) ;
 int FUNC_1 (struct bonding*) ;
 int FUNC_2 (int ,int ,struct slave*,struct netdev_lag_upper_info*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_3(struct bonding *VAR_0, struct slave *VAR_1,
          struct netlink_ext_ack *VAR_2)
{
 struct netdev_lag_upper_info VAR_3;
 enum netdev_lag_tx_type VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 VAR_3.tx_type = VAR_4;
 VAR_3.hash_type = FUNC_0(VAR_0, VAR_4);

 return FUNC_2(VAR_1->dev, VAR_0->dev, VAR_1,
         &VAR_3, VAR_2);
}
