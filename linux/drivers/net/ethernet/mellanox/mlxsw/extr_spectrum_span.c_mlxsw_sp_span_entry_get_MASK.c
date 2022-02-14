
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_span_parms {int dummy; } ;
struct mlxsw_sp_span_entry_ops {int dummy; } ;
struct mlxsw_sp_span_entry {int ref_count; } ;
struct mlxsw_sp {int dummy; } ;


 struct mlxsw_sp_span_entry* FUNC_0 (struct mlxsw_sp*,struct net_device const*,struct mlxsw_sp_span_entry_ops const*,struct mlxsw_sp_span_parms) ;
 struct mlxsw_sp_span_entry* FUNC_1 (struct mlxsw_sp*,struct net_device const*) ;

__attribute__((used)) static struct mlxsw_sp_span_entry *
FUNC_2(struct mlxsw_sp *VAR_0,
   const struct net_device *VAR_1,
   const struct mlxsw_sp_span_entry_ops *VAR_2,
   struct mlxsw_sp_span_parms VAR_3)
{
 struct mlxsw_sp_span_entry *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4) {

  VAR_4->ref_count++;
  return VAR_4;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
