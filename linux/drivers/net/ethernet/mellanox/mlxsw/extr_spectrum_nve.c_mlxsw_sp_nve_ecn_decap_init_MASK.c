
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlxsw_sp*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_2)
{
 int VAR_3;


 for (VAR_3 = VAR_1; VAR_3 <= VAR_0; VAR_3++) {
  int VAR_4;


  for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++) {
   int VAR_5;

   VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
   if (VAR_5)
    return VAR_5;
  }
 }

 return 0;
}
