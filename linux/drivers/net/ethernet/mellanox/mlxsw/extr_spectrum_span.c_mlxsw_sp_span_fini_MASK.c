
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_span_entry {int bound_ports_list; } ;
struct TYPE_2__ {int entries_count; struct mlxsw_sp_span_entry* entries; } ;
struct mlxsw_sp {TYPE_1__ span; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp_span_entry*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlxsw_sp *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->span.entries_count; VAR_1++) {
  struct mlxsw_sp_span_entry *VAR_2 = &VAR_0->span.entries[VAR_1];

  FUNC_0(!FUNC_2(&VAR_2->bound_ports_list));
 }
 FUNC_1(VAR_0->span.entries);
}
