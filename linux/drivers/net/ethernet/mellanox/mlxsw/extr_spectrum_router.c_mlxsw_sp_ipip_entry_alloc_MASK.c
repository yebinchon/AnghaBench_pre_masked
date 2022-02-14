
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_ipip_ops {int ul_proto; } ;
struct mlxsw_sp_ipip_entry {int ipipt; int parms4; struct net_device* ol_dev; int ol_lb; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
typedef enum mlxsw_sp_ipip_type { ____Placeholder_mlxsw_sp_ipip_type } mlxsw_sp_ipip_type ;
struct TYPE_2__ {struct mlxsw_sp_ipip_ops** ipip_ops_arr; } ;


 int VAR_0 ;
 struct mlxsw_sp_ipip_entry* FUNC_0 (int ) ;
 struct mlxsw_sp_ipip_entry* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;


 int FUNC_3 (int) ;
 int FUNC_4 (struct mlxsw_sp_ipip_entry*) ;
 struct mlxsw_sp_ipip_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct mlxsw_sp*,int,struct net_device*,int *) ;

__attribute__((used)) static struct mlxsw_sp_ipip_entry *
FUNC_8(struct mlxsw_sp *VAR_2,
     enum mlxsw_sp_ipip_type VAR_3,
     struct net_device *VAR_4)
{
 const struct mlxsw_sp_ipip_ops *VAR_5;
 struct mlxsw_sp_ipip_entry *VAR_6;
 struct mlxsw_sp_ipip_entry *VAR_7 = ((void*)0);

 VAR_5 = VAR_2->router->ipip_ops_arr[VAR_3];
 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_6->ol_lb = FUNC_7(VAR_2, VAR_3,
           VAR_4, ((void*)0));
 if (FUNC_2(VAR_6->ol_lb)) {
  VAR_7 = FUNC_0(VAR_6->ol_lb);
  goto err_ol_ipip_lb_create;
 }

 VAR_6->ipipt = VAR_3;
 VAR_6->ol_dev = VAR_4;

 switch (VAR_5->ul_proto) {
 case 129:
  VAR_6->parms4 = FUNC_6(VAR_4);
  break;
 case 128:
  FUNC_3(1);
  break;
 }

 return VAR_6;

err_ol_ipip_lb_create:
 FUNC_4(VAR_6);
 return VAR_7;
}
