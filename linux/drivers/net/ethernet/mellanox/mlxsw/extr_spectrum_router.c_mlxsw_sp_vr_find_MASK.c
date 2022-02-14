
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlxsw_sp_vr {scalar_t__ tb_id; } ;
struct mlxsw_sp {TYPE_1__* router; int core; } ;
struct TYPE_2__ {struct mlxsw_sp_vr* vrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_vr*) ;

__attribute__((used)) static struct mlxsw_sp_vr *FUNC_3(struct mlxsw_sp *VAR_1,
         u32 VAR_2)
{
 struct mlxsw_sp_vr *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_1(VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->core, VAR_0); VAR_4++) {
  VAR_3 = &VAR_1->router->vrs[VAR_4];
  if (FUNC_2(VAR_3) && VAR_3->tb_id == VAR_2)
   return VAR_3;
 }
 return ((void*)0);
}
