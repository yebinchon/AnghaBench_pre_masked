
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_lag_upper_info {scalar_t__ tx_type; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp*,struct net_device*,int *) ;

__attribute__((used)) static bool
FUNC_2(struct mlxsw_sp *VAR_1,
     struct net_device *VAR_2,
     struct netdev_lag_upper_info *VAR_3,
     struct netlink_ext_ack *VAR_4)
{
 u16 VAR_5;

 if (FUNC_1(VAR_1, VAR_2, &VAR_5) != 0) {
  FUNC_0(VAR_4, "Exceeded number of supported LAG devices");
  return 0;
 }
 if (VAR_3->tx_type != VAR_0) {
  FUNC_0(VAR_4, "LAG device using unsupported Tx type");
  return 0;
 }
 return 1;
}
