
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_fib {scalar_t__ proto; TYPE_1__* vr; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_ralxx_protocol { ____Placeholder_mlxsw_reg_ralxx_protocol } mlxsw_reg_ralxx_protocol ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_2,
         const struct mlxsw_sp_fib *VAR_3, u8 VAR_4)
{
 char VAR_5[VAR_0];

 FUNC_1(VAR_5, VAR_3->vr->id,
        (enum mlxsw_reg_ralxx_protocol) VAR_3->proto,
        VAR_4);
 return FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_5);
}
