
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_2, u16 VAR_3)
{
 char VAR_4[VAR_0];
 int VAR_5;

 FUNC_3(VAR_4, VAR_3);
 VAR_5 = FUNC_1(VAR_2->core, FUNC_0(VAR_1), VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_4, 0);
 return FUNC_4(VAR_2->core, FUNC_0(VAR_1), VAR_4);
}
