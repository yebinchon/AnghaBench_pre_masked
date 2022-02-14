
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* sb; int core; } ;
struct TYPE_2__ {int * ports; int * prs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_sp *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->core);
 int VAR_2;

 for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--)
  FUNC_2(&VAR_0->sb->ports[VAR_2]);
 FUNC_0(VAR_0->sb->prs);
 FUNC_0(VAR_0->sb->ports);
}
