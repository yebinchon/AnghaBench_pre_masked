
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct mlxsw_sp_port {int dummy; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct mlxsw_sp_port* FUNC_1 (struct mlxsw_sp*,int ,int) ;

__attribute__((used)) static struct mlxsw_sp_port *FUNC_2(struct mlxsw_sp *VAR_1,
         u16 VAR_2)
{
 struct mlxsw_sp_port *VAR_3;
 u64 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1->core,
          VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_5);
  if (VAR_3)
   return VAR_3;
 }
 return ((void*)0);
}
