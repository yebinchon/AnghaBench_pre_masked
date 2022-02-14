
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_red_qopt_offload {int command; int stats; int xstats; int handle; int set; int parent; } ;
struct mlxsw_sp_qdisc {int dummy; } ;
struct mlxsw_sp_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;


 int FUNC_0 (struct mlxsw_sp_qdisc*,int ,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;
 struct mlxsw_sp_qdisc* FUNC_2 (struct mlxsw_sp_port*,int ,int) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,int *) ;
 int FUNC_4 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct mlxsw_sp_port*,int ,struct mlxsw_sp_qdisc*,int *,int *) ;

int FUNC_6(struct mlxsw_sp_port *VAR_4,
     struct tc_red_qopt_offload *VAR_5)
{
 struct mlxsw_sp_qdisc *VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_5->parent, 0);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_5->command == VAR_2)
  return FUNC_5(VAR_4, VAR_5->handle,
           VAR_6,
           &VAR_3,
           &VAR_5->set);

 if (!FUNC_0(VAR_6, VAR_5->handle,
        VAR_1))
  return -VAR_0;

 switch (VAR_5->command) {
 case 130:
  return FUNC_1(VAR_4, VAR_6);
 case 128:
  return FUNC_4(VAR_4, VAR_6,
       VAR_5->xstats);
 case 129:
  return FUNC_3(VAR_4, VAR_6,
      &VAR_5->stats);
 default:
  return -VAR_0;
 }
}
