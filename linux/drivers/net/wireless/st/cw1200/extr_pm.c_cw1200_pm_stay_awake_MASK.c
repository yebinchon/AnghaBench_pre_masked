
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long expires; } ;
struct cw1200_pm_state {int lock; TYPE_1__ stay_awake; } ;


 long VAR_0 ;
 int FUNC_0 (TYPE_1__*,long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct cw1200_pm_state *VAR_1,
     unsigned long VAR_2)
{
 long VAR_3;
 FUNC_1(&VAR_1->lock);
 VAR_3 = VAR_1->stay_awake.expires - VAR_0;
 if (!FUNC_3(&VAR_1->stay_awake) || VAR_3 < (long)VAR_2)
  FUNC_0(&VAR_1->stay_awake, VAR_0 + VAR_2);
 FUNC_2(&VAR_1->lock);
}
