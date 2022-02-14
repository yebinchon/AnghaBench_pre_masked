
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_port {TYPE_1__* mlxsw_sp; int local_port; } ;
struct TYPE_2__ {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct mlxsw_sp_port*,int) ;
 struct mlxsw_sp_port* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, bool VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = FUNC_4(VAR_2);
 char VAR_5[VAR_0];
 int VAR_6;

 if (FUNC_5(VAR_2))
  FUNC_3(VAR_4, 0);

 FUNC_1(VAR_5, VAR_4->local_port, VAR_3);
 VAR_6 = FUNC_2(VAR_4->mlxsw_sp->core, FUNC_0(VAR_1),
         VAR_5);

 if (FUNC_5(VAR_2))
  FUNC_3(VAR_4, 1);

 return VAR_6;
}
