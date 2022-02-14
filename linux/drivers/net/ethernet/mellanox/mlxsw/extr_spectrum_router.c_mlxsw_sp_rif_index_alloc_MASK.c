
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlxsw_sp {TYPE_1__* router; int core; } ;
struct TYPE_2__ {int * rifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_2, u16 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->core, VAR_1); VAR_4++) {
  if (!VAR_2->router->rifs[VAR_4]) {
   *VAR_3 = VAR_4;
   return 0;
  }
 }

 return -VAR_0;
}
