
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlxsw_sp_vr {int id; } ;
struct mlxsw_sp {TYPE_1__* router; int core; } ;
struct TYPE_2__ {struct mlxsw_sp_vr* vrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct mlxsw_sp_vr* FUNC_2 (int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_4)
{
 struct mlxsw_sp_vr *VAR_5;
 u64 VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_4->core, VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4->core, VAR_3);
 VAR_4->router->vrs = FUNC_2(VAR_6, sizeof(struct mlxsw_sp_vr),
     VAR_2);
 if (!VAR_4->router->vrs)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = &VAR_4->router->vrs[VAR_7];
  VAR_5->id = VAR_7;
 }

 return 0;
}
