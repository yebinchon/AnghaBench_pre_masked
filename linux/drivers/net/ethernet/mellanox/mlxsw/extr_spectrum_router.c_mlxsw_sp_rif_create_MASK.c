
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxsw_sp_vr {int rif_count; int * mr_table; int id; } ;
struct mlxsw_sp_rif_params {int dev; } ;
struct mlxsw_sp_rif_ops {int (* configure ) (struct mlxsw_sp_rif*) ;int (* deconfigure ) (struct mlxsw_sp_rif*) ;int (* setup ) (struct mlxsw_sp_rif*,struct mlxsw_sp_rif_params const*) ;struct mlxsw_sp_vr* (* fid_get ) (struct mlxsw_sp_rif*,struct netlink_ext_ack*) ;int rif_size; } ;
struct mlxsw_sp_rif {int dev; struct mlxsw_sp_vr* fid; struct mlxsw_sp_rif_ops const* ops; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_fid {int rif_count; int * mr_table; int id; } ;
struct mlxsw_sp {TYPE_1__* router; struct mlxsw_sp_rif_ops** rif_ops_arr; } ;
typedef enum mlxsw_sp_rif_type { ____Placeholder_mlxsw_sp_rif_type } mlxsw_sp_rif_type ;
struct TYPE_2__ {struct mlxsw_sp_rif** rifs; } ;


 int VAR_0 ;
 struct mlxsw_sp_rif* FUNC_0 (struct mlxsw_sp_vr*) ;
 struct mlxsw_sp_rif* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_vr*) ;
 int VAR_1 ;
 int FUNC_3 (struct netlink_ext_ack*,char*) ;
 int FUNC_4 (struct mlxsw_sp_vr*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlxsw_sp_rif*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct mlxsw_sp*,int ) ;
 int FUNC_10 (struct mlxsw_sp_vr*) ;
 int FUNC_11 (int ,struct mlxsw_sp_rif*) ;
 int FUNC_12 (int ,struct mlxsw_sp_rif*) ;
 struct mlxsw_sp_rif* FUNC_13 (int ,size_t,int ,int ) ;
 int FUNC_14 (struct mlxsw_sp_rif*) ;
 int FUNC_15 (struct mlxsw_sp*,size_t*) ;
 struct mlxsw_sp_vr* FUNC_16 (struct mlxsw_sp*,int ,struct netlink_ext_ack*) ;
 int FUNC_17 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;
 struct mlxsw_sp_vr* FUNC_18 (struct mlxsw_sp_rif*,struct netlink_ext_ack*) ;
 int FUNC_19 (struct mlxsw_sp_rif*,struct mlxsw_sp_rif_params const*) ;
 int FUNC_20 (struct mlxsw_sp_rif*) ;
 int FUNC_21 (struct mlxsw_sp_rif*) ;

__attribute__((used)) static struct mlxsw_sp_rif *
FUNC_22(struct mlxsw_sp *VAR_3,
      const struct mlxsw_sp_rif_params *VAR_4,
      struct netlink_ext_ack *VAR_5)
{
 u32 VAR_6 = FUNC_8(VAR_4->dev);
 const struct mlxsw_sp_rif_ops *VAR_7;
 struct mlxsw_sp_fid *VAR_8 = ((void*)0);
 enum mlxsw_sp_rif_type VAR_9;
 struct mlxsw_sp_rif *VAR_10;
 struct mlxsw_sp_vr *VAR_11;
 u16 VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = FUNC_9(VAR_3, VAR_4->dev);
 VAR_7 = VAR_3->rif_ops_arr[VAR_9];

 VAR_11 = FUNC_16(VAR_3, VAR_6 ? : VAR_2, VAR_5);
 if (FUNC_2(VAR_11))
  return FUNC_0(VAR_11);
 VAR_11->rif_count++;

 VAR_14 = FUNC_15(VAR_3, &VAR_12);
 if (VAR_14) {
  FUNC_3(VAR_5, "Exceeded number of supported router interfaces");
  goto err_rif_index_alloc;
 }

 VAR_10 = FUNC_13(VAR_7->rif_size, VAR_12, VAR_11->id, VAR_4->dev);
 if (!VAR_10) {
  VAR_14 = -VAR_0;
  goto err_rif_alloc;
 }
 FUNC_5(VAR_10->dev);
 VAR_3->router->rifs[VAR_12] = VAR_10;
 VAR_10->mlxsw_sp = VAR_3;
 VAR_10->ops = VAR_7;

 if (VAR_7->fid_get) {
  VAR_8 = VAR_7->fid_get(VAR_10, VAR_5);
  if (FUNC_2(VAR_8)) {
   VAR_14 = FUNC_4(VAR_8);
   goto err_fid_get;
  }
  VAR_10->fid = VAR_8;
 }

 if (VAR_7->setup)
  VAR_7->setup(VAR_10, VAR_4);

 VAR_14 = VAR_7->configure(VAR_10);
 if (VAR_14)
  goto err_configure;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_14 = FUNC_11(VAR_11->mr_table[VAR_13], VAR_10);
  if (VAR_14)
   goto err_mr_rif_add;
 }

 FUNC_14(VAR_10);

 return VAR_10;

err_mr_rif_add:
 for (VAR_13--; VAR_13 >= 0; VAR_13--)
  FUNC_12(VAR_11->mr_table[VAR_13], VAR_10);
 VAR_7->deconfigure(VAR_10);
err_configure:
 if (VAR_8)
  FUNC_10(VAR_8);
err_fid_get:
 VAR_3->router->rifs[VAR_12] = ((void*)0);
 FUNC_6(VAR_10->dev);
 FUNC_7(VAR_10);
err_rif_alloc:
err_rif_index_alloc:
 VAR_11->rif_count--;
 FUNC_17(VAR_3, VAR_11);
 return FUNC_1(VAR_14);
}
