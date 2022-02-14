
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {int channels; int lock; TYPE_1__* bcs; } ;
struct TYPE_2__ {int use_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct cardstate *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(VAR_0, "blocking all channels");
 FUNC_1(&VAR_1->lock, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1->channels; ++VAR_3)
  ++VAR_1->bcs[VAR_3].use_count;
 FUNC_2(&VAR_1->lock, VAR_2);
}
