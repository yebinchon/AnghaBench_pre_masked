
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {scalar_t__ driver_type; int registered; scalar_t__ allowed_protocols; int managed_alloc; int minor; int dev; int lock; int (* close ) (struct rc_dev*) ;scalar_t__ users; int timer_repeat; int timer_keyup; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rc_dev*) ;
 int FUNC_8 (struct rc_dev*) ;
 int VAR_2 ;
 int FUNC_9 (struct rc_dev*) ;

void FUNC_10(struct rc_dev *VAR_3)
{
 if (!VAR_3)
  return;

 if (VAR_3->driver_type == VAR_0)
  FUNC_4(VAR_3);

 FUNC_0(&VAR_3->timer_keyup);
 FUNC_0(&VAR_3->timer_repeat);

 FUNC_8(VAR_3);

 FUNC_5(&VAR_3->lock);
 if (VAR_3->users && VAR_3->close)
  VAR_3->close(VAR_3);
 VAR_3->registered = 0;
 FUNC_6(&VAR_3->lock);





 if (VAR_3->allowed_protocols != VAR_1)
  FUNC_3(VAR_3);

 FUNC_1(&VAR_3->dev);

 FUNC_2(&VAR_2, VAR_3->minor);

 if (!VAR_3->managed_alloc)
  FUNC_7(VAR_3);
}
