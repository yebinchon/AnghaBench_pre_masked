
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* router; int core; } ;
struct TYPE_2__ {int * rifs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->core, VAR_0); VAR_2++)
  FUNC_1(VAR_1->router->rifs[VAR_2]);

 FUNC_2(VAR_1->router->rifs);
}
