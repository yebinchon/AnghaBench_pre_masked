
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union mlxsw_sp_l3addr {int dummy; } mlxsw_sp_l3addr ;
typedef int u32 ;
struct TYPE_2__ {int tunnel_index; } ;
struct mlxsw_sp_fib_entry {void* type; TYPE_1__ decap; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
typedef enum mlxsw_sp_fib_entry_type { ____Placeholder_mlxsw_sp_fib_entry_type } mlxsw_sp_fib_entry_type ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*) ;
 struct mlxsw_sp_fib_entry* FUNC_1 (struct mlxsw_sp*,int ,int,union mlxsw_sp_l3addr const*,int) ;

int FUNC_2(struct mlxsw_sp *VAR_2, u32 VAR_3,
          enum mlxsw_sp_l3proto VAR_4,
          const union mlxsw_sp_l3addr *VAR_5,
          u32 VAR_6)
{
 enum mlxsw_sp_fib_entry_type VAR_7 = VAR_1;
 struct mlxsw_sp_fib_entry *VAR_8;
 int VAR_9;




 VAR_8 = FUNC_1(VAR_2, VAR_3,
        VAR_4, VAR_5,
        VAR_7);
 if (!VAR_8)
  return 0;

 VAR_8->decap.tunnel_index = VAR_6;
 VAR_8->type = VAR_0;

 VAR_9 = FUNC_0(VAR_2, VAR_8);
 if (VAR_9)
  goto err_fib_entry_update;

 return 0;

err_fib_entry_update:
 VAR_8->type = VAR_1;
 FUNC_0(VAR_2, VAR_8);
 return VAR_9;
}
