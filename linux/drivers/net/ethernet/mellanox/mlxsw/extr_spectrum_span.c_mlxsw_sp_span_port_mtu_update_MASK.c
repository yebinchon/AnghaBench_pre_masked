
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_port {int dev; int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (struct mlxsw_sp_port*) ;
 int FUNC_4 (struct mlxsw_sp*,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_1 ;

int FUNC_6(struct mlxsw_sp_port *VAR_2, u16 VAR_3)
{
 struct mlxsw_sp *VAR_4 = VAR_2->mlxsw_sp;
 char VAR_5[VAR_0];
 int VAR_6;




 if (FUNC_3(VAR_2)) {
  u32 VAR_7 = FUNC_4(VAR_4, VAR_3);

  FUNC_1(VAR_5, VAR_2->local_port, VAR_7);
  VAR_6 = FUNC_2(VAR_4->core, FUNC_0(VAR_1), VAR_5);
  if (VAR_6) {
   FUNC_5(VAR_2->dev, "Could not update shared buffer for mirroring\n");
   return VAR_6;
  }
 }

 return 0;
}
