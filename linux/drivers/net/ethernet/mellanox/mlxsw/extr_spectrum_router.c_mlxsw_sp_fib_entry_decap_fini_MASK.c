
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tunnel_index; TYPE_1__* ipip_entry; } ;
struct mlxsw_sp_fib_entry {TYPE_2__ decap; } ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_3__ {int * decap_fib_entry; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp *VAR_1,
       struct mlxsw_sp_fib_entry *VAR_2)
{

 VAR_2->decap.ipip_entry->decap_fib_entry = ((void*)0);
 VAR_2->decap.ipip_entry = ((void*)0);
 FUNC_0(VAR_1, VAR_0,
      1, VAR_2->decap.tunnel_index);
}
