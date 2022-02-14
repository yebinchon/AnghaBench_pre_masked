
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_tunnel {int npaths; TYPE_1__** paths; } ;
struct TYPE_2__ {scalar_t__ activated; } ;


 int VAR_0 ;
 int FUNC_0 (struct tb_tunnel*,char*) ;
 int FUNC_1 (struct tb_tunnel*) ;

int FUNC_2(struct tb_tunnel *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->npaths; VAR_2++) {
  if (VAR_1->paths[VAR_2]->activated) {
   FUNC_0(VAR_1,
           "trying to activate an already activated tunnel\n");
   return -VAR_0;
  }
 }

 return FUNC_1(VAR_1);
}
