
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* maxrate; } ;
struct mlxsw_sp_port {TYPE_1__ dcb; } ;
struct TYPE_4__ {int * tc_maxrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_port *VAR_4)
{
 int VAR_5;

 VAR_4->dcb.maxrate = FUNC_0(sizeof(*VAR_4->dcb.maxrate),
          VAR_1);
 if (!VAR_4->dcb.maxrate)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4->dcb.maxrate->tc_maxrate[VAR_5] = VAR_3;

 return 0;
}
