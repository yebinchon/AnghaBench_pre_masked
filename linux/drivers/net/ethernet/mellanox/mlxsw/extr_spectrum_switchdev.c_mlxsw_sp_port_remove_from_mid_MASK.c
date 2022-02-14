
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp_mid {struct mlxsw_sp_mid* ports_in_mid; int list; } ;
struct mlxsw_sp {int core; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_mid*,int ) ;
 int FUNC_1 (int ,struct mlxsw_sp_mid*) ;
 int FUNC_2 (struct mlxsw_sp_mid*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_mid*) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_port *VAR_0,
      struct mlxsw_sp_mid *VAR_1)
{
 struct mlxsw_sp *VAR_2 = VAR_0->mlxsw_sp;
 int VAR_3 = 0;

 FUNC_1(VAR_0->local_port, VAR_1->ports_in_mid);
 if (FUNC_0(VAR_1->ports_in_mid,
    FUNC_4(VAR_2->core))) {
  VAR_3 = FUNC_5(VAR_2, VAR_1);
  FUNC_3(&VAR_1->list);
  FUNC_2(VAR_1->ports_in_mid);
  FUNC_2(VAR_1);
 }
 return VAR_3;
}
