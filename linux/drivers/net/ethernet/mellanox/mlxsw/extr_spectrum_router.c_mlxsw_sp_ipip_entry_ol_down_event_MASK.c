
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_ipip_entry {scalar_t__ decap_fib_entry; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_ipip_entry*) ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_ipip_entry *VAR_1)
{
 if (VAR_1->decap_fib_entry)
  FUNC_0(VAR_0, VAR_1);
}
