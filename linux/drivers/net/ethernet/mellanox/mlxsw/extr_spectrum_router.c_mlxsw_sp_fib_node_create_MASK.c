
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char prefix_len; int addr; } ;
struct mlxsw_sp_fib_node {TYPE_1__ key; int list; int entry_list; } ;
struct mlxsw_sp_fib {int node_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mlxsw_sp_fib_node* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,void const*,size_t) ;

__attribute__((used)) static struct mlxsw_sp_fib_node *
FUNC_4(struct mlxsw_sp_fib *VAR_1, const void *VAR_2,
    size_t VAR_3, unsigned char VAR_4)
{
 struct mlxsw_sp_fib_node *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->entry_list);
 FUNC_2(&VAR_5->list, &VAR_1->node_list);
 FUNC_3(VAR_5->key.addr, VAR_2, VAR_3);
 VAR_5->key.prefix_len = VAR_4;

 return VAR_5;
}
