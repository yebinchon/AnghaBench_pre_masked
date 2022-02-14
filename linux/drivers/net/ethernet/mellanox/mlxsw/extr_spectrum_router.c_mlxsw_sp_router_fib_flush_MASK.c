
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_vr {int * mr_table; } ;
struct mlxsw_sp {TYPE_1__* router; int core; } ;
struct TYPE_2__ {struct mlxsw_sp_vr* vrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_vr*,int ) ;
 int FUNC_3 (struct mlxsw_sp_vr*) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->core, VAR_0); VAR_5++) {
  struct mlxsw_sp_vr *VAR_7 = &VAR_4->router->vrs[VAR_5];

  if (!FUNC_3(VAR_7))
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   FUNC_1(VAR_7->mr_table[VAR_6]);
  FUNC_2(VAR_4, VAR_7, VAR_1);




  if (!FUNC_3(VAR_7))
   continue;
  FUNC_2(VAR_4, VAR_7, VAR_2);
 }
}
