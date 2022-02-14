
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max; int cur; } ;
struct mlxsw_sp_sb_pm {TYPE_1__ occ; } ;
struct mlxsw_core {int dummy; } ;


 int FUNC_0 (char*,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_core *VAR_0,
     char *VAR_1, size_t VAR_2,
     unsigned long VAR_3)
{
 struct mlxsw_sp_sb_pm *VAR_4 = (struct mlxsw_sp_sb_pm *) VAR_3;

 FUNC_0(VAR_1, &VAR_4->occ.cur, &VAR_4->occ.max);
}
