
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_vregion {scalar_t__ region; scalar_t__ region2; int list; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_tcam_vregion *VAR_1)
{
 FUNC_0(&VAR_1->list);
 if (VAR_1->region2)
  FUNC_1(VAR_0,
            VAR_1->region2);
 FUNC_1(VAR_0, VAR_1->region);
}
