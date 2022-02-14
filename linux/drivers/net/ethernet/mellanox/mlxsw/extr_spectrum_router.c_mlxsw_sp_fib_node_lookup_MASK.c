
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_fib_node {int dummy; } ;
struct mlxsw_sp_fib_key {unsigned char prefix_len; int addr; } ;
struct mlxsw_sp_fib {int ht; } ;
typedef int key ;


 int FUNC_0 (int ,void const*,size_t) ;
 int FUNC_1 (struct mlxsw_sp_fib_key*,int ,int) ;
 int VAR_0 ;
 struct mlxsw_sp_fib_node* FUNC_2 (int *,struct mlxsw_sp_fib_key*,int ) ;

__attribute__((used)) static struct mlxsw_sp_fib_node *
FUNC_3(struct mlxsw_sp_fib *VAR_1, const void *VAR_2,
    size_t VAR_3, unsigned char VAR_4)
{
 struct mlxsw_sp_fib_key VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 FUNC_0(VAR_5.addr, VAR_2, VAR_3);
 VAR_5.prefix_len = VAR_4;
 return FUNC_2(&VAR_1->ht, &VAR_5, VAR_0);
}
