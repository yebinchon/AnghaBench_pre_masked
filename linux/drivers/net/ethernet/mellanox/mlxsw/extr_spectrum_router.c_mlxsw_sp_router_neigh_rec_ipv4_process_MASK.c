
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct mlxsw_sp*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_sp *VAR_1,
         char *VAR_2,
         int VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2,
        VAR_3);

 VAR_4++;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  int VAR_6;

  VAR_6 = VAR_3 * VAR_0 + VAR_5;
  FUNC_1(VAR_1, VAR_2,
             VAR_6);
 }

}
