
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vchunk {int priority; } ;
struct mlxsw_sp_acl_tcam_region {int priv; } ;
struct mlxsw_sp_acl_tcam_ops {int (* chunk_init ) (int ,int ,int ) ;scalar_t__ chunk_priv_size; } ;
struct mlxsw_sp_acl_tcam_chunk {int priv; struct mlxsw_sp_acl_tcam_region* region; struct mlxsw_sp_acl_tcam_vchunk* vchunk; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 int VAR_0 ;
 struct mlxsw_sp_acl_tcam_chunk* FUNC_0 (int ) ;
 int VAR_1 ;
 struct mlxsw_sp_acl_tcam_chunk* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static struct mlxsw_sp_acl_tcam_chunk *
FUNC_3(struct mlxsw_sp *VAR_2,
          struct mlxsw_sp_acl_tcam_vchunk *VAR_3,
          struct mlxsw_sp_acl_tcam_region *VAR_4)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_5 = VAR_2->acl_tcam_ops;
 struct mlxsw_sp_acl_tcam_chunk *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6) + VAR_5->chunk_priv_size, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 VAR_6->vchunk = VAR_3;
 VAR_6->region = VAR_4;

 VAR_5->chunk_init(VAR_4->priv, VAR_6->priv, VAR_3->priority);
 return VAR_6;
}
