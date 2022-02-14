
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxsw_sp_port_vlan {int list; scalar_t__ vid; struct mlxsw_sp_port* mlxsw_sp_port; } ;
struct mlxsw_sp_port {int vlans_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_port_vlan* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mlxsw_sp_port_vlan* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 struct mlxsw_sp_port_vlan* FUNC_3 (struct mlxsw_sp_port*,scalar_t__) ;
 int FUNC_4 (struct mlxsw_sp_port*,scalar_t__,scalar_t__,int,int) ;

struct mlxsw_sp_port_vlan *
FUNC_5(struct mlxsw_sp_port *VAR_4, u16 VAR_5)
{
 struct mlxsw_sp_port_vlan *VAR_6;
 bool VAR_7 = VAR_5 == VAR_3;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_5, 1, VAR_7);
 if (VAR_8)
  return FUNC_0(VAR_8);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto err_port_vlan_alloc;
 }

 VAR_6->mlxsw_sp_port = VAR_4;
 VAR_6->vid = VAR_5;
 FUNC_2(&VAR_6->list, &VAR_4->vlans_list);

 return VAR_6;

err_port_vlan_alloc:
 FUNC_4(VAR_4, VAR_5, VAR_5, 0, 0);
 return FUNC_0(VAR_8);
}
