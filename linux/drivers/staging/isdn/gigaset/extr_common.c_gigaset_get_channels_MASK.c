
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {int channels; int lock; TYPE_1__* bcs; } ;
struct TYPE_2__ {scalar_t__ use_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct cardstate *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2->channels; ++VAR_4)
  if (VAR_2->bcs[VAR_4].use_count) {
   FUNC_2(&VAR_2->lock, VAR_3);
   FUNC_0(VAR_0,
    "could not allocate all channels");
   return -VAR_1;
  }
 for (VAR_4 = 0; VAR_4 < VAR_2->channels; ++VAR_4)
  ++VAR_2->bcs[VAR_4].use_count;
 FUNC_2(&VAR_2->lock, VAR_3);

 FUNC_0(VAR_0, "allocated all channels");

 return 0;
}
