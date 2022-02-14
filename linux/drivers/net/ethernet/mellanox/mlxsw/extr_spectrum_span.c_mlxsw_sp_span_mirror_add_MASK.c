
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct mlxsw_sp_span_parms {int * member_0; } ;
struct mlxsw_sp_span_entry_ops {int (* parms ) (struct net_device const*,struct mlxsw_sp_span_parms*) ;} ;
struct mlxsw_sp_span_entry {int id; } ;
struct mlxsw_sp_port {int dev; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_span_type { ____Placeholder_mlxsw_sp_span_type } mlxsw_sp_span_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_span_entry* FUNC_0 (struct mlxsw_sp*,struct net_device const*,struct mlxsw_sp_span_entry_ops const*,struct mlxsw_sp_span_parms) ;
 struct mlxsw_sp_span_entry_ops* FUNC_1 (struct mlxsw_sp*,struct net_device const*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_span_entry*) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct mlxsw_sp_span_entry*,int,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct net_device const*,char*,int ) ;
 int FUNC_6 (struct net_device const*,struct mlxsw_sp_span_parms*) ;

int FUNC_7(struct mlxsw_sp_port *VAR_2,
        const struct net_device *VAR_3,
        enum mlxsw_sp_span_type VAR_4, bool VAR_5,
        int *VAR_6)
{
 struct mlxsw_sp *VAR_7 = VAR_2->mlxsw_sp;
 const struct mlxsw_sp_span_entry_ops *VAR_8;
 struct mlxsw_sp_span_parms VAR_9 = {((void*)0)};
 struct mlxsw_sp_span_entry *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_1(VAR_7, VAR_3);
 if (!VAR_8) {
  FUNC_5(VAR_3, "Cannot mirror to %s", VAR_3->name);
  return -VAR_1;
 }

 VAR_11 = VAR_8->parms(VAR_3, &VAR_9);
 if (VAR_11)
  return VAR_11;

 VAR_10 = FUNC_0(VAR_7, VAR_3, VAR_8, VAR_9);
 if (!VAR_10)
  return -VAR_0;

 FUNC_4(VAR_2->dev, "Adding inspected port to SPAN entry %d\n",
     VAR_10->id);

 VAR_11 = FUNC_3(VAR_2, VAR_10, VAR_4, VAR_5);
 if (VAR_11)
  goto err_port_bind;

 *VAR_6 = VAR_10->id;
 return 0;

err_port_bind:
 FUNC_2(VAR_7, VAR_10);
 return VAR_11;
}
