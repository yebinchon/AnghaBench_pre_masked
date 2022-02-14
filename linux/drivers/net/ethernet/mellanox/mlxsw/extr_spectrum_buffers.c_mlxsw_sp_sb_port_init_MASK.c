
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_sb_port {struct mlxsw_sp_sb_pm* pms; } ;
struct mlxsw_sp_sb_pm {int dummy; } ;
struct mlxsw_sp {TYPE_1__* sb_vals; } ;
struct TYPE_2__ {int pool_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxsw_sp_sb_pm* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_2,
     struct mlxsw_sp_sb_port *VAR_3)
{
 struct mlxsw_sp_sb_pm *VAR_4;

 VAR_4 = FUNC_0(VAR_2->sb_vals->pool_count, sizeof(*VAR_4),
        VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_3->pms = VAR_4;
 return 0;
}
