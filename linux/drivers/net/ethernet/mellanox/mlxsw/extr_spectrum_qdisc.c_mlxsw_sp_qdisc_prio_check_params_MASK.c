
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_prio_qopt_offload_params {scalar_t__ bands; } ;
struct mlxsw_sp_qdisc {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct mlxsw_sp_port *VAR_2,
     struct mlxsw_sp_qdisc *VAR_3,
     void *VAR_4)
{
 struct tc_prio_qopt_offload_params *VAR_5 = VAR_4;

 if (VAR_5->bands > VAR_1)
  return -VAR_0;

 return 0;
}
