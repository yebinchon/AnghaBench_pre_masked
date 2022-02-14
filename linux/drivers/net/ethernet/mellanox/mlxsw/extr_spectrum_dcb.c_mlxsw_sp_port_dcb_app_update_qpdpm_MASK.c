
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct dcb_ieee_app_dscp_map {int * map; } ;


 short FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,short,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_port *VAR_2,
       struct dcb_ieee_app_dscp_map *VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_2->mlxsw_sp;
 char VAR_5[VAR_0];
 short int VAR_6;

 FUNC_3(VAR_5, VAR_2->local_port);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->map); ++VAR_6)
  FUNC_2(VAR_5, VAR_6, VAR_3->map[VAR_6]);
 return FUNC_4(VAR_4->core, FUNC_1(VAR_1), VAR_5);
}
