
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_span_parms {int dummy; } ;
struct mlxsw_sp_span_entry_ops {int dummy; } ;
struct mlxsw_sp_span_entry {int ref_count; struct net_device const* to_dev; struct mlxsw_sp_span_entry_ops const* ops; } ;
struct TYPE_2__ {int entries_count; struct mlxsw_sp_span_entry* entries; } ;
struct mlxsw_sp {TYPE_1__ span; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_span_entry*,struct mlxsw_sp_span_parms) ;

__attribute__((used)) static struct mlxsw_sp_span_entry *
FUNC_1(struct mlxsw_sp *VAR_0,
      const struct net_device *VAR_1,
      const struct mlxsw_sp_span_entry_ops *VAR_2,
      struct mlxsw_sp_span_parms VAR_3)
{
 struct mlxsw_sp_span_entry *VAR_4 = ((void*)0);
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0->span.entries_count; VAR_5++) {
  if (!VAR_0->span.entries[VAR_5].ref_count) {
   VAR_4 = &VAR_0->span.entries[VAR_5];
   break;
  }
 }
 if (!VAR_4)
  return ((void*)0);

 VAR_4->ops = VAR_2;
 VAR_4->ref_count = 1;
 VAR_4->to_dev = VAR_1;
 FUNC_0(VAR_0, VAR_4, VAR_3);

 return VAR_4;
}
