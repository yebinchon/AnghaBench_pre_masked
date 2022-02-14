
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mlxsw_sp_fib {TYPE_1__* vr; scalar_t__ proto; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_ralxx_protocol { ____Placeholder_mlxsw_reg_ralxx_protocol } mlxsw_reg_ralxx_protocol ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_2,
          const struct mlxsw_sp_fib *VAR_3,
          u32 VAR_4, u16 VAR_5,
          u32 VAR_6,
          u16 VAR_7)
{
 char VAR_8[VAR_0];

 FUNC_1(VAR_8,
        (enum mlxsw_reg_ralxx_protocol) VAR_3->proto,
        VAR_3->vr->id, VAR_4, VAR_5, VAR_6,
        VAR_7);
 return FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_8);
}
