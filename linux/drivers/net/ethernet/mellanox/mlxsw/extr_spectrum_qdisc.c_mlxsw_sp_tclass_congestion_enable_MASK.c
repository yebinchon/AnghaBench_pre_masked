
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int,int ,int,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct mlxsw_sp_port *VAR_6,
      int VAR_7, u32 VAR_8, u32 VAR_9,
      u32 VAR_10, bool VAR_11)
{
 char VAR_12[VAR_0];
 char VAR_13[VAR_2];
 struct mlxsw_sp *VAR_14 = VAR_6->mlxsw_sp;
 int VAR_15;

 FUNC_1(VAR_13, VAR_6->local_port, VAR_7);
 FUNC_2(VAR_13, VAR_1,
        FUNC_5(VAR_8, VAR_3),
        FUNC_5(VAR_9, VAR_3),
        VAR_10);

 VAR_15 = FUNC_4(VAR_14->core, FUNC_0(VAR_4), VAR_13);
 if (VAR_15)
  return VAR_15;

 FUNC_3(VAR_12, VAR_6->local_port, VAR_7,
        VAR_1, 1, VAR_11);

 return FUNC_4(VAR_14->core, FUNC_0(VAR_5), VAR_12);
}
