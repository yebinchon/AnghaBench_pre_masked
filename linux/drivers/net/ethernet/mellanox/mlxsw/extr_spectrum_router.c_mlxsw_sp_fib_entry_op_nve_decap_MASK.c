
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tunnel_index; } ;
struct mlxsw_sp_fib_entry {TYPE_1__ decap; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*,struct mlxsw_sp_fib_entry*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_2,
        struct mlxsw_sp_fib_entry *VAR_3,
        enum mlxsw_reg_ralue_op VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_3(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_5,
        VAR_3->decap.tunnel_index);
 return FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_5);
}
