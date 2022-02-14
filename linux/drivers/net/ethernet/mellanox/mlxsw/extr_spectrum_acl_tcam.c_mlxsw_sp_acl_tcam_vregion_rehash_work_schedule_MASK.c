
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dw; } ;
struct mlxsw_sp_acl_tcam_vregion {TYPE_2__ rehash; TYPE_1__* tcam; } ;
struct TYPE_3__ {unsigned long vregion_rehash_intrvl; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp_acl_tcam_vregion *VAR_0)
{
 unsigned long VAR_1 = VAR_0->tcam->vregion_rehash_intrvl;

 if (!VAR_1)
  return;
 FUNC_0(&VAR_0->rehash.dw,
          FUNC_1(VAR_1));
}
