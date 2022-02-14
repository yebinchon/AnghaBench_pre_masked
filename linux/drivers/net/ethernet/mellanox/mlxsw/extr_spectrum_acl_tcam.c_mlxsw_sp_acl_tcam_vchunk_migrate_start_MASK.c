
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vchunk {struct mlxsw_sp_acl_tcam_chunk* chunk; struct mlxsw_sp_acl_tcam_chunk* chunk2; } ;
struct mlxsw_sp_acl_tcam_rehash_ctx {int * stop_ventry; int * start_ventry; struct mlxsw_sp_acl_tcam_vchunk* current_vchunk; } ;
struct mlxsw_sp_acl_tcam_region {int dummy; } ;
struct mlxsw_sp_acl_tcam_chunk {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_tcam_chunk*) ;
 int FUNC_1 (struct mlxsw_sp_acl_tcam_chunk*) ;
 struct mlxsw_sp_acl_tcam_chunk* FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vchunk*,struct mlxsw_sp_acl_tcam_region*) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_0,
           struct mlxsw_sp_acl_tcam_vchunk *VAR_1,
           struct mlxsw_sp_acl_tcam_region *VAR_2,
           struct mlxsw_sp_acl_tcam_rehash_ctx *VAR_3)
{
 struct mlxsw_sp_acl_tcam_chunk *VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_1->chunk2 = VAR_1->chunk;
 VAR_1->chunk = VAR_4;
 VAR_3->current_vchunk = VAR_1;
 VAR_3->start_ventry = ((void*)0);
 VAR_3->stop_ventry = ((void*)0);
 return 0;
}
