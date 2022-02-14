
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_prio_qopt_offload_graft_params {scalar_t__ band; scalar_t__ child_handle; } ;
struct mlxsw_sp_qdisc {scalar_t__ handle; } ;
struct mlxsw_sp_port {struct mlxsw_sp_qdisc* tclass_qdiscs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;
 struct mlxsw_sp_qdisc* FUNC_2 (struct mlxsw_sp_port*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_port *VAR_2,
     struct mlxsw_sp_qdisc *VAR_3,
     struct tc_prio_qopt_offload_graft_params *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4->band);
 struct mlxsw_sp_qdisc *VAR_6;




 if (VAR_4->band < VAR_1 &&
     VAR_2->tclass_qdiscs[VAR_5].handle == VAR_4->child_handle)
  return 0;




 VAR_6 = FUNC_2(VAR_2,
        VAR_4->child_handle);
 if (VAR_6)
  FUNC_1(VAR_2, VAR_6);

 FUNC_1(VAR_2,
          &VAR_2->tclass_qdiscs[VAR_5]);
 return -VAR_0;
}
