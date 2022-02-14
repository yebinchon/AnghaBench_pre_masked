
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_port {TYPE_1__* mlxsw_sp; int local_port; } ;
struct TYPE_2__ {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp_port *VAR_3,
         u8 *VAR_4)
{
 char VAR_5[VAR_1];
 int VAR_6;

 FUNC_1(VAR_5, VAR_3->local_port);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_2(VAR_5, VAR_6, VAR_4[VAR_6]);

 return FUNC_3(VAR_3->mlxsw_sp->core, FUNC_0(VAR_2),
          VAR_5);
}
