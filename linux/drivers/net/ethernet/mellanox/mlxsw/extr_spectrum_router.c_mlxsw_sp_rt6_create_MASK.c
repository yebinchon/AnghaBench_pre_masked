
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_rt6 {struct fib6_info* rt; } ;
struct fib6_info {int dummy; } ;


 int VAR_0 ;
 struct mlxsw_sp_rt6* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct fib6_info*) ;
 struct mlxsw_sp_rt6* FUNC_2 (int,int ) ;

__attribute__((used)) static struct mlxsw_sp_rt6 *FUNC_3(struct fib6_info *VAR_2)
{
 struct mlxsw_sp_rt6 *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);





 VAR_3->rt = VAR_2;
 FUNC_1(VAR_2);

 return VAR_3;
}
