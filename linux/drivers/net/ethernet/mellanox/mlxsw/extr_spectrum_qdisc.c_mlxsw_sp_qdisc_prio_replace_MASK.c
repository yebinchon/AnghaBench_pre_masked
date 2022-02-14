
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tc_prio_qopt_offload_params {int bands; int* priomap; } ;
struct TYPE_4__ {int backlog; } ;
struct mlxsw_sp_qdisc {int prio_bitmap; TYPE_2__ stats_base; TYPE_1__* ops; } ;
struct mlxsw_sp_port {struct mlxsw_sp_qdisc* tclass_qdiscs; } ;
struct TYPE_3__ {int (* clean_stats ) (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlxsw_sp_port*,int,int) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;
 int FUNC_4 (struct mlxsw_sp_port*,struct mlxsw_sp_qdisc*) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_port *VAR_1,
       struct mlxsw_sp_qdisc *VAR_2,
       void *VAR_3)
{
 struct tc_prio_qopt_offload_params *VAR_4 = VAR_3;
 struct mlxsw_sp_qdisc *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 u8 VAR_10;
 int VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_4->bands; VAR_8++) {
  VAR_6 = FUNC_1(VAR_8);
  VAR_5 = &VAR_1->tclass_qdiscs[VAR_6];
  VAR_10 = VAR_5->prio_bitmap;
  VAR_5->prio_bitmap = 0;
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if (VAR_4->priomap[VAR_7] == VAR_8) {
    VAR_5->prio_bitmap |= FUNC_0(VAR_7);
    if (FUNC_0(VAR_7) & VAR_10)
     continue;
    VAR_11 = FUNC_2(VAR_1,
        VAR_7, VAR_6);
    if (VAR_11)
     return VAR_11;
   }
  }
  if (VAR_10 != VAR_5->prio_bitmap &&
      VAR_5->ops && VAR_5->ops->clean_stats) {
   VAR_9 = VAR_5->stats_base.backlog;
   VAR_5->ops->clean_stats(VAR_1,
            VAR_5);
   VAR_5->stats_base.backlog = VAR_9;
  }
 }
 for (; VAR_8 < VAR_0; VAR_8++) {
  VAR_6 = FUNC_1(VAR_8);
  VAR_5 = &VAR_1->tclass_qdiscs[VAR_6];
  VAR_5->prio_bitmap = 0;
  FUNC_3(VAR_1, VAR_5);
 }
 return 0;
}
