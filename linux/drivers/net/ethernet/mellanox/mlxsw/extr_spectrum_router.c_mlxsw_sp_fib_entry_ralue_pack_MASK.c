
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_fib_entry {TYPE_3__* fib_node; } ;
struct mlxsw_sp_fib {int proto; TYPE_1__* vr; } ;
typedef enum mlxsw_reg_ralxx_protocol { ____Placeholder_mlxsw_reg_ralxx_protocol } mlxsw_reg_ralxx_protocol ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;
struct TYPE_5__ {scalar_t__ addr; int prefix_len; } ;
struct TYPE_6__ {TYPE_2__ key; struct mlxsw_sp_fib* fib; } ;
struct TYPE_4__ {int id; } ;




 int FUNC_0 (char*,int,int,int ,int ,int ) ;
 int FUNC_1 (char*,int,int,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0,
         const struct mlxsw_sp_fib_entry *VAR_1,
         enum mlxsw_reg_ralue_op VAR_2)
{
 struct mlxsw_sp_fib *VAR_3 = VAR_1->fib_node->fib;
 enum mlxsw_reg_ralxx_protocol VAR_4;
 u32 *VAR_5;

 VAR_4 = (enum mlxsw_reg_ralxx_protocol) VAR_3->proto;

 switch (VAR_3->proto) {
 case 129:
  VAR_5 = (u32 *) VAR_1->fib_node->key.addr;
  FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3->vr->id,
          VAR_1->fib_node->key.prefix_len,
          *VAR_5);
  break;
 case 128:
  FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3->vr->id,
          VAR_1->fib_node->key.prefix_len,
          VAR_1->fib_node->key.addr);
  break;
 }
}
