
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_mr_tcam_route {scalar_t__ action; int irif_index; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct mlxsw_sp *VAR_2,
           void *VAR_3, u16 VAR_4)
{
 struct mlxsw_sp_mr_tcam_route *VAR_5 = VAR_3;

 if (VAR_5->action != VAR_1)
  return -VAR_0;
 VAR_5->irif_index = VAR_4;
 return 0;
}
