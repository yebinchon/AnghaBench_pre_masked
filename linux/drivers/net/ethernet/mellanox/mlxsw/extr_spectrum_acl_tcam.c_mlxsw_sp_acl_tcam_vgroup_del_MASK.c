
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vgroup {int vregion_list; int group; int vchunk_ht; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mlxsw_sp_acl_tcam_vgroup *VAR_0)
{
 FUNC_3(&VAR_0->vchunk_ht);
 FUNC_2(&VAR_0->group);
 FUNC_0(!FUNC_1(&VAR_0->vregion_list));
}
