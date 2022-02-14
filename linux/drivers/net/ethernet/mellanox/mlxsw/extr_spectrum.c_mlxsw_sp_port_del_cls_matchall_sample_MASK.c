
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_port {TYPE_1__* sample; } ;
struct TYPE_2__ {int psample_group; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlxsw_sp_port*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp_port *VAR_0)
{
 if (!VAR_0->sample)
  return;

 FUNC_1(VAR_0, 0, 1);
 FUNC_0(VAR_0->sample->psample_group, ((void*)0));
}
