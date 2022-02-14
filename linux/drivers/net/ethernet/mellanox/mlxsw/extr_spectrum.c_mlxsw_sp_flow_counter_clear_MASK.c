
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,unsigned int,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_4,
           unsigned int VAR_5)
{
 char VAR_6[VAR_1];

 FUNC_1(VAR_6, VAR_5, VAR_2,
       VAR_0);
 return FUNC_2(VAR_4->core, FUNC_0(VAR_3), VAR_6);
}
