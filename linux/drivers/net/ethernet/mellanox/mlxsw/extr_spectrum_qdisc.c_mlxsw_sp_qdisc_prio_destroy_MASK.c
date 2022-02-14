
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_qdisc {int dummy; } ;
struct mlxsw_sp_port {TYPE_1__* tclass_qdiscs; } ;
struct TYPE_2__ {scalar_t__ prio_bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp_port*,int,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp_port *VAR_2,
       struct mlxsw_sp_qdisc *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(VAR_2, VAR_4,
       VAR_1);
  FUNC_1(VAR_2,
           &VAR_2->tclass_qdiscs[VAR_4]);
  VAR_2->tclass_qdiscs[VAR_4].prio_bitmap = 0;
 }

 return 0;
}
