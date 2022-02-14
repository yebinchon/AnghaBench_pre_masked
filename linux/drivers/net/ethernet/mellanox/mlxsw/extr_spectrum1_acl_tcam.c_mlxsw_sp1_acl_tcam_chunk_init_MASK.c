
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_acl_tcam_region {int cregion; } ;
struct mlxsw_sp1_acl_tcam_chunk {int cchunk; } ;


 int FUNC_0 (int *,int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1,
       unsigned int VAR_2)
{
 struct mlxsw_sp1_acl_tcam_region *VAR_3 = VAR_0;
 struct mlxsw_sp1_acl_tcam_chunk *VAR_4 = VAR_1;

 FUNC_0(&VAR_3->cregion, &VAR_4->cchunk,
          VAR_2);
}
