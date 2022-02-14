
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp_fib_node {int dummy; } ;
struct mlxsw_sp_fib {int dummy; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;


 int VAR_0 ;
 struct mlxsw_sp_fib_node* FUNC_0 (struct mlxsw_sp_vr*) ;
 struct mlxsw_sp_fib_node* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mlxsw_sp_vr*) ;
 struct mlxsw_sp_fib_node* FUNC_3 (struct mlxsw_sp_fib*,void const*,size_t,unsigned char) ;
 int FUNC_4 (struct mlxsw_sp_fib_node*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_fib_node*,struct mlxsw_sp_fib*) ;
 struct mlxsw_sp_fib_node* FUNC_6 (struct mlxsw_sp_fib*,void const*,size_t,unsigned char) ;
 struct mlxsw_sp_fib* FUNC_7 (struct mlxsw_sp_vr*,int) ;
 struct mlxsw_sp_vr* FUNC_8 (struct mlxsw_sp*,int ,int *) ;
 int FUNC_9 (struct mlxsw_sp*,struct mlxsw_sp_vr*) ;

__attribute__((used)) static struct mlxsw_sp_fib_node *
FUNC_10(struct mlxsw_sp *VAR_1, u32 VAR_2, const void *VAR_3,
        size_t VAR_4, unsigned char VAR_5,
        enum mlxsw_sp_l3proto VAR_6)
{
 struct mlxsw_sp_fib_node *VAR_7;
 struct mlxsw_sp_fib *VAR_8;
 struct mlxsw_sp_vr *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_8(VAR_1, VAR_2, ((void*)0));
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);
 VAR_8 = FUNC_7(VAR_9, VAR_6);

 VAR_7 = FUNC_6(VAR_8, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_8, VAR_3, VAR_4, VAR_5);
 if (!VAR_7) {
  VAR_10 = -VAR_0;
  goto err_fib_node_create;
 }

 VAR_10 = FUNC_5(VAR_1, VAR_7, VAR_8);
 if (VAR_10)
  goto err_fib_node_init;

 return VAR_7;

err_fib_node_init:
 FUNC_4(VAR_7);
err_fib_node_create:
 FUNC_9(VAR_1, VAR_9);
 return FUNC_1(VAR_10);
}
