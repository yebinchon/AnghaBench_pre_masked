
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * stop_ventry; int * start_ventry; struct mlxsw_sp_acl_tcam_vchunk* current_vchunk; } ;
struct TYPE_4__ {TYPE_1__ ctx; } ;
struct mlxsw_sp_acl_tcam_vregion {TYPE_2__ rehash; } ;
struct mlxsw_sp_acl_tcam_vchunk {struct mlxsw_sp_acl_tcam_vregion* vregion; } ;



__attribute__((used)) static void
FUNC_0(struct mlxsw_sp_acl_tcam_vchunk *VAR_0)
{
 struct mlxsw_sp_acl_tcam_vregion *VAR_1 = VAR_0->vregion;





 if (VAR_1->rehash.ctx.current_vchunk == VAR_0) {
  VAR_1->rehash.ctx.start_ventry = ((void*)0);
  VAR_1->rehash.ctx.stop_ventry = ((void*)0);
 }
}
