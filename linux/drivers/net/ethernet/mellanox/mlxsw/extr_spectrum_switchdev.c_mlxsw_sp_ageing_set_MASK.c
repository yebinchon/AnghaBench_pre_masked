
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp {TYPE_1__* bridge; int core; } ;
struct TYPE_2__ {int ageing_time; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_2, u32 VAR_3)
{
 char VAR_4[VAR_0];
 int VAR_5;

 FUNC_1(VAR_4, VAR_3);
 VAR_5 = FUNC_2(VAR_2->core, FUNC_0(VAR_1), VAR_4);
 if (VAR_5)
  return VAR_5;
 VAR_2->bridge->ageing_time = VAR_3;
 return 0;
}
