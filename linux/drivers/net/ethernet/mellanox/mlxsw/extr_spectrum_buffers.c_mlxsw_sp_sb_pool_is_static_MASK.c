
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_sb_pr {scalar_t__ mode; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mlxsw_sp_sb_pr* FUNC_0 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static bool
FUNC_1(struct mlxsw_sp *VAR_1, u16 VAR_2)
{
 struct mlxsw_sp_sb_pr *VAR_3 = FUNC_0(VAR_1, VAR_2);

 return VAR_3->mode == VAR_0;
}
