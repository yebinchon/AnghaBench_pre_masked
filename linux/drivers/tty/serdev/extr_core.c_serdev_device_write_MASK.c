
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serdev_device {int write_lock; int write_comp; TYPE_1__* ops; struct serdev_controller* ctrl; } ;
struct serdev_controller {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* write_buf ) (struct serdev_controller*,unsigned char const*,size_t) ;} ;
struct TYPE_3__ {int write_wakeup; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct serdev_controller*,unsigned char const*,size_t) ;
 long FUNC_4 (int *,long) ;

int FUNC_5(struct serdev_device *VAR_4,
   const unsigned char *VAR_5, size_t VAR_6,
   long VAR_7)
{
 struct serdev_controller *VAR_8 = VAR_4->ctrl;
 int VAR_9 = 0;
 int VAR_10;

 if (!VAR_8 || !VAR_8->ops->write_buf || !VAR_4->ops->write_wakeup)
  return -VAR_0;

 if (VAR_7 == 0)
  VAR_7 = VAR_3;

 FUNC_0(&VAR_4->write_lock);
 do {
  FUNC_2(&VAR_4->write_comp);

  VAR_10 = VAR_8->ops->write_buf(VAR_8, VAR_5, VAR_6);
  if (VAR_10 < 0)
   break;

  VAR_9 += VAR_10;
  VAR_5 += VAR_10;
  VAR_6 -= VAR_10;

  if (VAR_6 == 0)
   break;

  VAR_7 = FUNC_4(&VAR_4->write_comp,
            VAR_7);
 } while (VAR_7 > 0);
 FUNC_1(&VAR_4->write_lock);

 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_7 <= 0 && VAR_9 == 0) {
  if (VAR_7 == -VAR_1)
   return -VAR_1;
  else
   return -VAR_2;
 }

 return VAR_9;
}
