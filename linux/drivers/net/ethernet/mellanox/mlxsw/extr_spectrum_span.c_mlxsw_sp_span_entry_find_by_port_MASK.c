
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_span_entry {struct net_device const* to_dev; scalar_t__ ref_count; } ;
struct TYPE_2__ {int entries_count; struct mlxsw_sp_span_entry* entries; } ;
struct mlxsw_sp {TYPE_1__ span; } ;



struct mlxsw_sp_span_entry *
FUNC_0(struct mlxsw_sp *VAR_0,
     const struct net_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->span.entries_count; VAR_2++) {
  struct mlxsw_sp_span_entry *VAR_3 = &VAR_0->span.entries[VAR_2];

  if (VAR_3->ref_count && VAR_3->to_dev == VAR_1)
   return VAR_3;
 }
 return ((void*)0);
}
