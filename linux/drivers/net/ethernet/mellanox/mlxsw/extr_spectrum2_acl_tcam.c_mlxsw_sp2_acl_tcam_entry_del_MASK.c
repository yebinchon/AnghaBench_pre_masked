
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp2_acl_tcam_region {int aregion; } ;
struct mlxsw_sp2_acl_tcam_entry {int aentry; } ;
struct mlxsw_sp2_acl_tcam_chunk {int achunk; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp *VAR_0,
      void *VAR_1, void *VAR_2,
      void *VAR_3)
{
 struct mlxsw_sp2_acl_tcam_region *VAR_4 = VAR_1;
 struct mlxsw_sp2_acl_tcam_chunk *VAR_5 = VAR_2;
 struct mlxsw_sp2_acl_tcam_entry *VAR_6 = VAR_3;

 FUNC_0(VAR_0, &VAR_4->aregion, &VAR_5->achunk,
         &VAR_6->aentry);
}
