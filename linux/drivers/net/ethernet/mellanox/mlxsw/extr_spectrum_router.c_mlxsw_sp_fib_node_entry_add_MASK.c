
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib_node {int entry_list; } ;
struct mlxsw_sp_fib_entry {struct mlxsw_sp_fib_node* fib_node; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_ralue_op { ____Placeholder_mlxsw_reg_ralue_op } mlxsw_reg_ralue_op ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct mlxsw_sp_fib_entry* FUNC_1 (struct mlxsw_sp_fib_entry*,int ) ;
 int FUNC_2 (struct mlxsw_sp_fib_entry*,int,int ) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_fib_entry*) ;
 int FUNC_4 (struct mlxsw_sp_fib_node*,struct mlxsw_sp_fib_entry*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_2,
           struct mlxsw_sp_fib_entry *VAR_3)
{
 struct mlxsw_sp_fib_node *VAR_4 = VAR_3->fib_node;

 if (!FUNC_4(VAR_4, VAR_3))
  return 0;




 if (!FUNC_0(&VAR_4->entry_list)) {
  enum mlxsw_reg_ralue_op VAR_5 = VAR_0;
  struct mlxsw_sp_fib_entry *VAR_6 = FUNC_1(VAR_3, VAR_1);

  FUNC_2(VAR_6, VAR_5, 0);
 }

 return FUNC_3(VAR_2, VAR_3);
}
