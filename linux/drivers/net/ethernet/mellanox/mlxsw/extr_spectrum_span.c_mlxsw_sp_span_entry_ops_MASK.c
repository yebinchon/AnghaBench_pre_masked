
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_span_entry_ops {scalar_t__ (* can_handle ) (struct net_device const*) ;} ;
struct mlxsw_sp {int dummy; } ;


 size_t FUNC_0 (struct mlxsw_sp_span_entry_ops const**) ;
 struct mlxsw_sp_span_entry_ops const** VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device const*) ;

__attribute__((used)) static const struct mlxsw_sp_span_entry_ops *
FUNC_2(struct mlxsw_sp *VAR_1,
   const struct net_device *VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3)
  if (VAR_0[VAR_3]->can_handle(VAR_2))
   return VAR_0[VAR_3];

 return ((void*)0);
}
