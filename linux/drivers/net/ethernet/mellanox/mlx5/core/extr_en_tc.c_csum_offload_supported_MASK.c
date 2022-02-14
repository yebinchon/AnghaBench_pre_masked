
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlx5e_priv {int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static bool FUNC_2(struct mlx5e_priv *VAR_4,
       u32 VAR_5,
       u32 VAR_6,
       struct netlink_ext_ack *VAR_7)
{
 u32 VAR_8 = VAR_1 | VAR_2 |
    VAR_3;


 if (!(VAR_5 & VAR_0)) {
  FUNC_0(VAR_7,
       "TC csum action is only offloaded with pedit");
  FUNC_1(VAR_4->netdev,
       "TC csum action is only offloaded with pedit\n");
  return 0;
 }

 if (VAR_6 & ~VAR_8) {
  FUNC_0(VAR_7,
       "can't offload TC csum action for some header/s");
  FUNC_1(VAR_4->netdev,
       "can't offload TC csum action for some header/s - flags %#x\n",
       VAR_6);
  return 0;
 }

 return 1;
}
