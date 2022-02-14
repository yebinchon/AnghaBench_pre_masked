
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp_port *VAR_3,
        u8 *VAR_4, u8 *VAR_5)
{
 struct mlxsw_sp *VAR_6 = VAR_3->mlxsw_sp;
 char VAR_7[VAR_1];
 int VAR_8, VAR_9;

 FUNC_2(VAR_7, VAR_3->local_port, 0, 0);
 VAR_8 = FUNC_3(VAR_6->core, FUNC_0(VAR_2), VAR_7);
 if (VAR_8)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  u8 VAR_10 = VAR_4[VAR_9];

  if (!FUNC_5(VAR_5, VAR_10))
   FUNC_1(VAR_7, VAR_10, 0);
 }

 return FUNC_4(VAR_6->core, FUNC_0(VAR_2), VAR_7);
}
