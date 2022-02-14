
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_qopt_offload_stats {int dummy; } ;
struct mlxsw_sp_qdisc {TYPE_1__* ops; } ;
struct mlxsw_sp_port {int dummy; } ;
struct TYPE_2__ {int (* get_stats ) (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,struct tc_qopt_offload_stats*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,struct tc_qopt_offload_stats*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp_port *VAR_1,
    struct mlxsw_sp_qdisc *VAR_2,
    struct tc_qopt_offload_stats *VAR_3)
{
 if (VAR_2 && VAR_2->ops &&
     VAR_2->ops->get_stats)
  return VAR_2->ops->get_stats(VAR_1,
            VAR_2,
            VAR_3);

 return -VAR_0;
}
