
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_port *VAR_2,
        u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct mlxsw_sp *VAR_6 = VAR_2->mlxsw_sp;
 char VAR_7[VAR_0];
 int VAR_8;

 FUNC_2(VAR_7, VAR_2->local_port);
 FUNC_4(VAR_7, VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_1(VAR_7, VAR_8, VAR_3);
  FUNC_3(VAR_7, VAR_8, VAR_5 + VAR_8);
 }

 return FUNC_5(VAR_6->core, FUNC_0(VAR_1), VAR_7);
}
