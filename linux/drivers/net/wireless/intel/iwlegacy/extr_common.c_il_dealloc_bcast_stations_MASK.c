
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_stations; } ;
struct il_priv {scalar_t__ num_stations; int sta_lock; TYPE_2__* stations; TYPE_1__ hw_params; } ;
struct TYPE_4__ {int used; int * lq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct il_priv *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_2(&VAR_2->sta_lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_2->hw_params.max_stations; VAR_4++) {
  if (!(VAR_2->stations[VAR_4].used & VAR_0))
   continue;

  VAR_2->stations[VAR_4].used &= ~VAR_1;
  VAR_2->num_stations--;
  FUNC_0(VAR_2->num_stations < 0);
  FUNC_1(VAR_2->stations[VAR_4].lq);
  VAR_2->stations[VAR_4].lq = ((void*)0);
 }
 FUNC_3(&VAR_2->sta_lock, VAR_3);
}
