
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int target; int state; int state_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct dasd_device *VAR_3, int VAR_4)
{
 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->state_mutex);

 if (VAR_2 && VAR_4 > VAR_0)
  VAR_4 = VAR_0;
 if (VAR_3->target != VAR_4) {
  if (VAR_3->state == VAR_4)
   FUNC_5(&VAR_1);
  VAR_3->target = VAR_4;
 }
 if (VAR_3->state != VAR_3->target)
  FUNC_0(VAR_3);
 FUNC_4(&VAR_3->state_mutex);
 FUNC_2(VAR_3);
}
