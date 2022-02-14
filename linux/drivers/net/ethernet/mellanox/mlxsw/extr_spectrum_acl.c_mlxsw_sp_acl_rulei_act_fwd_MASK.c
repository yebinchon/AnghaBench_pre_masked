
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {scalar_t__ local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_acl_rule_info {int act_block; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ,scalar_t__,int,struct netlink_ext_ack*) ;
 int FUNC_2 (struct net_device*) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;

int FUNC_4(struct mlxsw_sp *VAR_1,
          struct mlxsw_sp_acl_rule_info *VAR_2,
          struct net_device *VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct mlxsw_sp_port *VAR_5;
 u8 VAR_6;
 bool VAR_7;

 if (VAR_3) {
  if (!FUNC_2(VAR_3)) {
   FUNC_0(VAR_4, "Invalid output device");
   return -VAR_0;
  }
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5->mlxsw_sp != VAR_1) {
   FUNC_0(VAR_4, "Invalid output device");
   return -VAR_0;
  }
  VAR_6 = VAR_5->local_port;
  VAR_7 = 0;
 } else {



  VAR_6 = 0;
  VAR_7 = 1;
 }
 return FUNC_1(VAR_2->act_block,
       VAR_6, VAR_7, VAR_4);
}
