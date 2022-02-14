
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_ipip_ops {int (* fib_entry_op ) (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*,int,int ) ;} ;
struct mlxsw_sp_ipip_entry {size_t ipipt; } ;
struct TYPE_4__ {int tunnel_index; struct mlxsw_sp_ipip_entry* ipip_entry; } ;
struct mlxsw_sp_fib_entry {TYPE_2__ decap; } ;
struct mlxsw_sp {TYPE_1__* router; } ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;
struct TYPE_3__ {struct mlxsw_sp_ipip_ops** ipip_ops_arr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp_fib_entry *VAR_2,
     enum mlxsw_reg_ralue_op VAR_3)
{
 struct mlxsw_sp_ipip_entry *VAR_4 = VAR_2->decap.ipip_entry;
 const struct mlxsw_sp_ipip_ops *VAR_5;

 if (FUNC_0(!VAR_4))
  return -VAR_0;

 VAR_5 = VAR_1->router->ipip_ops_arr[VAR_4->ipipt];
 return VAR_5->fib_entry_op(VAR_1, VAR_4, VAR_3,
          VAR_2->decap.tunnel_index);
}
