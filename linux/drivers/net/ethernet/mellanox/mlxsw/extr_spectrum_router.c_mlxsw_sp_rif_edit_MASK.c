
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_3, u16 VAR_4,
        const char *VAR_5, int VAR_6)
{
 char VAR_7[VAR_0];
 int VAR_8;

 FUNC_5(VAR_7, VAR_4);
 VAR_8 = FUNC_1(VAR_3->core, FUNC_0(VAR_2), VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_3(VAR_7, VAR_6);
 FUNC_2(VAR_7, VAR_5);
 FUNC_4(VAR_7, VAR_1);
 return FUNC_6(VAR_3->core, FUNC_0(VAR_2), VAR_7);
}
