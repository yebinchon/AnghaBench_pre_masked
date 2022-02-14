
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {scalar_t__ num_stations; int sta_lock; TYPE_1__* stations; } ;
struct TYPE_2__ {int used; int * lq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct iwl_priv *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->sta_lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!(VAR_3->stations[VAR_4].used & VAR_1))
   continue;

  VAR_3->stations[VAR_4].used &= ~VAR_2;
  VAR_3->num_stations--;
  if (FUNC_0(VAR_3->num_stations < 0))
   VAR_3->num_stations = 0;
  FUNC_1(VAR_3->stations[VAR_4].lq);
  VAR_3->stations[VAR_4].lq = ((void*)0);
 }
 FUNC_3(&VAR_3->sta_lock);
}
