
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mlxsw_sp_vr* FUNC_1 (struct mlxsw_sp*,int ,struct netlink_ext_ack*) ;
 struct mlxsw_sp_vr* FUNC_2 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static struct mlxsw_sp_vr *FUNC_3(struct mlxsw_sp *VAR_0, u32 VAR_1,
        struct netlink_ext_ack *VAR_2)
{
 struct mlxsw_sp_vr *VAR_3;

 VAR_1 = FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_3;
}
