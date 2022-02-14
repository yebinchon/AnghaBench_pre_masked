
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct mlxsw_sp_upper {int dummy; } ;
struct mlxsw_sp {struct mlxsw_sp_upper* lags; } ;



__attribute__((used)) static inline struct mlxsw_sp_upper *
FUNC_0(struct mlxsw_sp *VAR_0, u16 VAR_1)
{
 return &VAR_0->lags[VAR_1];
}
