
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp_port *VAR_5, u16 VAR_6)
{
 struct mlxsw_sp *VAR_7 = VAR_5->mlxsw_sp;
 char VAR_8[VAR_2];
 int VAR_9;
 int VAR_10;

 VAR_6 += VAR_3 + VAR_1;
 FUNC_2(VAR_8, VAR_5->local_port, 0);
 VAR_10 = FUNC_3(VAR_7->core, FUNC_0(VAR_4), VAR_8);
 if (VAR_10)
  return VAR_10;
 VAR_9 = FUNC_1(VAR_8);

 if (VAR_6 > VAR_9)
  return -VAR_0;

 FUNC_2(VAR_8, VAR_5->local_port, VAR_6);
 return FUNC_4(VAR_7->core, FUNC_0(VAR_4), VAR_8);
}
