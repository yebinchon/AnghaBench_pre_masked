
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* sb_vals; } ;
struct TYPE_2__ {int pms; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_port *VAR_0)
{
 struct mlxsw_sp *VAR_1 = VAR_0->mlxsw_sp;

 return FUNC_0(VAR_1, VAR_0->local_port,
        VAR_1->sb_vals->pms, 0);
}
