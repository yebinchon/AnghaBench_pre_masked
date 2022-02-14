
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlxsw_sx_port {int local_port; struct mlxsw_sx* mlxsw_sx; } ;
struct mlxsw_sx {int core; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sx_port *VAR_3,
      bool *VAR_4)
{
 struct mlxsw_sx *VAR_5 = VAR_3->mlxsw_sx;
 char VAR_6[VAR_1];
 u8 VAR_7;
 int VAR_8;

 FUNC_2(VAR_6, VAR_3->local_port, 0);
 VAR_8 = FUNC_3(VAR_5->core, FUNC_0(VAR_2), VAR_6);
 if (VAR_8)
  return VAR_8;
 VAR_7 = FUNC_1(VAR_6);
 *VAR_4 = VAR_7 == VAR_0 ? 1 : 0;
 return 0;
}
