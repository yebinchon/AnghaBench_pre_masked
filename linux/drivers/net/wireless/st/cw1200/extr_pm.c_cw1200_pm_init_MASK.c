
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_pm_state {int stay_awake; int lock; } ;
struct cw1200_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;

int FUNC_2(struct cw1200_pm_state *VAR_1,
     struct cw1200_common *VAR_2)
{
 FUNC_0(&VAR_1->lock);

 FUNC_1(&VAR_1->stay_awake, VAR_0, 0);

 return 0;
}
