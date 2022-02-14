
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_m {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_m *VAR_2, u8 VAR_3,
        u8 *VAR_4, u8 *VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7;

 FUNC_2(VAR_6, VAR_3);
 VAR_7 = FUNC_4(VAR_2->core, FUNC_0(VAR_1), VAR_6);
 if (VAR_7)
  return VAR_7;
 *VAR_4 = FUNC_1(VAR_6, 0);
 *VAR_5 = FUNC_3(VAR_6);

 return 0;
}
