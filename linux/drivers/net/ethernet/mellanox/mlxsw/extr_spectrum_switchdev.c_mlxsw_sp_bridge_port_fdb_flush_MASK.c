
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_bridge_port {int lagged; int system_port; int lag_id; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp *VAR_2,
          struct mlxsw_sp_bridge_port *VAR_3,
          u16 VAR_4)
{
 bool VAR_5 = VAR_3->lagged;
 char VAR_6[VAR_0];
 u16 VAR_7;

 VAR_7 = VAR_5 ? VAR_3->lag_id : VAR_3->system_port;
 FUNC_2(VAR_6, FUNC_5(VAR_5));
 FUNC_1(VAR_6, VAR_4);
 FUNC_3(VAR_6, VAR_7);

 return FUNC_4(VAR_2->core, FUNC_0(VAR_1), VAR_6);
}
