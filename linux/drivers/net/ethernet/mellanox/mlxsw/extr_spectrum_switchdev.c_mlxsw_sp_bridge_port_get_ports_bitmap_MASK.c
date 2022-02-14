
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlxsw_sp_port {int local_port; } ;
struct mlxsw_sp_bridge_port {int lag_id; int system_port; int lagged; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct mlxsw_sp_port* FUNC_1 (struct mlxsw_sp*,int,scalar_t__) ;
 int FUNC_2 (int ,unsigned long*) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp *VAR_1,
          struct mlxsw_sp_bridge_port *VAR_2,
          unsigned long *VAR_3)
{
 struct mlxsw_sp_port *VAR_4;
 u64 VAR_5, VAR_6;
 int VAR_7;

 if (!VAR_2->lagged) {
  FUNC_2(VAR_2->system_port, VAR_3);
 } else {
  VAR_5 = FUNC_0(VAR_1->core,
           VAR_0);
  VAR_7 = VAR_2->lag_id;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_4 = FUNC_1(VAR_1,
         VAR_7, VAR_6);
   if (VAR_4)
    FUNC_2(VAR_4->local_port,
     VAR_3);
  }
 }
}
