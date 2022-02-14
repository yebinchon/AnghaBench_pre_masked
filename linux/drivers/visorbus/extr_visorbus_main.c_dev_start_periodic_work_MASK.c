
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct visor_device {int timer_active; TYPE_1__ timer; int device; scalar_t__ being_removed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct visor_device *VAR_3)
{
 if (VAR_3->being_removed || VAR_3->timer_active)
  return -VAR_0;


 FUNC_1(&VAR_3->device);
 VAR_3->timer.expires = VAR_2 + VAR_1;
 FUNC_0(&VAR_3->timer);
 VAR_3->timer_active = 1;
 return 0;
}
