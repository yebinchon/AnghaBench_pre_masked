
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int,int *) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(void *VAR_2, u32 VAR_3,
            bool *VAR_4)
{
 struct mlxsw_sp *VAR_5 = VAR_2;
 char VAR_6[VAR_0];
 int VAR_7;

 FUNC_1(VAR_6, VAR_3, 1, ((void*)0));
 VAR_7 = FUNC_3(VAR_5->core, FUNC_0(VAR_1), VAR_6);
 if (VAR_7)
  return VAR_7;
 FUNC_2(VAR_6, VAR_4);
 return 0;
}
