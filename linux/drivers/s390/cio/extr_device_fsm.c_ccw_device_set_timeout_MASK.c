
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ccw_device {TYPE_1__* private; } ;
struct TYPE_7__ {scalar_t__ expires; } ;
struct TYPE_6__ {TYPE_2__ timer; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

void
FUNC_4(struct ccw_device *VAR_1, int VAR_2)
{
 if (VAR_2 == 0) {
  FUNC_1(&VAR_1->private->timer);
  return;
 }
 if (FUNC_3(&VAR_1->private->timer)) {
  if (FUNC_2(&VAR_1->private->timer, VAR_0 + VAR_2))
   return;
 }
 VAR_1->private->timer.expires = VAR_0 + VAR_2;
 FUNC_0(&VAR_1->private->timer);
}
