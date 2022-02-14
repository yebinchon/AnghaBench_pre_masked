
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_ops {int (* chunk_fini ) (int ) ;} ;
struct mlxsw_sp_acl_tcam_chunk {int priv; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 int FUNC_0 (struct mlxsw_sp_acl_tcam_chunk*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_0,
    struct mlxsw_sp_acl_tcam_chunk *VAR_1)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_2 = VAR_0->acl_tcam_ops;

 VAR_2->chunk_fini(VAR_1->priv);
 FUNC_0(VAR_1);
}
