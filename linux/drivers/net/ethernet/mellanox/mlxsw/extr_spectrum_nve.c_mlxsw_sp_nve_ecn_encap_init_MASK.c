
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_4)
{
 int VAR_5;


 for (VAR_5 = VAR_1; VAR_5 <= VAR_0; VAR_5++) {
  u8 VAR_6 = FUNC_0(0, VAR_5);
  char VAR_7[VAR_2];
  int VAR_8;

  FUNC_2(VAR_7, VAR_5, VAR_6);
  VAR_8 = FUNC_3(VAR_4->core, FUNC_1(VAR_3),
          VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
