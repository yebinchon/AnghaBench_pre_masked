
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,unsigned int,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_3)
{
 char VAR_4[VAR_1];
 unsigned int VAR_5;

 FUNC_1(VAR_2, VAR_4);






 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_2(VAR_4, VAR_5, FUNC_4(VAR_5 << 2));

 return FUNC_3(VAR_3->core, FUNC_0(VAR_2), VAR_4);
}
