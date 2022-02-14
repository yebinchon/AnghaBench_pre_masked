
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_span_entry {int id; int bound_ports_list; } ;
struct TYPE_2__ {int entries_count; struct mlxsw_sp_span_entry* entries; } ;
struct mlxsw_sp {TYPE_1__ span; int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 struct mlxsw_sp_span_entry* FUNC_3 (int,int,int ) ;

int FUNC_4(struct mlxsw_sp *VAR_4)
{
 int VAR_5;

 if (!FUNC_2(VAR_4->core, VAR_3))
  return -VAR_0;

 VAR_4->span.entries_count = FUNC_1(VAR_4->core,
         VAR_3);
 VAR_4->span.entries = FUNC_3(VAR_4->span.entries_count,
      sizeof(struct mlxsw_sp_span_entry),
      VAR_2);
 if (!VAR_4->span.entries)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4->span.entries_count; VAR_5++) {
  struct mlxsw_sp_span_entry *VAR_6 = &VAR_4->span.entries[VAR_5];

  FUNC_0(&VAR_6->bound_ports_list);
  VAR_6->id = VAR_5;
 }

 return 0;
}
