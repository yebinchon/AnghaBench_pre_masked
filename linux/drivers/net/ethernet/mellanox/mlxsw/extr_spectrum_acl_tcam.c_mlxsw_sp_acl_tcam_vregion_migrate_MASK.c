
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_vregion {int lock; int region2; int region; } ;
struct mlxsw_sp_acl_tcam_rehash_ctx {int this_is_rollback; int * current_vchunk; } ;
struct mlxsw_sp {TYPE_1__* bus_info; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*,struct mlxsw_sp_acl_tcam_rehash_ctx*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*) ;
 int FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*) ;

__attribute__((used)) static int
FUNC_8(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_acl_tcam_vregion *VAR_1,
      struct mlxsw_sp_acl_tcam_rehash_ctx *VAR_2,
      int *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_5(VAR_0, VAR_1);
 FUNC_2(&VAR_1->lock);
 VAR_4 = FUNC_1(VAR_0, VAR_1,
         VAR_2, VAR_3);
 if (VAR_4) {




  FUNC_4(VAR_1->region, VAR_1->region2);
  VAR_2->current_vchunk = ((void*)0);
  VAR_2->this_is_rollback = 1;
  VAR_5 = FUNC_1(VAR_0, VAR_1,
           VAR_2, VAR_3);
  if (VAR_5) {
   FUNC_7(VAR_0,
                VAR_1);
   FUNC_0(VAR_0->bus_info->dev, "Failed to rollback during vregion migration fail\n");

  }
 }
 FUNC_3(&VAR_1->lock);
 FUNC_6(VAR_0, VAR_1);
 return VAR_4;
}
