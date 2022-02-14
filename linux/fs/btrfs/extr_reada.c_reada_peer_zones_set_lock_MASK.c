
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reada_zone {unsigned long end; int ndevs; scalar_t__ device; int locked; TYPE_1__** devs; } ;
struct TYPE_2__ {int reada_zones; } ;


 unsigned long VAR_0 ;
 struct reada_zone* FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct reada_zone *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned long VAR_4 = VAR_1->end >> VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1->ndevs; ++VAR_3) {
  struct reada_zone *VAR_5;
  VAR_5 = FUNC_0(&VAR_1->devs[VAR_3]->reada_zones, VAR_4);
  if (VAR_5 && VAR_5->device != VAR_1->device)
   VAR_5->locked = VAR_2;
 }
}
