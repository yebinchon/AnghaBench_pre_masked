
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_tunnel {int npaths; TYPE_1__** paths; } ;
struct TYPE_2__ {int activated; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

bool FUNC_2(struct tb_tunnel *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->npaths; VAR_1++) {
  FUNC_0(!VAR_0->paths[VAR_1]->activated);
  if (FUNC_1(VAR_0->paths[VAR_1]))
   return 1;
 }

 return 0;
}
