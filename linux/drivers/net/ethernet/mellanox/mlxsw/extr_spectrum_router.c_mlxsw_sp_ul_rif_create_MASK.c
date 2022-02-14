
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_vr {int id; } ;
struct mlxsw_sp_rif {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
struct TYPE_2__ {struct mlxsw_sp_rif** rifs; } ;


 int VAR_0 ;
 struct mlxsw_sp_rif* FUNC_0 (int) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_3 (int,size_t,int ,int *) ;
 int FUNC_4 (struct mlxsw_sp*,size_t*) ;
 int FUNC_5 (struct mlxsw_sp_rif*,int) ;

__attribute__((used)) static struct mlxsw_sp_rif *
FUNC_6(struct mlxsw_sp *VAR_1, struct mlxsw_sp_vr *VAR_2,
         struct netlink_ext_ack *VAR_3)
{
 struct mlxsw_sp_rif *VAR_4;
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_1, &VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_3, "Exceeded number of supported router interfaces");
  return FUNC_0(VAR_6);
 }

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_5, VAR_2->id, ((void*)0));
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_1->router->rifs[VAR_5] = VAR_4;
 VAR_4->mlxsw_sp = VAR_1;
 VAR_6 = FUNC_5(VAR_4, 1);
 if (VAR_6)
  goto ul_rif_op_err;

 return VAR_4;

ul_rif_op_err:
 VAR_1->router->rifs[VAR_5] = ((void*)0);
 FUNC_2(VAR_4);
 return FUNC_0(VAR_6);
}
