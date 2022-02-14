
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u16 ;
struct mlxsw_res {int dummy; } ;
struct mlxsw_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct mlxsw_core*,char*,int) ;
 int FUNC_4 (struct mlxsw_res*,scalar_t__,int ) ;

int FUNC_5(struct mlxsw_core *VAR_4, char *VAR_5,
          struct mlxsw_res *VAR_6)
{
 int VAR_7, VAR_8;
 u64 VAR_9;
 u16 VAR_10;
 int VAR_11;

 if (!VAR_6)
  return 0;

 FUNC_2(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_1;
      VAR_7++) {
  VAR_11 = FUNC_3(VAR_4, VAR_5, VAR_7);
  if (VAR_11)
   return VAR_11;

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_10 = FUNC_1(VAR_5, VAR_8);
   VAR_9 = FUNC_0(VAR_5, VAR_8);

   if (VAR_10 == VAR_3)
    return 0;

   FUNC_4(VAR_6, VAR_10, VAR_9);
  }
 }




 return -VAR_0;
}
