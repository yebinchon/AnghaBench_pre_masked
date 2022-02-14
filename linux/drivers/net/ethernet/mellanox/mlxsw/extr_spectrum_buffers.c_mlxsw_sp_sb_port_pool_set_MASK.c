
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_port {scalar_t__ local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;
struct mlxsw_core_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct mlxsw_sp_port* FUNC_1 (struct mlxsw_core_port*) ;
 int FUNC_2 (struct mlxsw_sp*,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (struct mlxsw_sp*,int ,int ,int *,struct netlink_ext_ack*) ;

int FUNC_4(struct mlxsw_core_port *VAR_2,
         unsigned int VAR_3, u16 VAR_4,
         u32 VAR_5, struct netlink_ext_ack *VAR_6)
{
 struct mlxsw_sp_port *VAR_7 =
   FUNC_1(VAR_2);
 struct mlxsw_sp *VAR_8 = VAR_7->mlxsw_sp;
 u8 VAR_9 = VAR_7->local_port;
 u32 VAR_10;
 int VAR_11;

 if (VAR_9 == VAR_1) {
  FUNC_0(VAR_6, "Changing CPU port's threshold is forbidden");
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_8, VAR_4,
           VAR_5, &VAR_10, VAR_6);
 if (VAR_11)
  return VAR_11;

 return FUNC_2(VAR_8, VAR_9, VAR_4,
        0, VAR_10);
}
