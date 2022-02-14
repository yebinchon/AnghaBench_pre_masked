
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vregion {int key_info; } ;
struct mlxsw_sp_acl_tcam_region {int id; int priv; int key_type; int key_info; struct mlxsw_sp_acl_tcam_vregion* vregion; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_acl_tcam_ops {int (* region_associate ) (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;int (* region_init ) (struct mlxsw_sp*,int ,int ,struct mlxsw_sp_acl_tcam_region*,void*) ;int key_type; scalar_t__ region_priv_size; } ;
struct mlxsw_sp_acl_tcam {int priv; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_tcam_region* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_sp_acl_tcam_region*) ;
 struct mlxsw_sp_acl_tcam_region* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_7 (struct mlxsw_sp_acl_tcam*,int *) ;
 int FUNC_8 (struct mlxsw_sp_acl_tcam*,int ) ;
 int FUNC_9 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_region*) ;
 int FUNC_10 (struct mlxsw_sp*,int ,int ,struct mlxsw_sp_acl_tcam_region*,void*) ;

__attribute__((used)) static struct mlxsw_sp_acl_tcam_region *
FUNC_11(struct mlxsw_sp *VAR_2,
    struct mlxsw_sp_acl_tcam *VAR_3,
    struct mlxsw_sp_acl_tcam_vregion *VAR_4,
    void *VAR_5)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_6 = VAR_2->acl_tcam_ops;
 struct mlxsw_sp_acl_tcam_region *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7) + VAR_6->region_priv_size, VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);
 VAR_7->mlxsw_sp = VAR_2;
 VAR_7->vregion = VAR_4;
 VAR_7->key_info = VAR_4->key_info;

 VAR_8 = FUNC_7(VAR_3, &VAR_7->id);
 if (VAR_8)
  goto err_region_id_get;

 VAR_8 = VAR_6->region_associate(VAR_2, VAR_7);
 if (VAR_8)
  goto err_tcam_region_associate;

 VAR_7->key_type = VAR_6->key_type;
 VAR_8 = FUNC_3(VAR_2, VAR_7);
 if (VAR_8)
  goto err_tcam_region_alloc;

 VAR_8 = FUNC_5(VAR_2, VAR_7);
 if (VAR_8)
  goto err_tcam_region_enable;

 VAR_8 = VAR_6->region_init(VAR_2, VAR_7->priv, VAR_3->priv,
          VAR_7, VAR_5);
 if (VAR_8)
  goto err_tcam_region_init;

 return VAR_7;

err_tcam_region_init:
 FUNC_4(VAR_2, VAR_7);
err_tcam_region_enable:
 FUNC_6(VAR_2, VAR_7);
err_tcam_region_alloc:
err_tcam_region_associate:
 FUNC_8(VAR_3, VAR_7->id);
err_region_id_get:
 FUNC_1(VAR_7);
 return FUNC_0(VAR_8);
}
