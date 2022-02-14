
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; int flags; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp_fid*) ;
 struct mlxsw_sp_fid* FUNC_1 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_2 (struct mlxsw_sp*,struct net_device const*) ;
 int FUNC_3 (struct net_device const*,char*) ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp *VAR_2,
    const struct net_device *VAR_3,
    const struct switchdev_obj_port_vlan *VAR_4)
{
 struct mlxsw_sp_rif *VAR_5;
 struct mlxsw_sp_fid *VAR_6;
 u16 VAR_7;
 u16 VAR_8;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5)
  return 0;
 VAR_6 = FUNC_1(VAR_5);
 VAR_7 = FUNC_0(VAR_6);

 for (VAR_8 = VAR_4->vid_begin; VAR_8 <= VAR_4->vid_end; ++VAR_8) {
  if (VAR_4->flags & VAR_0) {
   if (VAR_8 != VAR_7) {
    FUNC_3(VAR_3, "Can't change PVID, it's used by router interface\n");
    return -VAR_1;
   }
  } else {
   if (VAR_8 == VAR_7) {
    FUNC_3(VAR_3, "Can't remove PVID, it's used by router interface\n");
    return -VAR_1;
   }
  }
 }

 return 0;
}
