
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_acl_tcam_region {int region; } ;
struct mlxsw_sp1_acl_tcam_entry {int centry; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,unsigned int,int*) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp *VAR_0,
          void *VAR_1, void *VAR_2,
          bool *VAR_3)
{
 struct mlxsw_sp1_acl_tcam_region *VAR_4 = VAR_1;
 struct mlxsw_sp1_acl_tcam_entry *VAR_5 = VAR_2;
 unsigned int VAR_6;

 VAR_6 = FUNC_1(&VAR_5->centry);
 return FUNC_0(VAR_0,
           VAR_4->region,
           VAR_6, VAR_3);
}
