
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_ipip_entry {struct mlxsw_sp_fib_entry* decap_fib_entry; } ;
struct TYPE_2__ {int tunnel_index; struct mlxsw_sp_ipip_entry* ipip_entry; } ;
struct mlxsw_sp_fib_entry {TYPE_1__ decap; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_1,
         struct mlxsw_sp_fib_entry *VAR_2,
         struct mlxsw_sp_ipip_entry *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0,
      1, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->decap_fib_entry = VAR_2;
 VAR_2->decap.ipip_entry = VAR_3;
 VAR_2->decap.tunnel_index = VAR_4;
 return 0;
}
