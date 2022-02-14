
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlxsw_sx_port {int local_port; struct mlxsw_sx* mlxsw_sx; } ;
struct mlxsw_sx {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sx_port *VAR_3, u8 VAR_4)
{
 struct mlxsw_sx *VAR_5 = VAR_3->mlxsw_sx;
 u32 VAR_6 = VAR_1 * VAR_4;
 char VAR_7[VAR_0];
 u32 VAR_8;

 VAR_8 = FUNC_3(VAR_6);
 FUNC_1(VAR_7, VAR_3->local_port,
    VAR_8, 1);
 return FUNC_2(VAR_5->core, FUNC_0(VAR_2), VAR_7);
}
