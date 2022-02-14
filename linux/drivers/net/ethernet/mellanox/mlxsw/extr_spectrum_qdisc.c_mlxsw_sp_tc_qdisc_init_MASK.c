
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_qdisc {int prio_bitmap; int tclass_num; } ;
struct mlxsw_sp_port {struct mlxsw_sp_qdisc* root_qdisc; struct mlxsw_sp_qdisc* tclass_qdiscs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlxsw_sp_qdisc* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct mlxsw_sp_qdisc*) ;
 struct mlxsw_sp_qdisc* FUNC_2 (int,int ) ;

int FUNC_3(struct mlxsw_sp_port *VAR_4)
{
 struct mlxsw_sp_qdisc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  goto err_root_qdisc_init;

 VAR_4->root_qdisc = VAR_5;
 VAR_4->root_qdisc->prio_bitmap = 0xff;
 VAR_4->root_qdisc->tclass_num = VAR_3;

 VAR_5 = FUNC_0(VAR_2,
     sizeof(*VAR_5),
     VAR_1);
 if (!VAR_5)
  goto err_tclass_qdiscs_init;

 VAR_4->tclass_qdiscs = VAR_5;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_4->tclass_qdiscs[VAR_6].tclass_num = VAR_6;

 return 0;

err_tclass_qdiscs_init:
 FUNC_1(VAR_4->root_qdisc);
err_root_qdisc_init:
 return -VAR_0;
}
