
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; int core; } ;
struct TYPE_2__ {struct mlxsw_sp_vr* vrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlxsw_sp_vr*) ;

__attribute__((used)) static struct mlxsw_sp_vr *FUNC_2(struct mlxsw_sp *VAR_1)
{
 struct mlxsw_sp_vr *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->core, VAR_0); VAR_3++) {
  VAR_2 = &VAR_1->router->vrs[VAR_3];
  if (!FUNC_1(VAR_2))
   return VAR_2;
 }
 return ((void*)0);
}
