
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_span_parms {int * member_0; } ;
struct mlxsw_sp_span_entry {int parms; int to_dev; TYPE_1__* ops; int ref_count; } ;
struct TYPE_4__ {int entries_count; struct mlxsw_sp_span_entry* entries; } ;
struct mlxsw_sp {TYPE_2__ span; } ;
typedef int sparms ;
struct TYPE_3__ {int (* parms ) (int ,struct mlxsw_sp_span_parms*) ;} ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct mlxsw_sp_span_parms*,int *,int) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_span_entry*,struct mlxsw_sp_span_parms) ;
 int FUNC_3 (struct mlxsw_sp_span_entry*) ;
 int FUNC_4 (int ,struct mlxsw_sp_span_parms*) ;

void FUNC_5(struct mlxsw_sp *VAR_0)
{
 int VAR_1;
 int VAR_2;

 FUNC_0();
 for (VAR_1 = 0; VAR_1 < VAR_0->span.entries_count; VAR_1++) {
  struct mlxsw_sp_span_entry *VAR_3 = &VAR_0->span.entries[VAR_1];
  struct mlxsw_sp_span_parms VAR_4 = {((void*)0)};

  if (!VAR_3->ref_count)
   continue;

  VAR_2 = VAR_3->ops->parms(VAR_3->to_dev, &VAR_4);
  if (VAR_2)
   continue;

  if (FUNC_1(&VAR_4, &VAR_3->parms, sizeof(VAR_4))) {
   FUNC_3(VAR_3);
   FUNC_2(VAR_0, VAR_3, VAR_4);
  }
 }
}
