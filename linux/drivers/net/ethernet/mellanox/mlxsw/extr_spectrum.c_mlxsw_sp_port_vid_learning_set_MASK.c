
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_3 ;

int FUNC_5(struct mlxsw_sp_port *VAR_4, u16 VAR_5,
       bool VAR_6)
{
 struct mlxsw_sp *VAR_7 = VAR_4->mlxsw_sp;
 char *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_8)
  return -VAR_0;
 FUNC_3(VAR_8, VAR_4->local_port, VAR_5, VAR_5,
         VAR_6);
 VAR_9 = FUNC_4(VAR_7->core, FUNC_0(VAR_3), VAR_8);
 FUNC_1(VAR_8);
 return VAR_9;
}
