
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_mr_tcam_route {scalar_t__ action; int erif_list; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int *,int ) ;
 int FUNC_1 (struct mlxsw_sp*,int *) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_1,
        void *VAR_2, u16 VAR_3)
{
 struct mlxsw_sp_mr_tcam_route *VAR_4 = VAR_2;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_4->erif_list,
     VAR_3);
 if (VAR_5)
  return VAR_5;


 if (VAR_4->action != VAR_0)
  return FUNC_1(VAR_1,
          &VAR_4->erif_list);
 return 0;
}
