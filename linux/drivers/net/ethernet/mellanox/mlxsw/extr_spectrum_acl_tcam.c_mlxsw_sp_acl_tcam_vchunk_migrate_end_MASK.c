
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vchunk {int * chunk2; } ;
struct mlxsw_sp_acl_tcam_rehash_ctx {int * current_vchunk; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int *) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp_acl_tcam_vchunk *VAR_1,
         struct mlxsw_sp_acl_tcam_rehash_ctx *VAR_2)
{
 FUNC_0(VAR_0, VAR_1->chunk2);
 VAR_1->chunk2 = ((void*)0);
 VAR_2->current_vchunk = ((void*)0);
}
