
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; int flags; scalar_t__ parent; } ;
struct pcmcia_socket {TYPE_1__* io; int dev; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_2__ {scalar_t__ InUse; struct resource* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,struct resource*) ;
 int FUNC_1 (struct resource*) ;
 int FUNC_2 (struct resource*) ;
 scalar_t__ FUNC_3 (struct resource*) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_socket *VAR_2, struct resource *VAR_3)
{
 resource_size_t VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 FUNC_0(&VAR_2->dev, "release_io_space for %pR\n", VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (!VAR_2->io[VAR_5].res)
   continue;
  if ((VAR_2->io[VAR_5].res->start <= VAR_3->start) &&
      (VAR_2->io[VAR_5].res->end >= VAR_3->end)) {
   VAR_2->io[VAR_5].InUse -= VAR_4;
   if (VAR_3->parent)
    FUNC_2(VAR_3);
   VAR_3->start = VAR_3->end = 0;
   VAR_3->flags = VAR_0;

   if (VAR_2->io[VAR_5].InUse == 0) {
    FUNC_2(VAR_2->io[VAR_5].res);
    FUNC_1(VAR_2->io[VAR_5].res);
    VAR_2->io[VAR_5].res = ((void*)0);
   }
  }
 }
}
