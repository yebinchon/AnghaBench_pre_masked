
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlxsw_sp_sb_pr {scalar_t__ size; int mode; } ;
struct mlxsw_sp {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxsw_sp*,scalar_t__) ;
 int FUNC_1 (struct mlxsw_sp*,int,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_1,
    const struct mlxsw_sp_sb_pr *VAR_2,
    size_t VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  u32 VAR_6 = VAR_2[VAR_4].size;
  u32 VAR_7;

  if (VAR_6 == VAR_0) {
   VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_2[VAR_4].mode,
         0, 1);
  } else {
   VAR_7 = FUNC_0(VAR_1, VAR_6);
   VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_2[VAR_4].mode,
         VAR_7, 0);
  }
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
