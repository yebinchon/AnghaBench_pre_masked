
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_ventry {struct mlxsw_sp_acl_tcam_entry* entry; } ;
struct mlxsw_sp_acl_tcam_entry {struct mlxsw_sp_acl_tcam_chunk* chunk; } ;
struct mlxsw_sp_acl_tcam_chunk {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_tcam_entry*) ;
 int FUNC_1 (struct mlxsw_sp_acl_tcam_entry*) ;
 struct mlxsw_sp_acl_tcam_entry* FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_ventry*,struct mlxsw_sp_acl_tcam_chunk*) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_entry*) ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_tcam_ventry *VAR_1,
     struct mlxsw_sp_acl_tcam_chunk *VAR_2,
     int *VAR_3)
{
 struct mlxsw_sp_acl_tcam_entry *VAR_4;


 if (VAR_1->entry->chunk == VAR_2)
  return 0;

 if (--(*VAR_3) < 0)
  return 0;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 FUNC_3(VAR_0, VAR_1->entry);
 VAR_1->entry = VAR_4;
 return 0;
}
