
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_sp_qdisc {scalar_t__ handle; int ops; } ;
struct mlxsw_sp_port {struct mlxsw_sp_qdisc* tclass_qdiscs; struct mlxsw_sp_qdisc* root_qdisc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct mlxsw_sp_qdisc *
FUNC_3(struct mlxsw_sp_port *VAR_2, u32 VAR_3,
      bool VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_3 == VAR_1)
  return VAR_2->root_qdisc;

 if (VAR_4 || !VAR_2->root_qdisc ||
     !VAR_2->root_qdisc->ops ||
     FUNC_1(VAR_3) != VAR_2->root_qdisc->handle ||
     FUNC_2(VAR_3) > VAR_0)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_6);
 return &VAR_2->tclass_qdiscs[VAR_5];
}
