
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct mlxsw_sp_sb_pr {scalar_t__ mode; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp*,scalar_t__) ;
 struct mlxsw_sp_sb_pr* FUNC_1 (struct mlxsw_sp*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct mlxsw_sp *VAR_2, u16 VAR_3,
         u32 VAR_4)
{
 struct mlxsw_sp_sb_pr *VAR_5 = FUNC_1(VAR_2, VAR_3);

 if (VAR_5->mode == VAR_0)
  return VAR_4 - VAR_1;
 return FUNC_0(VAR_2, VAR_4);
}
