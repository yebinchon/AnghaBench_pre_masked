
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ backlog; } ;
struct mlxsw_sp_qdisc {int tclass_num; TYPE_1__ stats_base; } ;
struct mlxsw_sp_port {struct mlxsw_sp_qdisc* root_qdisc; } ;


 int FUNC_0 (struct mlxsw_sp_port*,int ) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp_port *VAR_0,
      struct mlxsw_sp_qdisc *VAR_1)
{
 struct mlxsw_sp_qdisc *VAR_2 = VAR_0->root_qdisc;

 if (VAR_2 != VAR_1)
  VAR_2->stats_base.backlog -=
     VAR_1->stats_base.backlog;

 return FUNC_0(VAR_0,
        VAR_1->tclass_num);
}
