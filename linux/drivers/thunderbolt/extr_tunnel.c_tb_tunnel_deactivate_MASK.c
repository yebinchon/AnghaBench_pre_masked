
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_tunnel {int npaths; TYPE_1__** paths; int (* activate ) (struct tb_tunnel*,int) ;} ;
struct TYPE_2__ {scalar_t__ activated; } ;


 int FUNC_0 (struct tb_tunnel*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct tb_tunnel*,char*) ;

void FUNC_3(struct tb_tunnel *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0, "deactivating\n");

 if (VAR_0->activate)
  VAR_0->activate(VAR_0, 0);

 for (VAR_1 = 0; VAR_1 < VAR_0->npaths; VAR_1++) {
  if (VAR_0->paths[VAR_1] && VAR_0->paths[VAR_1]->activated)
   FUNC_1(VAR_0->paths[VAR_1]);
 }
}
