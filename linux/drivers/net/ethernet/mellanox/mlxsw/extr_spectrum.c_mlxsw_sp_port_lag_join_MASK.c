
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_upper {int ref_count; struct net_device* dev; } ;
struct mlxsw_sp_port {int lagged; TYPE_1__* default_vlan; int lag_id; int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct TYPE_2__ {scalar_t__ fid; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*,int ,int ) ;
 int FUNC_2 (struct mlxsw_sp*,int ) ;
 int FUNC_3 (struct mlxsw_sp*,int ) ;
 struct mlxsw_sp_upper* FUNC_4 (struct mlxsw_sp*,int ) ;
 int FUNC_5 (struct mlxsw_sp*,struct net_device*,int *) ;
 int FUNC_6 (struct mlxsw_sp*,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct mlxsw_sp_port *VAR_0,
      struct net_device *VAR_1)
{
 struct mlxsw_sp *VAR_2 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_upper *VAR_3;
 u16 VAR_4;
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, VAR_1, &VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_3 = FUNC_4(VAR_2, VAR_4);
 if (!VAR_3->ref_count) {
  VAR_6 = FUNC_2(VAR_2, VAR_4);
  if (VAR_6)
   return VAR_6;
  VAR_3->dev = VAR_1;
 }

 VAR_6 = FUNC_6(VAR_2, VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_0, VAR_4, VAR_5);
 if (VAR_6)
  goto err_col_port_add;

 FUNC_0(VAR_2->core, VAR_4, VAR_5,
       VAR_0->local_port);
 VAR_0->lag_id = VAR_4;
 VAR_0->lagged = 1;
 VAR_3->ref_count++;


 if (VAR_0->default_vlan->fid)
  FUNC_7(VAR_0->default_vlan);

 return 0;

err_col_port_add:
 if (!VAR_3->ref_count)
  FUNC_3(VAR_2, VAR_4);
 return VAR_6;
}
