
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interval; int dw; } ;
struct mlxsw_sp_bridge {TYPE_1__ fdb_notify; } ;
struct mlxsw_sp {struct mlxsw_sp_bridge* bridge; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_0)
{
 struct mlxsw_sp_bridge *VAR_1 = VAR_0->bridge;

 FUNC_0(&VAR_1->fdb_notify.dw,
          FUNC_1(VAR_1->fdb_notify.interval));
}
