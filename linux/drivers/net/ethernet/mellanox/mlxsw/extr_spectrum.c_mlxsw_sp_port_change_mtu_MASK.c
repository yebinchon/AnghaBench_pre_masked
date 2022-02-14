
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct mlxsw_sp_port {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp_port*,int,int) ;
 int FUNC_1 (struct mlxsw_sp_port*) ;
 int FUNC_2 (struct mlxsw_sp_port*,int) ;
 int FUNC_3 (struct mlxsw_sp_port*,int) ;
 struct mlxsw_sp_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, int VAR_1)
{
 struct mlxsw_sp_port *VAR_2 = FUNC_4(VAR_0);
 bool VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4)
  goto err_span_port_mtu_update;
 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (VAR_4)
  goto err_port_mtu_set;
 VAR_0->mtu = VAR_1;
 return 0;

err_port_mtu_set:
 FUNC_3(VAR_2, VAR_0->mtu);
err_span_port_mtu_update:
 FUNC_0(VAR_2, VAR_0->mtu, VAR_3);
 return VAR_4;
}
