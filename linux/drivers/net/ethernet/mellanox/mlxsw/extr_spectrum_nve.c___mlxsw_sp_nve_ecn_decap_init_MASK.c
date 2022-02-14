
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp {int core; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,int ,int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp *VAR_4,
      u8 VAR_5, u8 VAR_6)
{
 char VAR_7[VAR_1];
 bool VAR_8, VAR_9 = 0;
 u8 VAR_10;

 VAR_8 = !!FUNC_1(VAR_6, VAR_5, &VAR_9);
 VAR_10 = VAR_9 ? VAR_0 : VAR_5;

 FUNC_2(VAR_7, VAR_6, VAR_5, VAR_10,
        VAR_8, VAR_8 ? VAR_2 : 0);
 return FUNC_3(VAR_4->core, FUNC_0(VAR_3), VAR_7);
}
