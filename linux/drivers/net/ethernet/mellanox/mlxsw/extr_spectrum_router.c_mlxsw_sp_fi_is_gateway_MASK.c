
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int dummy; } ;
struct fib_nh {scalar_t__ fib_nh_scope; } ;
struct fib_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct fib_nh* FUNC_0 (struct fib_info*,int ) ;
 scalar_t__ FUNC_1 (struct mlxsw_sp const*,struct fib_nh const*,int *) ;

__attribute__((used)) static bool FUNC_2(const struct mlxsw_sp *VAR_1,
       struct fib_info *VAR_2)
{
 const struct fib_nh *VAR_3 = FUNC_0(VAR_2, 0);

 return VAR_3->fib_nh_scope == VAR_0 ||
        FUNC_1(VAR_1, VAR_3, ((void*)0));
}
