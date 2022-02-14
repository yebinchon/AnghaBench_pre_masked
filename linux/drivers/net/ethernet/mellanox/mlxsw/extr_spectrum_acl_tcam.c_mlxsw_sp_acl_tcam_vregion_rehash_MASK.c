
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_acl_tcam_rehash_ctx {int dummy; } ;
struct TYPE_3__ {struct mlxsw_sp_acl_tcam_rehash_ctx ctx; } ;
struct mlxsw_sp_acl_tcam_vregion {TYPE_1__ rehash; } ;
struct mlxsw_sp {TYPE_2__* bus_info; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*,struct mlxsw_sp_acl_tcam_rehash_ctx*,int*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*,struct mlxsw_sp_acl_tcam_rehash_ctx*) ;
 int FUNC_3 (struct mlxsw_sp_acl_tcam_rehash_ctx*) ;
 int FUNC_4 (struct mlxsw_sp*,struct mlxsw_sp_acl_tcam_vregion*,struct mlxsw_sp_acl_tcam_rehash_ctx*) ;

__attribute__((used)) static void
FUNC_5(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_acl_tcam_vregion *VAR_2,
     int *VAR_3)
{
 struct mlxsw_sp_acl_tcam_rehash_ctx *VAR_4 = &VAR_2->rehash.ctx;
 int VAR_5;





 if (!FUNC_3(VAR_4)) {
  VAR_5 = FUNC_4(VAR_1,
            VAR_2, VAR_4);
  if (VAR_5) {
   if (VAR_5 != -VAR_0)
    FUNC_0(VAR_1->bus_info->dev, "Failed get rehash hints\n");
   return;
  }
 }

 VAR_5 = FUNC_1(VAR_1, VAR_2,
      VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_1->bus_info->dev, "Failed to migrate vregion\n");
 }

 if (*VAR_3 >= 0)
  FUNC_2(VAR_1, VAR_2, VAR_4);
}
