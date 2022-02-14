
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_acl_rule_info {int act_block; } ;
struct mlxsw_sp {TYPE_1__* bus_info; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int,int,int,struct netlink_ext_ack*) ;

int FUNC_3(struct mlxsw_sp *VAR_2,
    struct mlxsw_sp_acl_rule_info *VAR_3,
    u32 VAR_4, u16 VAR_5, u16 VAR_6, u8 VAR_7,
    struct netlink_ext_ack *VAR_8)
{
 u8 VAR_9;

 if (VAR_4 == VAR_1) {
  switch (VAR_6) {
  case 128:
   VAR_9 = 0;
   break;
  case 129:
   VAR_9 = 1;
   break;
  default:
   FUNC_0(VAR_8, "Unsupported VLAN protocol");
   FUNC_1(VAR_2->bus_info->dev, "Unsupported VLAN protocol %#04x\n",
    VAR_6);
   return -VAR_0;
  }

  return FUNC_2(VAR_3->act_block,
         VAR_5, VAR_7, VAR_9,
         VAR_8);
 } else {
  FUNC_0(VAR_8, "Unsupported VLAN action");
  FUNC_1(VAR_2->bus_info->dev, "Unsupported VLAN action\n");
  return -VAR_0;
 }
}
