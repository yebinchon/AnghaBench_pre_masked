
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_sp_qdisc {scalar_t__ handle; } ;
struct mlxsw_sp_port {struct mlxsw_sp_qdisc* tclass_qdiscs; struct mlxsw_sp_qdisc* root_qdisc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct mlxsw_sp_qdisc *
FUNC_0(struct mlxsw_sp_port *VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (VAR_2->root_qdisc->handle == VAR_3)
  return VAR_2->root_qdisc;

 if (VAR_2->root_qdisc->handle == VAR_1)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->tclass_qdiscs[VAR_4].handle == VAR_3)
   return &VAR_2->tclass_qdiscs[VAR_4];

 return ((void*)0);
}
